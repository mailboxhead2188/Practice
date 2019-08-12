
fn some_tests_on_strings() {
    let string = "This is a test string";
    let sub_string = &string[0..4];
    let other_sub_string = &string[5..];
    println!("{}", string);
    println!("{}", sub_string);
    println!("{}", other_sub_string);

    let main_string = String::from("What in tarnation?");
    let sub_string1 = create_sub_string("Hello there", 0, 2);
    let sub_string2 = create_sub_string(&main_string, 0, 5);
    let sub_string3 = create_sub_string(&sub_string2, 0, 2);
    let sub_string5 = create_sub_string("Hi", 0, 55);
    let sub_string5 = create_sub_string("Hi", 55, 1000);

    println!("{}, {}, {}, {}", main_string, sub_string1, sub_string2, sub_string3);
}


fn create_sub_string(full_string: &str, start: u32, end: u32) -> String {
    let len_of_str = full_string.len();
    let start_char = start as usize;
    let end_char = end as usize;
    if (start_char > (len_of_str - 1)) ||
       (end_char > (len_of_str - 1)) ||
       (end_char < start_char) {
           println!("Either the start or the end of the specified was beyond the length of the string");
           let empty = String::from("");
           empty
       } else
       {
        full_string[start_char..end_char].to_string()
       }
}