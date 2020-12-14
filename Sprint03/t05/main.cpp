#include <iostream>
#include <vector>
#include "squareValue.h"

int main(int argc, char** argv)
{
    std::vector<float> arr {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "Before: \t";
    for(auto x: arr){std::cout << x << " ";};

    squareValue(arr);

    std::cout << "\nAfter: \t\t";
    for(auto x: arr){std::cout << x << " ";};

    return 0;
}