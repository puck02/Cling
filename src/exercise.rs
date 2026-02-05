use serde::Deserialize;
use std::fs;
use std::path::PathBuf;

#[derive(Debug, Deserialize)]
pub struct InfoToml {
    pub format_version: u32,
    pub project: Project,
    pub welcome_message: String,
    pub final_message: String,
    pub exercises: Vec<Exercise>,
}

#[derive(Debug, Deserialize)]
pub struct Project {
    pub name: String,
    pub version: String,
    pub language: String,
    pub c_standard: String,
}

#[derive(Debug, Clone, Deserialize)]
pub struct Exercise {
    pub name: String,
    pub dir: String,
    pub mode: Mode,
    pub hint: String,
    #[serde(default)]
    pub hint2: Option<String>,
    #[serde(default)]
    pub hint3: Option<String>,
}

#[derive(Debug, Clone, Deserialize, PartialEq)]
#[serde(rename_all = "lowercase")]
pub enum Mode {
    Compile,
    Test,
}

impl Exercise {
    pub fn path(&self) -> PathBuf {
        PathBuf::from("exercises")
            .join(&self.dir)
            .join(format!("{}.c", self.name))
    }
    
    pub fn get_hint(&self, level: usize) -> Option<String> {
        match level {
            0 => Some(self.hint.clone()),
            1 => self.hint2.clone(),
            2 => self.hint3.clone(),
            _ => None,
        }
    }
    
    pub fn hint_count(&self) -> usize {
        let mut count = 1; // 至少有一个hint
        if self.hint2.is_some() { count += 1; }
        if self.hint3.is_some() { count += 1; }
        count
    }
}

pub struct ExerciseList {
    pub exercises: Vec<Exercise>,
    pub welcome_message: String,
    pub final_message: String,
}

impl ExerciseList {
    pub fn from_file(path: &str) -> Result<Self, String> {
        let content = fs::read_to_string(path)
            .map_err(|e| format!("无法读取 {}: {}", path, e))?;
        
        let info: InfoToml = toml::from_str(&content)
            .map_err(|e| format!("解析 TOML 失败: {}", e))?;
        
        Ok(ExerciseList {
            exercises: info.exercises,
            welcome_message: info.welcome_message,
            final_message: info.final_message,
        })
    }
    
    pub fn find(&self, name: &str) -> Option<&Exercise> {
        self.exercises.iter().find(|e| e.name == name)
    }
    
    pub fn get_next(&self, current: &str) -> Option<&Exercise> {
        let pos = self.exercises.iter().position(|e| e.name == current)?;
        self.exercises.get(pos + 1)
    }
}
