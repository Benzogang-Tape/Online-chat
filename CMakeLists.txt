cmake_minimum_required(VERSION 3.26)

set(PROJECT_NAME Online_chat)
project(${PROJECT_NAME})


set(CMAKE_CXX_STANDARD 20)

add_executable(Online_chat main.cpp)

target_include_directories(Online_chat PRIVATE "./lib/asio-1.28.0/include")


add_subdirectory(Server)
add_subdirectory(Client)