#ifndef TESLIBRARY_OUTPUTANY_H
#define TESLIBRARY_OUTPUTANY_H

#include <fstream>
#include <iterator>
#include <algorithm>

template <class RandomAccessIterator>
RandomAccessIterator sortValues(RandomAccessIterator begin, RandomAccessIterator end)
{
    for (auto it = begin; it != end; ++it) {
        auto const selection = std::min_element(it, end);
        std::iter_swap(selection, it);
    }
}

#endif //TESLIBRARY_OUTPUTANY_H
