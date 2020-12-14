# Is Palindrome

### Description

Create a function template `isPalindrome` that takes two iterators as parameters and
checks if they contain a palindrome.
For example, `{ 1, 2, 3, 2, 1 }`, `{ 0.1, 0.2, 0.3, 0.2, 0.1 }` , `"radar"` are palindromes.

### Retrun
Returns `true` if it is a palindrome, and `false` otherwise.

### Synopsis
```c++
template <class BidirectionalIterator>
bool isPalindrome(BidirectionalIterator begin, BidirectionalIterator end);
```

### Received knowledge
1. [Bidirectional Iterator](https://en.cppreference.com/w/cpp/named_req/BidirectionalIterator)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)