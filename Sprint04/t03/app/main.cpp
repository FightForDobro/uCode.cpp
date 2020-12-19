#include <map>
#include <iterator>

#include "Dragonborn.h"
#include "libsugar.h"
#include "algorithmUtils.h"

int main()
{
    std::vector<std::string> experssion_pats;
    std::istream_iterator<std::string> it = std::istream_iterator<std::string>(std::cin);

    for (; it != std::istream_iterator<std::string>(); it++)
        printf("%s\n", (*it).c_str());

    return 0;
}
