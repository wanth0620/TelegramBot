#pragma once

#include <string>

class TelegramBot
{
public:
    TelegramBot(const std::string token){};
    ~TelegramBot(){};

    bool send_message(std::string message);
private:
    const std::string token_;
}
