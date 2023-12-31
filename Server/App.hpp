#pragma once
#ifndef ONLINE_CHAT_APP_HPP
#define ONLINE_CHAT_APP_HPP

#include <iostream>
#include <deque>
#include <memory>
#include <set>
#include <boost/asio.hpp>
#include <message.hpp>

using boost::asio::ip::tcp;

namespace OnlineChat {
    struct Participant {
        virtual void deliver(const OnlineChat::Message&) {};
    };

    using participantPointer = std::shared_ptr<Participant>;

    struct Room {
        public:
            Room() = default;
            void joinChat(const participantPointer&);
            void leaveChat(const participantPointer&);
            void deliverMessage(const OnlineChat::Message&);
        private:
            std::deque<OnlineChat::Message> recentMessages_;
            std::set<participantPointer> participants_;
            static const size_t maxMessageQueue{ 54 };
    };

    struct Session : Participant, std::enable_shared_from_this<Session> {
        public:
            Session(tcp::socket, Room&);
            void start();
            void deliver(const OnlineChat::Message&) override;
        private:
            Room& room_;
            tcp::socket socket_;
            OnlineChat::Message messageItem_;
            std::deque<OnlineChat::Message> Messages_;
            void readHeader();
            void readBody();
            void write();
    };

    struct Server {
        public:
            Server(boost::asio::io_context&, const tcp::endpoint&);
        private:
            tcp::acceptor acceptor_;
            Room room_;
            void connectToChat();
    };
}

#endif //ONLINE_CHAT_APP_HPP
