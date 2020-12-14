# Sort Values

### Description

Create a function template `sortValues` that sorts the iterator values in ascending order.
The usage of standard functions for sorting is FORBIDDEN, you must implement a sorting
algorithm by yourself.

### Retrun
Returns an iterator to the beginning of the sorted range.

### Synopsis
```c++
template <class RandomAccessIterator>
RandomAccessIterator sortValues(RandomAccessIterator begin, RandomAccessIterator end);
```

### Received knowledge
1. [Bidirectional Iterator](https://en.cppreference.com/w/cpp/named_req/BidirectionalIterator)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)