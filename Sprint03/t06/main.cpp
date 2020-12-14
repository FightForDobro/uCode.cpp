#include <iostream>
#include <vector>
#include "isPalindrome.h"

int main(int argc, char** argv)
{
    std::vector<int> arr {1, 2, 3, 2, 1};
    std::string radar = "radar";
    auto res = isPalindrome(radar.begin(), radar.end());
    std::cout << res << std::endl;
    return 0;
}