#[derive(Serialize, Deserialize)]
pub struct Item {
    pub name: String,
    pub description: String,
    pub id: i32,
}

impl Item {
    pub fn json(&self) -> String {
        let mut json_string: String = String::from("{\n \"name\" : \"");
        json_string.push_str(&self.name);
        json_string.push_str("\" \n \"description\" : \"");
        json_string.push_str(&self.description);
        json_string.push_str("\" \n \"id\" : \"");
        json_string.push_str(&self.id.to_string());
        json_string.push_str("\"\n }");
        String::from(json_string)
    }

    pub fn default() -> Item {
        Item { name: String::from(""), description: String::from(""), id: -1 }
    }
}