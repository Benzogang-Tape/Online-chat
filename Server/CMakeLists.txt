set(CLIENT_NAME ${PROJECT_NAME}-server)

set(SOURCE main.cpp
        App.cpp)

set(HEADERS App.hpp)

add_executable(${CLIENT_NAME} ${SOURCE} ${HEADERS})

include_directories("../lib/asio-1.28.0/include")