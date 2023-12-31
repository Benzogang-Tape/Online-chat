#pragma once
#ifndef ONLINE_CHAT_MESSAGE_HPP
#define ONLINE_CHAT_MESSAGE_HPP

#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace OnlineChat {
    struct Message {
        public:
            static const size_t headerLength{ 4 };
            static const size_t maxBodyLength{ 228 };

            Message();

            [[nodiscard]] const char* getData() const;

            char* getData();

            [[nodiscard]] size_t messageLength() const;

            [[nodiscard]] const char* messageBody() const;

            char* messageBody();

            [[nodiscard]] size_t bodyLength() const;

            void bodyLength(size_t);

            bool decodeHeader();

            void encodeHeader();

        private:
            char data_[headerLength + maxBodyLength];
            size_t bodyLength_;

    };
} // namespace OnlineChat


OnlineChat::Message::Message() : bodyLength_(0), data_("") {}

const char *OnlineChat::Message::getData() const { return data_; }

char *OnlineChat::Message::getData() { return data_; }

size_t OnlineChat::Message::messageLength() const { return headerLength + bodyLength_; }

const char *OnlineChat::Message::messageBody() const { return data_ + headerLength; }

char *OnlineChat::Message::messageBody() { return data_ + headerLength; }

size_t OnlineChat::Message::bodyLength() const { return bodyLength_; }

void OnlineChat::Message::bodyLength(size_t new_length) {
    bodyLength_ = new_length;
    if(bodyLength_ > maxBodyLength)
        bodyLength_ = maxBodyLength;
}

#endif //ONLINE_CHAT_MESSAGE_HPP
