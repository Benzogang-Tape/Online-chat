#include "App.hpp"

int main(int argc, char* argv[])
{
    asio::io_service io_service;

    asio::ip::tcp::socket client_socket(io_service);

    client_socket.connect(asio::ip::tcp::endpoint(
            asio::ip::address::from_string("127.0.0.1"),
            1478));

    return 0;
}