#include "inventory.h"

int main()
{
    std::string cmd;
    std::vector<std::string> inventory;

    while(true)
    {
        std::cout << "Enter command:> ";
        std::getline(std::cin, cmd);

        if (cmd == s_cmd)
            lib::show(inventory);
        else if (cmd == h_cmd)
            lib::help();
        else if (cmd == e_cmd)
            std::cout << "Bye." << std::endl, exit(0);
        else
            lib::validate_cmd(const_cast<char *>(cmd.c_str()), inventory);
    }

}
