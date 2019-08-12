#![feature(proc_macro_hygiene, decl_macro)]
#[macro_use] extern crate rocket;

// All sub-modules at this level will be defined here.
pub mod item;
pub mod routefuncs;
pub mod db;

extern crate futures;
extern crate futures_state_stream;
extern crate tokio;
extern crate tiberius;
extern crate serde;
#[macro_use] extern crate serde_derive;


fn main() {
    rocket::ignite()
        .mount("/itemserver", routes![routefuncs::get_all_items])
        .mount("/itemserver", routes![routefuncs::get_single_item])
        .mount("/itemserver", routes![routefuncs::new_item])
        .launch();
}
