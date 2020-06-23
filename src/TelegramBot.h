#pragma once

#include <iostream>
#include <string>
#include <sstream>

#include "rapidjson/document.h"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>
#include <curlpp/Infos.hpp>

using namespace std;

class TelegramBot
{
    public:
    TelegramBot(const std::string token);
    ~TelegramBot(){};

    bool send_message(std::string message);
    void who();

private:
    std::string token_;
    rapidjson::Document document_;
};
