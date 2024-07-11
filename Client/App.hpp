#pragma once
#ifndef ONLINE_CHAT_APP_HPP
#define ONLINE_CHAT_APP_HPP

#include <iostream>
#include <thread>
#include <deque>
#include <boost/asio.hpp>
#include <message.hpp>

using boost::asio::ip::tcp;

namespace OnlineChat {
    struct client {
        public:
            client(boost::asio::io_context&, const tcp::resolver::results_type&);
            void write(const OnlineChat::Message&);
            void close();
        private:
            boost::asio::io_context& context_;
            tcp::socket socket_;
            OnlineChat::Message readMessage_;
            std::deque<OnlineChat::Message> writeMessage_;
            void connect(const tcp::resolver::results_type&);
            void readHeader();
            void readBody();
            void write();
    };
}

#endif //ONLINE_CHAT_APP_HPP
