#include "App.hpp"

void OnlineChat::Room::joinChat(const OnlineChat::participantPointer &participant) {

}

void OnlineChat::Room::leaveChat(const OnlineChat::participantPointer &participant) {

}

void OnlineChat::Room::deliverMessage(const OnlineChat::Message &messageItem) {

}

OnlineChat::Session::Session(tcp::socket socket, OnlineChat::Room &room) : socket_(std::move(socket)), room_(room) {}

void OnlineChat::Session::start() {

}

void OnlineChat::Session::deliver(const OnlineChat::Message &messageItem) {

}

void OnlineChat::Session::readHeader() {

}

void OnlineChat::Session::readBody() {

}

void OnlineChat::Session::write() {

}

OnlineChat::Server::Server(boost::asio::io_context &io_context, const tcp::endpoint &endpoint) : acceptor_(io_context, endpoint) {
    connectToChat();
}

void OnlineChat::Server::connectToChat() {

}
