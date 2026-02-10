use crate::exercise::ExerciseList;
use crate::state::StateFile;
use crate::verify;
use colored::Colorize;

pub fn run(exercises: &ExerciseList, name: &str, state: &mut StateFile) {
    match exercises.find(name) {
        Some(exercise) => {
            println!("\n{} {}", "🚀 运行:".cyan().bold(), name);
            println!("{}", "=".repeat(60));
            
            match verify::verify(exercise) {
                Ok(output) => {
                    println!("{}", "✅ 成功！".green().bold());
                    if !output.is_empty() {
                        println!("\n{}", output);
                    }
                    
                    state.complete_exercise(name);
                    
                    // 设置下一个练习为当前练习
                    if let Some(next) = exercises.get_next(name) {
                        state.set_current(&next.name);
                        println!("\n{} {}", "下一个练习:".yellow(), next.name);
                    } else {
                        println!("\n{}", "🎉 恭喜！你完成了所有练习！".green().bold());
                        println!("\n{}", exercises.final_message);
                    }
                    
                    state.save(".cubytes-state.txt");
                }
                Err(e) => {
                    println!("{}", "❌ 失败".red().bold());
                    println!("\n{}", e);
                }
            }
        }
        None => {
            eprintln!("{} 找不到练习: {}", "错误:".red().bold(), name);
        }
    }
}
