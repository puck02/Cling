use crate::exercise::{Exercise, Mode};
use std::process::{Command, Stdio};
use std::fs;

pub fn verify(exercise: &Exercise) -> Result<String, String> {
    let path = exercise.path();
    
    if !path.exists() {
        return Err(format!("文件不存在: {}", path.display()));
    }
    
    match exercise.mode {
        Mode::Compile => verify_compile(exercise),
        Mode::Test => verify_test(exercise),
    }
}

fn verify_compile(exercise: &Exercise) -> Result<String, String> {
    let path = exercise.path();
    let out_path = path.with_extension("out");
    
    // 编译
    let output = Command::new("gcc")
        .args(&[
            "-Wall",
            "-Wextra",
            "-Werror",
            "-std=c11",
            path.to_str().unwrap(),
            "-o",
            out_path.to_str().unwrap(),
        ])
        .output()
        .map_err(|e| format!("执行gcc失败: {}", e))?;
    
    if !output.status.success() {
        let stderr = String::from_utf8_lossy(&output.stderr);
        return Err(format!("编译失败:\n{}", stderr));
    }
    
    // 清理输出文件
    let _ = fs::remove_file(out_path);
    
    Ok("编译成功".to_string())
}

fn verify_test(exercise: &Exercise) -> Result<String, String> {
    let path = exercise.path();
    let out_path = path.with_extension("out");
    let unity_path = "tests/unity/unity.c";
    
    // 特殊处理snake_test，需要编译snake_logic.c
    let mut compile_args = vec![
        "-Wall".to_string(),
        "-Wextra".to_string(),
        "-std=c11".to_string(),
        "-I".to_string(), "tests/unity".to_string(),
        "-DUNITY_INCLUDE_DOUBLE".to_string(),
        path.to_str().unwrap().to_string(),
    ];
    
    // 如果是snake_test，添加snake_logic.c
    if exercise.name == "snake_test" {
        let logic_path = path.parent().unwrap().join("snake_logic.c");
        if logic_path.exists() {
            compile_args.push(logic_path.to_str().unwrap().to_string());
        }
    }
    
    compile_args.push(unity_path.to_string());
    compile_args.push("-o".to_string());
    compile_args.push(out_path.to_str().unwrap().to_string());
    
    // 编译（包含Unity）
    let output = Command::new("gcc")
        .args(&compile_args)
        .output()
        .map_err(|e| format!("执行gcc失败: {}", e))?;
    
    if !output.status.success() {
        let stderr = String::from_utf8_lossy(&output.stderr);
        return Err(format!("编译失败:\n{}", stderr));
    }
    
    // 运行测试
    let test_output = Command::new(&out_path)
        .output()
        .map_err(|e| format!("运行测试失败: {}", e))?;
    
    // 清理输出文件
    let _ = fs::remove_file(out_path);
    
    if !test_output.status.success() {
        let stdout = String::from_utf8_lossy(&test_output.stdout);
        let stderr = String::from_utf8_lossy(&test_output.stderr);
        return Err(format!("测试失败:\n{}\n{}", stdout, stderr));
    }
    
    let stdout = String::from_utf8_lossy(&test_output.stdout);
    Ok(stdout.to_string())
}
