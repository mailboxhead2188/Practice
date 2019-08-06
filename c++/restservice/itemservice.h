#pragma once

#include "cpprest/json.h"
#include "cpprest/http_listener.h"
#include "cpprest/uri.h"
#include "cpprest/asyncrt_utils.h"
#include "cpprest/producerconsumerstream.h"
#include <cppdb/frontend.h>

using namespace web;
using namespace http;
using namespace utility;
using namespace http::experimental::listener;

class ItemServer
{
    public:
        ItemServer() {}
        ItemServer(utility::string_t url);

        void open();
        void close();

        static const std::string DBConnString;

    private:

        void handle_listall(http_request message);
        void handle_listone(http_request message);
        void handle_put(http_request message);
        void handle_post(http_request message);
        void handle_delete(http_request message);

        cppdb::session connect_to_db();
        void disconnect_from_db(cppdb::session);

        http_listener m_listenForListAll;
        http_listener m_listForSingleItem;
        http_listener m_updateSingleItem;
        http_listener m_createNewItem;
        http_listener m_deleteItem;
};