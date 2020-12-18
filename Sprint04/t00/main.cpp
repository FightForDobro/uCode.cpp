#include "algorithmUtils.h"
#include <iostream>
#include <list>

bool *cmp()
{
    return reinterpret_cast<bool *>(true);
}

int main()
{

    std::list<int> vec{1, 2 ,3, 2, 5};
//    Utils::RemoveAllIf(vec, [](auto& i){return (i & 1) == 0;});
//    for (auto& i: vec){std::cout << i << std::endl;}
//    const int to_find = 4;
//    std::cout << (Utils::FindIf(vec, [](auto& i){return i == 1;}) == vec.end()) << std::endl;

    auto res = Utils::MaxElement(vec, [](int a, int b) {return a > b;});

//    int a = 5;
//    float b = 5.0;
//
//    auto res = Utils::Modify(a, b);
//
//    std::cout << a << " " << res << std::endl;
    return 0;
}
