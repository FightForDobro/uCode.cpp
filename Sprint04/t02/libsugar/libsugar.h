#ifndef DRAGONBORN_LIBSUGAR_H
#define DRAGONBORN_LIBSUGAR_H

#include <iostream>
#include <string>
namespace libsugar
{
    template<typename T>
    void raise_error(T &error_msg)
    { std::cout << error_msg << std::endl, exit(EXIT_FAILURE); }
}
#endif //DRAGONBORN_LIBSUGAR_H
