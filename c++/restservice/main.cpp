#include "stdafx.h"
#include "itemservice.h"

using namespace web;
using namespace utility;
using namespace http;
using namespace web::http::experimental::listener;

std::unique_ptr<ItemServer> m_itemServer;

void on_initialize(const string_t &address)
{
    uri_builder uri(address);
    uri.append_path(U("list"));

    auto addr = uri.to_uri().to_string();
    m_itemServer = std::unique_ptr<ItemServer>(new ItemServer(addr));
    m_itemServer->open();

    return;
}

void on_shutdown()
{
    m_itemServer->close();
    return;
}

int main(int argc, char **argv)
{
    utility::string_t port = U("5000");
    if (argc == 2)
    {
        port = *argv[1];
    }

    utility::string_t address = U("https://mcortezcppwebapp.azurewebsites.net");
    //address.append(port);

    on_initialize(address);
    std::string line;
    std::getline(std::cin, line);

    on_shutdown();
    return 0;
}