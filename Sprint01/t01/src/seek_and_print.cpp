#include "lib.h"

static int seek(std::string haystack, const std::string &needle)
{
    std::transform(haystack.begin(), haystack.end(), haystack.begin(), ::tolower);
    return haystack.find(needle);
}


void lib::seek_and_print(std::vector<std::string> &names)
{
    std::vector<std::string> toFind {"mercer", "emer", "jim"};

    for(std::string& name : names)
        for(const std::string& find : toFind)
            if(seek(name, find) != -1)
                std::cout << name << ", move along" << std::endl;
}
