//#include "fill_set.h"
//#include "is_word.h"
#include "book_saver.h"
#include "cmd_handler.h"

int main(int argc, char **argv)
{
    std::string cmd;
    std::map<std::string, std::string> books;

    while (true)
    {
        std::cout << "enter command:> ";
        std::getline(std::cin, cmd);
        lib::cmd_handler(cmd, books);
    }
}