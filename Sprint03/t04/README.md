# Sum File Data

### Description

Create a function template `outputContainer` that prints the contents of a container to
the standard output. One item per line.
Still no pairs here.

Use `std::ostream_iterator` for the solution.

### Synopsis
```c++
template <typename Container>
void outputContainer(const Container& container);
```

### Received knowledge
1. [std::ostream_iterator](https://en.cppreference.com/w/cpp/iterator/ostream_iterator)
1. [Output Iterator](https://en.cppreference.com/w/cpp/iterator/output_iterator)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)