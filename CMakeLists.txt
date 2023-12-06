cmake_minimum_required(VERSION 3.26)

set(PROJECT_NAME Online_chat)
project(${PROJECT_NAME})


set(CMAKE_CXX_STANDARD 20)

add_executable(Online_chat main.cpp
        Client/main.cpp
        Client/App.cpp
        Client/App.hpp
        Server/App.cpp
        Server/App.hpp
        Server/main.cpp
        utils/message.cpp
        utils/message.hpp)

add_subdirectory(Server)
add_subdirectory(Client)


#target_include_directories(Online_chat PRIVATE "./lib/boost_asio_1_28_0/")

