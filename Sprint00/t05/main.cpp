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
    auto period_count = std::count_if(string.begin(), string.end(), [](auto n ){R n == '.';});

    if (!(result && symbols_count <= 1) || string[0] == '.' || period_count > 1)
        std::cerr << invarg_err << string << std::endl, exit(0);
}

int main(int argc ,char **argv)
{
    if (argc != 5)
        std::cerr << usage_err << std::endl, exit(0);

    std::vector<std::string> args(argv, argv + argc);

    if (std::count_if(args[2].begin(), args[2].end(), [](auto n){return n == '.'}) != 0)
        std::cerr << invarg_err << args[2] << std::endl, exit(0);

    std::for_each(args.begin() + 2, args.end(), check_arg);

    auto name = args[1];
    auto level = std::stoi(args[2]);
    auto helth = std::stof(args[3]);
    auto stamina = std::stod(args[4]);

    std::cout << "Name = " << name << std::endl;
    std::cout << "Level = " << level << std::endl;
    std::cout << "Health = " << helth << std::endl;
    std::cout << "Stamina = " << stamina << std::endl;
}
