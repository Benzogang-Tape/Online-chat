set (SERVER_NAME ${PROJECT_NAME}-server)

set (SOURCE main.cpp
        App.cpp)

set (HEADERS App.hpp
        ${PROJECT_SOURCE_DIR}/Message/message.hpp)

include_directories(${PROJECT_SOURCE_DIR}/Message
        "\\wsl.localhost/Ubuntu/usr/include/boost")

add_executable(${SERVER_NAME} ${SOURCE} ${HEADERS})
