#include <system_error>
#include <optional>


namespace OnlineChat{

    struct server {
        boost::asio::io_context& io_context;
        boost::asio::ip::tcp::acceptor acceptor;
        std::optional<boost::asio::ip::tcp::socket> socket;

        server(boost::asio::io_context& io_context, std::uint16_t port) :
                io_context(io_context),
                acceptor(
                        io_context,
                        boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), port)) {}

        void async_accept();
    };

}



