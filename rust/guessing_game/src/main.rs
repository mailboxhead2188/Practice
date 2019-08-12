use std::io;

fn main() {
    let mut guess = String::new();
    let result = io::stdin().read_line(&mut guess);
    result.expect("Error!");

    println!("You guessed {}", guess);
}
