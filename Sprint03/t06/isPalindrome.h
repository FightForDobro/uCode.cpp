#ifndef TESLIBRARY_OUTPUTANY_H
#define TESLIBRARY_OUTPUTANY_H

#include <fstream>
#include <iterator>
#include <algorithm>

template <class BidirectionalIterator>
bool isPalindrome(BidirectionalIterator begin, BidirectionalIterator end)
{
    if (begin == end)
        return false;

    else while (true)
    {
        --end;

        if (*begin != *end)
            return false;

        if (begin++ == end)
            return true;
    }
}

#endif //TESLIBRARY_OUTPUTANY_H
