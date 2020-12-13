#include <iostream>
#include <string>
#include "sumOfArguments.h"

int main(int argc, char** argv)
{
    std::string a = "A";
    std::string b = "B";
    std::string c = "C";
    std::string d = "D";
    std::string e = "E";

    std::cout << sumOfArguments(a, b, c, d, e) << std::endl;
    return 0;
}