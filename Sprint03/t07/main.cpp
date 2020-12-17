#include <iostream>
#include <vector>
#include "sortValues.h"

int main(int argc, char** argv)
{
    std::vector<int> arr {1, 2, 3, 2, 1};
    std::string radar = "radar";
    sortValues(radar.begin(), radar.end());
    std::cout << radar << std::endl;
    return 0;
}