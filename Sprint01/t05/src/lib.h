#ifndef SPRINT01_LIB_H
#define SPRINT01_LIB_H

#include <forward_list>      // std::forward_list
#include <algorithm>        // std::copy
#include <iostream>        // std::cout
#include <fstream>
#include <ios>

namespace lib
{
    void write_to_file(const char *filename, std::forward_list<std::string> &new_names);
}

#endif //SPRINT01_LIB_H
