use crate::item::{Item};
use crate::db;

use serde_json::Result as JsonResult;
use rocket_contrib::json::Json;

#[get("/items")]
pub fn get_all_items() -> String {
    let mut items: Vec<Item> = db::query_db(String::from("SELECT name, description, id FROM dbo.Items"));
    let mut rtn_json: String = String::from("");
    for i in &mut items {
        rtn_json.push_str(&i.json());
        rtn_json.push_str("\n");
    }

    rtn_json
}

#[get("/items/<_id>")]
pub fn get_single_item(_id: i32) -> Option<Json<Item>> {
    let mut query_string = String::from("SELECT name, description, id FROM dbo.Items WHERE id=");
    query_string.push_str(&_id.to_string());
    let mut items: Vec<Item> = db::query_db(String::from(query_string));
    if items.len() != 1 {
        Option::None
    }
    /*
    let mut rtn_json: String = String::from("");
    for i in &mut items {
        rtn_json.push_str(&i.json());
        rtn_json.push_str("\n");
    }

    rtn_json
    */
}

#[post("/create", format = "application/json", data = "<item>")]
pub fn new_item(item: Json<Item>) -> JsonResult<()> { 
    let query_string: String = format!("INSERT INTO dbo.Items (Name, Description) VALUES ('{}', '{}')", item.name, item.description);
    println!("{}", query_string);
    db::run_statement(query_string);
    Ok(())
}
