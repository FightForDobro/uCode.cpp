#include "inventory.h"

int main()
{
    std::string cmd;
    std::vector<std::string> inventory;

    while(1)
    {
        std::cout << "Enter command:> " << std::endl;
        std::cin >> cmd;

        lib::validate_cmd(cmd);

        if(cmd == i_cmd)
            lib::insert(inventory, "a");
    }

}
