#include <iostream>
#include <string>
#include <vector>
#include "outputContainer.h"

int main(int argc, char** argv)
{

    std::vector<std::string> arr {"A", "B", "C", "D", "E"};
//    std::vector<int> arr {1, 2, 3, 4, 5};

    outputContainer(arr);
    return 0;
}