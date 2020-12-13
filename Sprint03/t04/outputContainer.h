#ifndef TESLIBRARY_OUTPUTANY_H
#define TESLIBRARY_OUTPUTANY_H

#include <fstream>
#include <iterator>
#include <algorithm>

template <typename Container>
void outputContainer(const Container& container)
{
    std::ostream_iterator<typename Container::value_type> out_it (std::cout, "\n");
    std::copy(container.begin(), container.end(), out_it);
}

#endif //TESLIBRARY_OUTPUTANY_H
