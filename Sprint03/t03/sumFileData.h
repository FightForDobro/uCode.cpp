#ifndef TESLIBRARY_OUTPUTANY_H
#define TESLIBRARY_OUTPUTANY_H

#include <fstream>
#include <iterator>

template <class T>
T sumFileData(const std::string& fileName)
{
    std::ifstream file(fileName);
    std::istream_iterator<T> eos;
    std::istream_iterator<T>file_iti (file);
    T sum = 0;

    while (file_iti != eos)
        sum += *file_iti++;

    return sum;
}

#endif //TESLIBRARY_OUTPUTANY_H
