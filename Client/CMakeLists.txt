set(CLIENT_NAME ${PROJECT_NAME}-client)

set(SOURCE main.cpp
        App.cpp)

set(HEADERS App.hpp)

add_executable(${CLIENT_NAME} ${SOURCE} ${HEADERS})