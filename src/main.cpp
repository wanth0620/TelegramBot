#include "TelegramBot.h"

int main()
{
    using namespace rapidjson;
    Document document;
    std::cout << "Testing" << std::endl;
    TelegramBot bot("1196681836:AAGChiD1eCjYAgtnUa3x2GdaQw3zjLLpwLE");
    bot.who();
}
