use crate::exercise::ExerciseList;
use crate::state::StateFile;
use colored::Colorize;
use indicatif::{ProgressBar, ProgressStyle};

pub fn show_progress(exercises: &ExerciseList, state: &StateFile) {
    let completed = state.completed.len();
    let total = exercises.exercises.len();
    let percentage = if total > 0 { completed * 100 / total } else { 0 };
    
    let pb = ProgressBar::new(total as u64);
    pb.set_style(
        ProgressStyle::default_bar()
            .template("{msg}\n{bar:40.cyan/blue} {pos}/{len} ({percent}%)")
            .unwrap()
            .progress_chars("━━╸"),
    );
    pb.set_position(completed as u64);
    pb.set_message(format!("{}", "进度".cyan().bold()));
    pb.finish();
    
    println!();
}

pub fn clear_screen() {
    print!("\x1B[2J\x1B[1;1H");
}
