set(CLIENT_NAME ${PROJECT_NAME}-server)

set(SOURCE main.cpp
        App.cpp)

set(HEADERS App.hpp)

include_directories(${PROJECT_SOURCE_DIR}/utils)

add_executable(${CLIENT_NAME} ${SOURCE} ${HEADERS})