#include "Draugr.h"
#include "algorithm"

bool is_number(std::string number)
{
    return std::all_of(number.begin(), number.end(), ::isdigit);
}

int main(int argc, char **argv)
{
    if (argc < 2 || argc > 4)
        std::cerr << "usage: ./draugr [shoutNumber] [health] [frostResist]\n", exit(EXIT_FAILURE);

    if (is_number(argv[1]) && std::stoi(argv[1]) <= 8)
    {
        if (argc == 2)
        {
            Draugr draugr;
            draugr.shoutPhrase(std::stoi(argv[1]));
        }
        else if (argc == 3)
        {
            try
            {
                Draugr draugr(std::stod(argv[2]));
                draugr.shoutPhrase(std::stoi(argv[1]));
                Draugr draugr1(50, std::stoi(argv[2]));
                draugr1.shoutPhrase(std::stoi(argv[1]));
            }
            catch (...)
            {
                std::cerr << "Error" << std::endl, exit(EXIT_FAILURE);
            }
        }
        else if (argc == 4)
        {
            try
            {
                Draugr draugr(std::stod(argv[2]), std::stoi(argv[3]));
                draugr.shoutPhrase(std::stoi(argv[1]));
            }
            catch (...)
            {
                std::cerr << "Error" << std::endl, exit(EXIT_FAILURE);
            }
        }


    }
    else
        std::cerr << "Invalid shoutNumber\n", exit(EXIT_FAILURE);

    return 0;

}
