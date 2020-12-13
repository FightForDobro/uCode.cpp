# Output Any

### Description

Create a function template outputAny that prints the contents of a container to the
standard output. One item per line. The function template must work correctly with all
containers except those, where the iterator points to a pair.

### Synopsis
```c++
template <class Container>
void outputAny(const Container& c);
```

### Received knowledge
1. [Tempalte](https://en.cppreference.com/w/cpp/language/templates)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)