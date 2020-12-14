#ifndef TESLIBRARY_OUTPUTANY_H
#define TESLIBRARY_OUTPUTANY_H

#include <fstream>
#include <iterator>
#include <algorithm>

template <class Container>
void squareValue(Container& container){std::for_each(container.begin(), container.end(), [](auto& n){n = n * n;});}

#endif //TESLIBRARY_OUTPUTANY_H
