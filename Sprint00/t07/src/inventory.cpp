#include "inventory.h"

void lib::insert(std::vector<std::string>& inventory, std::string item)
{
    std::array<std::string, 4>possible_items{"w", "f", "a", "p"};

    if (possible_items.end() == std::find(possible_items.begin(), possible_items.end(), item))
        std::cout << invitm << std::endl;

    if (inventory.size() == 12)
        std::cout << fulinv << std::endl;

    inventory.emplace(inventory.end(), item);
}

void lib::remove(std::vector<std::string>& inventory, std::string item)
{
    auto res = std::find(inventory.begin(), inventory.end(), item);

    if(*res->data() == 0)
        std::cout << invitm << std::endl;

    inventory.erase(res);
}

void lib::show(std::vector<std::string>& inventory)
{
    std::cout << "Inventory {";

    for (auto & i : inventory)
        std::cout << " " + i;

    for (int i = inventory.size(); i < 12; i++)
        std::cout << " -";

    std::cout << " }" << std::endl;
}

void lib::help()
{
    std::cout << "Available commands:\n"
                 "1. insert <itemType>\n"
                 "2. remove <itemType>\n"
                 "3. show\n"
                 "4. help\n"
                 "5. exit" << std::endl;
}


void lib::validate_cmd(std::string &cmd)
{
    std::array<std::string, 5> possible_cmds = {i_cmd, r_cmd, s_cmd, h_cmd, e_cmd};

    if(possible_cmds.end() == std::find(possible_cmds.begin(), possible_cmds.end(), cmd))
        std::cout << invcmd << std::endl;
}
