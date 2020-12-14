#include "referenceOrPointer.h"

void multiplyByPointer(int* ptr, int mult)
{
    if (ptr) *ptr *= mult;
}

void multiplyByReference(int& ref, int mult)
{
    ref *= mult;
}

int main()
{
    int num = 5;
    int operand = 2;
    std::cout << "Original num: " << num << std::endl;
    std::cout << "Operand is: " << operand << std::endl;

    multiplyByPointer(nullptr, operand);

    std::cout << "num multiplied by pointer: " << num << std::endl;

    multiplyByReference(num, operand);

    std::cout << "num multiplied by reference: " << num << std::endl;
}
