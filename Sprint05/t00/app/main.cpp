#include "Draugr.h"
#include "algorithm"

bool is_number(std::string number)
{
    return std::all_of(number.begin(), number.end(), ::isdigit);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cerr << "usage: ./draugr [shoutNumber]\n", exit(EXIT_FAILURE);

    if (is_number(argv[1]) && std::stoi(argv[1]) <= 8)
    {
        Draugr draugr;
        draugr.shoutPhrase(std::stoi(argv[1]));
    }
    else
        std::cerr << "Invalid shoutNumber\n", exit(EXIT_FAILURE);

    return 0;

}
