#ifndef UNIQUEWORDS_WRITE_TO_FILE_H
#define UNIQUEWORDS_WRITE_TO_FILE_H

#include <algorithm>
#include <fstream>
#include <set>

namespace lib
{
    void write_to_file(char *filename, std::multiset<std::string> &words);
}

#endif // UNIQUEWORDS_WRITE_TO_FILE_H
