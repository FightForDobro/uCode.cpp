#include "castSpells.h"

int castFloatToInt(float number)
{
    return static_cast<int>(number);
}

int* castToNonConstIntPtr(const int* ptr)
{
    return const_cast<int *>(ptr);
}

int main()
{
    float f_number = 3.14159265359;
    const int answer = 42;

    std::cout << "old float value: \033[1;31m" << f_number << "\033[0m type is: \033[1;31m"
    << typeid(f_number).name() << "\n\033[0mmagic cast to int: \033[1;31m"
    << castFloatToInt(f_number) << "\033[0m type is: \033[1;35m"
    << typeid(castFloatToInt(f_number)).name() << "\033[0m\n\n";

    std::cout << "const int value: \033[1;31m" << answer << "\033[0m type is: \033[1;31m" << typeid(answer).name()
    << "\n\033[0mmagic cast to int: \033[1;31m" << *castToNonConstIntPtr(&answer) << "\033[0m type is: \033[1;31m"
    << typeid(*castToNonConstIntPtr(&answer)).name() << "\033[0m\n";

    return 0;
}