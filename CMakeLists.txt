cmake_minimum_required(VERSION 3.26)

set(PROJECT_NAME Online-chat)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Server)
add_subdirectory(Client)
