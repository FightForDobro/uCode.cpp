#include <iostream>
#include <string>
#include "sumFileData.h"

int main(int argc, char** argv)
{
    if (argc == 2)
    {
        std::string filename = argv[1];
        std::cout << "using int:\t\t" << sumFileData<int>(filename) << std::endl;
        std::cout << "using double:\t" << sumFileData<double>(filename) << std::endl;
    }
    return 0;
}