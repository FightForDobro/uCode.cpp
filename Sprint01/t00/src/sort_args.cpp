#include "lib.h"

void lib::sort_args(std::array<std::string, 5> *args)
{
    std::sort(args->begin(), args->end());
}
