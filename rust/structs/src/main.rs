struct Item {
    name: String,
    description: String,
    id: i32
}

impl Item {
    fn json(&self) -> String {
        let mut json_string: String = String::from("{\n \"name\" : \"");
        json_string.push_str(&self.name);
        json_string.push_str("\" \n \"description\" : \"");
        json_string.push_str(&self.description);
        json_string.push_str("\" \n \"id\" : \"");
        json_string.push_str(&self.id.to_string());
        json_string.push_str("\"\n }");
        String::from(json_string)
    }
}

fn main() {
    let itm = Item {
        name: String::from("Bacon"), 
        description: String::from("Some bacon!"),
        id: 1
    };
    println!("{}", itm.json());


}

