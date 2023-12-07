#include "App.hpp"

int main(int argc, char* argv[])
{
    asio::io_service io_service;

    asio::ip::tcp::acceptor acceptor_server(
            io_service,
            asio::ip::tcp::endpoint(asio::ip::tcp::v4(), 1478));

    asio::ip::tcp::socket server_socket(io_service);

    acceptor_server.accept(server_socket);




    return 0;
}