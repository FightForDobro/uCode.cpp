#ifndef UNIQUEWORDS_WRITE_TO_FILE_H
#define UNIQUEWORDS_WRITE_TO_FILE_H

#include <fstream>
#include <set>

namespace lib
{
    void write_to_file(char *filename, std::set<std::string> &words);
}

#endif // UNIQUEWORDS_WRITE_TO_FILE_H
