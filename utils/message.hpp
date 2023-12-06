#pragma once
#include <vector>

namespace OnlineChat {
    struct messsage {
        unsigned id;
        u_int32_t size;
        std::vector<u_int8_t> body;
    };
}
