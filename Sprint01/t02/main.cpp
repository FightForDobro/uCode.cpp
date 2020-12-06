#include "lib.h"

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cerr << "usage: ./visitAll [[name,stamina,distance] ...]" << std::endl, exit(0);

    else if (argc == 2)
        std::cerr << "Mission: Impossible" << std::endl, exit(0);

    std::deque<lib::t_location> locations;

    for (int i = 1; i < argc; i++)
    {
        lib::s_location Location = lib::parse_line(argv[i]);
        Location.base_id = i - 1;
        locations.emplace_back(Location);
    }

    lib::find_town(locations);

    for (auto &location : locations)
        std::cout << location.base_id << ". " << location.town << std::endl;
}


