#include "algorithmUtils.h"
#include <iostream>
#include <list>

bool *cmp()
{
    return reinterpret_cast<bool *>(true);
}

int main()
{

//    std::list<int> vec{1, 2 ,3, 2, 5 ,1, 5, 7, 26532 ,1251 ,1 ,5, 76, 823 ,6712 ,1 ,314, 5,343, 256};
    std::list<int> vec{1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4};
//    Utils::RemoveAllIf(vec, [](auto& i){return (i & 1) == 0;});
//    for (auto& i: vec){std::cout << i << std::endl;}
//    const int to_find = 4;
//    std::cout << (Utils::FindIf(vec, [](auto& i){return i == 1;}) == vec.end()) << std::endl;

//    Utils::Sort(vec, [](auto& n, auto &c){return n > c;});

    auto res = Utils::IndexOfIf(vec, [](auto& n){return !(n & 1);});
    std::cout << res << std::endl;
//    Utils::Unique(vec, [](auto &n, auto &c){return n == c;});

//    int a = 5;
//    float b = 5.0;
//
//    auto res = Utils::Modify(a, b);
//
//    std::cout << a << " " << res << std::endl;
    return 0;
}
