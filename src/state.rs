use std::collections::HashSet;
use std::fs;
use std::io::{self, Write};

pub struct StateFile {
    pub completed: HashSet<String>,
    pub current: Option<String>,
    pub hint_levels: std::collections::HashMap<String, usize>,
}

impl StateFile {
    pub fn load(path: &str) -> Self {
        let mut state = StateFile {
            completed: HashSet::new(),
            current: None,
            hint_levels: std::collections::HashMap::new(),
        };
        
        if let Ok(content) = fs::read_to_string(path) {
            for line in content.lines() {
                if line.starts_with("completed:") {
                    let name = line.trim_start_matches("completed:").trim();
                    state.completed.insert(name.to_string());
                } else if line.starts_with("current:") {
                    let name = line.trim_start_matches("current:").trim();
                    state.current = Some(name.to_string());
                } else if line.starts_with("hint:") {
                    let parts: Vec<&str> = line.trim_start_matches("hint:").trim().split(':').collect();
                    if parts.len() == 2 {
                        if let Ok(level) = parts[1].parse() {
                            state.hint_levels.insert(parts[0].to_string(), level);
                        }
                    }
                }
            }
        }
        
        state
    }
    
    pub fn save(&self, path: &str) {
        let mut content = String::new();
        
        for name in &self.completed {
            content.push_str(&format!("completed: {}\n", name));
        }
        
        if let Some(current) = &self.current {
            content.push_str(&format!("current: {}\n", current));
        }
        
        for (name, level) in &self.hint_levels {
            content.push_str(&format!("hint: {}:{}\n", name, level));
        }
        
        let _ = fs::write(path, content);
    }
    
    pub fn is_completed(&self, name: &str) -> bool {
        self.completed.contains(name)
    }
    
    pub fn complete_exercise(&mut self, name: &str) {
        self.completed.insert(name.to_string());
    }
    
    pub fn set_current(&mut self, name: &str) {
        self.current = Some(name.to_string());
    }
    
    pub fn get_hint_level(&self, name: &str) -> usize {
        *self.hint_levels.get(name).unwrap_or(&0)
    }
    
    pub fn increment_hint_level(&mut self, name: &str) {
        let level = self.get_hint_level(name);
        self.hint_levels.insert(name.to_string(), level + 1);
    }
    
    pub fn reset_exercise(&mut self, name: &str) {
        self.completed.remove(name);
        self.hint_levels.remove(name);
    }
}
