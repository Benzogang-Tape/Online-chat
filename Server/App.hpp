#pragma once
#include <system_error>
#include <iostream>
#include <asio.hpp>

namespace Server {


    std::string getData(asio::ip::tcp::socket& socket);

    void sendData(asio::ip::tcp::socket& socket, const std::string& message);


};

