#include "lib.h"

static int seek(std::string haystack)
{
    std::vector<std::string> toFind {"mercer", "emer", "jim"};
    std::transform(haystack.begin(), haystack.end(), haystack.begin(), ::tolower);

    return std::find_if(toFind.begin(), toFind.end(),
                        [&](auto n){if(haystack.find(n) != -1)return true;})->begin().base() != NULL;
}


void lib::seek_and_print(std::vector<std::string> &names)
{
    for (const auto& n : names)
        if (seek(n))
            std::cout << n << ", move along" << std::endl;
}
