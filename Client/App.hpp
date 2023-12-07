#pragma once
#include <iostream>
#include <string>
#include <asio.hpp>

namespace Client {

    std::string getData(asio::ip::tcp::socket& socket);

    void sendData(asio::ip::tcp::socket& socket, const std::string& message);

}

