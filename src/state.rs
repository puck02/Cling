use std::collections::HashSet;
use std::fs;
use std::io::{self, Write};

pub struct StateFile {
    pub completed: HashSet<String>,
    pub current: Option<String>,
}

impl StateFile {
    pub fn load(path: &str) -> Self {
        let mut state = StateFile {
            completed: HashSet::new(),
            current: None,
        };
        
        if let Ok(content) = fs::read_to_string(path) {
            for line in content.lines() {
                if line.starts_with("completed:") {
                    let name = line.trim_start_matches("completed:").trim();
                    eprintln!("DEBUG: Loading completed: {}", name);
                    state.completed.insert(name.to_string());
                } else if line.starts_with("current:") {
                    let name = line.trim_start_matches("current:").trim();
                    state.current = Some(name.to_string());
                }
            }
        }
        
        eprintln!("DEBUG: Total completed loaded: {}", state.completed.len());
        
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
    
    pub fn reset_exercise(&mut self, name: &str) {
        self.completed.remove(name);
    }
}
