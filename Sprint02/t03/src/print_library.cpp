#include "print_library.h"

void lib::print_library(std::multimap<std::string, std::string> &teslib)
{
    int index = 1;
    std::string key;
    for (auto &data: teslib)
    {
        if(key != data.first)
        {
            std::cout << data.first << ":" << std::endl;
            auto range = teslib.equal_range(data.first);

            for (auto i = range.first; i != range.second; ++i)
                std::cout << "\t" << index++ << ": " << i->second << std::endl;

            index = 1;
        }
        key = data.first;
    }
}