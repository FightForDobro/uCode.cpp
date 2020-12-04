#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define usage_err "usage: ./automaton [name] [level] [health] [stamina]"
#define invarg_err "Invalid argument: "
#define R return

void check_arg(const std::string &string)
{
    auto result = std::all_of(string.begin(), string.end(),
                              [](auto n){R isdigit(n) || n == '.' || n == '+' || n == '-';});
    auto symbols_count = std::count_if(string.begin(), string.end(), [](auto n ){R n == '+' || n == '-';});

    if (!(result && symbols_count <= 1) || string[0] == '.')
        std::cout << invarg_err << string << std::endl, exit(0);
}



int main(int argc ,char **argv)
{
    if (argc != 5)
        std::cerr << usage_err << std::endl, exit(0);

    std::vector<std::string> args(argv, argv + argc);
    std::for_each(args.begin() + 2, args.end(), check_arg);

    std::cout << "Name = " << args[1] << std::endl;
    std::cout << "Level = " << std::stoi(args[2]) << std::endl;
    std::cout << "Health = " << std::stof(args[3]) << std::endl;
    std::cout << "Stamina = " << std::stod(args[4]) << std::endl;
}

