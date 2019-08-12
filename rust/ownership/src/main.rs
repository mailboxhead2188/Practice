fn main() {
    let mut t = String::from("Hello");
    t.push_str(", world!");
    println!("{}",t);

    let x = get_length_of_string(&t);
    println!("{}", x);
}

fn get_length_of_string(s: &String) -> usize {
    s.len()
}


