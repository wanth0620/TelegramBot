#include "TelegramBot.h"

int main()
{
    using namespace rapidjson;
    Document document;
    std::cout << "Testing" << std::endl;
    
    ifstream Configuration("config.ini");
    
    string token;
    getline(Configuration, token);

    TelegramBot bot(token);
    bot.send_message("Hihi");
}
