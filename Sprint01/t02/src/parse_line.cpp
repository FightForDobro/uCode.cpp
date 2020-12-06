#include "lib.h"

static void validate_town(std::string &town)
{
    if (*std::find_if_not(town.begin(), town.end(), [](auto n){return std::isalpha(n) || n == 32;}) != 0)
        std::cerr << "Argument " << town << " is not valid" << std::endl, exit(0);
}

static void validate_stamina_or_distance(std::string &result)
{
    if (*std::find_if_not(result.begin(), result.end(), [](auto n){return std::isdigit(n);}) != 0)
        std::cerr << "Argument " << result << " is not valid" << std::endl, exit(0);
}

lib::t_location lib::parse_line(char *location)
{
    lib::t_location Location;
    std::istringstream tokenStream(location);

    std::getline(tokenStream, Location.town, ',');
    validate_town(Location.town);
    std::getline(tokenStream, Location.stamina, ',');
    validate_stamina_or_distance(Location.stamina);
    std::getline(tokenStream, Location.distance, ',');
    validate_stamina_or_distance(Location.distance);

    Location.result = std::stoi(Location.stamina) - std::stoi(Location.distance);

    return Location;
}
