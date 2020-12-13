# Template Addition

### Description

Create a function template add with two parameters that compiles with the given main.cpp
from the SYNOPSIS. If parameters are strings, it concatenates them. If parameters are
numeric, it adds them the mathematically.

### Retrun
Returns the result of addition of two parameters.

### Synopsis
```c++
#include <iostream>
#include <string>
#include "templateAddition.h"

int main(int argc, char** argv) 
{
    double d1 = 3;
    double d2 = 4.3;
    std::cout << add(d1, d2) << std::endl;
    
    std::string s1 = "Hello";
    std::string s2 = " there";
    std::cout << add(s1, s2) << std::endl;
    
    return 0;
}
```

### Received knowledge
1. [Tempalte](https://en.cppreference.com/w/cpp/language/templates)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)