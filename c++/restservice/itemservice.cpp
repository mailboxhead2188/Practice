#include "stdafx.h"
#include "itemservice.h"


using namespace std;
using namespace web;
using namespace utility;
using namespace http;
using namespace web::http::experimental::listener;
using namespace ::pplx;

const std::string ItemServer::DBConnString = "odbc:Driver={ODBC Driver 17 for SQL Server};Server=nodejssqlsvr.database.windows.net,1433;Database=nodejstestdb;Uid=mailboxhead;Pwd=big_mac88;Encrypt=yes;TrustServerCertificate=no;Connection Timeout=30;";

ItemServer::ItemServer(utility::string_t url) :
                       m_listenForListAll(url + "/all"),
                       m_listForSingleItem(url + "/item/"),
                       m_createNewItem(url + "/createitem/"),
                       m_updateSingleItem(url + "/updateitem/"),
                       m_deleteItem(url + "/deleteitem/")
{
    m_listenForListAll.support(methods::GET, std::bind(&ItemServer::handle_listall, this, std::placeholders::_1));
    m_listForSingleItem.support(methods::GET, std::bind(&ItemServer::handle_listone, this, std::placeholders::_1));
    m_updateSingleItem.support(methods::PUT, std::bind(&ItemServer::handle_put, this, std::placeholders::_1));
    m_createNewItem.support(methods::POST, std::bind(&ItemServer::handle_post, this, std::placeholders::_1));
    m_deleteItem.support(methods::DEL, std::bind(&ItemServer::handle_delete, this, std::placeholders::_1));
}

void ItemServer::open()
{
    m_listenForListAll.open().wait();
    m_listForSingleItem.open().wait();
    m_updateSingleItem.open().wait();
    m_createNewItem.open().wait();
    m_deleteItem.open().wait();
}

void ItemServer::close()
{
    m_listenForListAll.close().wait();
    m_listForSingleItem.close().wait();
    m_updateSingleItem.close().wait();
    m_createNewItem.close().wait();
    m_deleteItem.close().wait();
}

cppdb::session ItemServer::connect_to_db()
{
    cppdb::session sql(ItemServer::DBConnString);
    if (!sql.is_open())
    {
        throw "Connection could not be made";
    }
    return sql;
}

void ItemServer::disconnect_from_db(cppdb::session sql)
{
    sql.close();
}

void ItemServer::handle_listall(http_request message)
{
    cppdb::session sql = connect_to_db();
    cppdb::result allRows = sql << "SELECT * FROM dbo.Items";
    concurrency::streams::producer_consumer_buffer<char> buffer;
    
    while(allRows.next())
    {
        json::value j;
        std::string name;
        std::string description;
        std::string id;
        allRows.fetch(0, name);
        allRows.fetch(1, description);
        allRows.fetch(2, id);
        std::string jsonStr = "{ \"Name\" : \"" + name +
                      "\"  \"Description\" : \"" + description +
                      "\" \"Id\" : \"" + id + "\" } ";
        const char *jsonChar = jsonStr.c_str();
        buffer.putn_nocopy(jsonChar, jsonStr.length()).wait();
    }

    disconnect_from_db(sql);
    buffer.putc('\0').wait();
    buffer.close(std::ios_base::out).get();
    concurrency::streams::basic_istream<unsigned char> iStream(buffer);
    message.reply(status_codes::OK, iStream, "text/html");
}


void ItemServer::handle_listone(http_request message)
{
    cppdb::session sql = connect_to_db();

    // Get the Id of the item in the path
    web::uri uri = message.request_uri();
    std::vector<utility::string_t> request_path = web::uri::split_path(uri.path());
    utility::string_t id = request_path[request_path.size() - 1];

    cppdb::result allRows = sql << "SELECT * FROM dbo.Items WHERE Id=" + id;
    concurrency::streams::producer_consumer_buffer<char> buffer;
    
    // There should only be one row returned.
    int count = 0;
    while(allRows.next())
    {
        json::value j;
        std::string name;
        std::string description;
        std::string id;
        allRows.fetch(0, name);
        allRows.fetch(1, description);
        allRows.fetch(2, id);
        std::string jsonStr = "{ \"Name\" : \"" + name +
                      "\"  \"Description\" : \"" + description +
                      "\" \"Id\" : \"" + id + "\" } ";
        const char *jsonChar = jsonStr.c_str();
        buffer.putn_nocopy(jsonChar, jsonStr.length()).wait();
        count++;
    }

    if (count != 1)
    {
        throw "Too many or too few items returned.";
    }

    disconnect_from_db(sql);
    buffer.putc('\0').wait();
    buffer.close(std::ios_base::out).get();
    concurrency::streams::basic_istream<unsigned char> iStream(buffer);
    message.reply(status_codes::OK, iStream, "text/html");
}

void ItemServer::handle_put(http_request message)
{
    cout << "handle_put" << endl;
    message.reply(status_codes::OK);
}

void ItemServer::handle_post(http_request message)
{
    cout << "handle_post" << endl;
    message.reply(status_codes::OK);
}

void ItemServer::handle_delete(http_request message)
{
    cppdb::session sql = connect_to_db();

    // Get the Id of the item in the path
    web::uri uri = message.request_uri();
    std::vector<utility::string_t> request_path = web::uri::split_path(uri.path());
    utility::string_t id = request_path[request_path.size() - 1];

    // Best faith attempt
    sql << "DELETE FROM dbo.Items WHERE Id=" + id;

    disconnect_from_db(sql);
    message.reply(status_codes::OK);
}