#include <iostream>
#include <string>
#include <array>
#include "outputAny.h"

int main(int argc, char** argv)
{
    std::array<std::string, 5> array {"A", "B", "C", "D", "E"};
    outputAny(array);
}