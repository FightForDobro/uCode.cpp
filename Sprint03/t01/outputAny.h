#ifndef TESLIBRARY_OUTPUTANY_H
#define TESLIBRARY_OUTPUTANY_H

template <class Container>
void outputAny(const Container& c)
{
    for (auto& e: c)
        std::cout << e << std::endl;
}

#endif //TESLIBRARY_OUTPUTANY_H
