# Sum Of Arguments

### Description

Create a template function `sumOfArguments` that takes a varying number of arguments as a
parameter and sums them up.

### Retrun
Returns the sum of a varying number of arguments.

### Synopsis
```c++
template <class T, class ...Ts>
T sumOfArguments(T t, Ts... args);
```

### Received knowledge
1. [Tempalte](https://en.cppreference.com/w/cpp/language/templates)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)