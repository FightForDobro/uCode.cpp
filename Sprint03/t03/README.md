# Sum File Data

### Description

Create a function template that takes a filename as a parameter. The file will contain
some numbers separated by a single space. Each number is a valid integer or double. The
file contents will always be valid. The function must calculate and return the sum of the
numbers inside a given file.
The main.cpp that is used for the CONSOLE OUTPUT runs the function twice (with `int`, and
with `double`).

Use `std::istream_iterator` for the solution.

### Retrun
Returns the sum of numbers listed in the file.

### Synopsis
```c++
template <class T>
T sumFileData(const std::string& fileName);
```

### Received knowledge
1. [std::istream_iterator](https://en.cppreference.com/w/cpp/iterator/istream_iterator)
1. [InputIterator](https://en.cppreference.com/w/cpp/iterator/input_iterator)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)