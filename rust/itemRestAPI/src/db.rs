use futures::Future;
use futures_state_stream::StateStream;
use tokio::runtime::current_thread;
use tiberius::SqlConnection;
use crate::item::{Item};

pub fn query_db(query: String) -> Vec<Item> {
    let conn_str = get_conn_str();
    let mut rtn_vec: Vec<Item> = Vec::new();
    let future = SqlConnection::connect(&conn_str)
        .and_then(|conn| {
            conn.simple_query(query).for_each(|row| {
                let row_name: &str = row.get(0);
                let row_desc: &str = row.get(1);
                let row_id: i32 = row.get(2);
                let itm: Item = Item { name: row_name.to_owned(), description: row_desc.to_owned(), id: row_id };
                rtn_vec.push(itm);
                Ok(())
            })
        });
    current_thread::block_on_all(future).unwrap();
    rtn_vec
}

pub fn run_statement(query: String) {
    let conn_str = get_conn_str();
    let future = SqlConnection::connect(&conn_str)
        .and_then(|conn| {
            conn.simple_exec(query)
        });
    current_thread::block_on_all(future).unwrap();
}


fn get_conn_str() -> String {
    let conn_string = String::from("Server=tcp:nodejssqlsvr.database.windows.net,1433;Database=nodejstestdb;Uid=mailboxhead@nodejssqlsvr;Pwd=big_mac88;Encrypt=yes;TrustServerCertificate=no;");
    conn_string
}
