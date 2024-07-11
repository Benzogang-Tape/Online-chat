#include "App.hpp"

using boost::asio::ip::tcp;

OnlineChat::client::client(boost::asio::io_context &context,
                           const tcp::resolver::results_type &endpoints) : context_(context), socket_(context) {
    connect(endpoints);
}

void OnlineChat::client::write(const OnlineChat::Message &messageItem) {

}

void OnlineChat::client::close() {

}

void OnlineChat::client::connect(const tcp::resolver::results_type& endpoints) {

}

void OnlineChat::client::readHeader() {

}

void OnlineChat::client::readBody() {

}

void OnlineChat::client::write() {

}
