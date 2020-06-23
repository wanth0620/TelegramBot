#include "TelegramBot.h"

TelegramBot::TelegramBot(const std::string token):
token_{token}
{
}

void TelegramBot::who()
{
    curlpp::Easy request;
    const std::string url = "https://api.telegram.org/bot" + token_ + "/getMe";
    request.setOpt(new curlpp::options::Url(url)); 
    request.setOpt(new curlpp::options::Verbose(false));
    std::stringstream result;

    request.setOpt(cURLpp::Options::WriteStream(&result));
    request.perform();
    string tmp;
    result >> tmp;
    std::cout << tmp << std::endl;
    document_.Parse(tmp.c_str());
    cout << document_["result"]["username"].GetString() << endl;
    

    long http_code = 0;
    http_code = curlpp::infos::ResponseCode::get(request);
    
    /*
    if (http_code == 200) {
        std::cout << "Request succeeded, response: " << http_code << std::endl;
    } else {
        std::cout << "Request failed, response: " << http_code << std::endl;
    }*/
}
