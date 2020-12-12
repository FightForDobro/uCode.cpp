#ifndef UNIQUEWORDS_FILL_SET_H
#define UNIQUEWORDS_FILL_SET_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <ios>
#include <set>

#define raise_error std::cerr << "error" << std::endl, exit(0)

namespace lib
{
    void fill_set(char *filename, std::ifstream &file);
}

#endif //UNIQUEWORDS_FILL_SET_H
