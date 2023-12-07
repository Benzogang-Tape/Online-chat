#include <system_error>
#include <optional>
#include "asio.hpp"


namespace OnlineChat{

    struct server {
        asio::io_context& io_context;
        asio::ip::tcp::acceptor acceptor;
        std::optional<asio::ip::tcp::socket> socket;

        server(asio::io_context& io_context, std::uint16_t port) :
                io_context(io_context),
                acceptor(
                        io_context,
                        asio::ip::tcp::endpoint(asio::ip::tcp::v4(), port)) {}

        void async_accept();
    };

}



