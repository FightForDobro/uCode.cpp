#include "cmd_handler.h"
#include "add.h"
#include "remove.h"
#include "read.h"
#include "list.h"

void lib::cmd_handler(std::string &cmd, std::map<std::string, std::string> &books)
{
    if (cmd == quit_cmd)
        std::cout << "bye" << std::endl, exit(0);

    else if (cmd == list_cmd)
        lib::list(books);

    else
    {
        std::stringstream cmd_ss(cmd);
        std::string token;
        std::vector<std::string> tokens;

        while (std::getline(cmd_ss, token, ' '))
            tokens.emplace_back(token);

        if (tokens[0] == add_cmd)
            lib::add(tokens[1], books);

        else if (tokens[0] == read_cmd)
            lib::read(tokens[1], books);

        else if (tokens[0] == del_cmd)
            lib::remove(tokens[1], books);

        else
            std::cout << inv_cmd << std::endl;
    }
}
