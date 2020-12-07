#include "lib.h"

bool lib::check_ending(std::string &value)
{
    std::string ending = "vel";
    return value.size() >= ending.size() && 0 == value.compare(value.size() - ending.size(), ending.size(), ending);
}
