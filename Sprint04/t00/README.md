# Utils Library

### Legend
The Library tower is sure to please those who value literature. With space for all the
bookshelves you could desire, you'll be able to enjoy your collection of books in style.
Or perhaps take a book to the tower roof and enjoy the view of your steading?

### Description

Create a static library `utils` for your future apps. Real-life projects are divided
into components/modules. Reusing code is cool. This library will simplify some standard
algorithms. Implement all the functions listed in the SYNOPSIS in the `utils/algorithmUtils.h` .

Your next projects must build and link the library only with few new lines of code in
the `CMakeLists.txt` files.
* Add `add_subdirectory("utils")` into `./CMakeLists.txt` file in the project's root to
build the library
* Add `target_link_libraries(<app_name> utils)` into `./app/CMakeLists.txt` to link the
library
  
The main.cpp file for this task will include your header file like this:
`#include "algorithmUtils.h"`
All the functions must be in the namespace Utils.

### Retrun
Returns an iterator to the beginning of the sorted range.

### Synopsis
```c++
// [from, to]
template <typename T>
bool IsInRange(const T& val, const T& from, const T& to);

template <typename T>
bool IsInRange(const T& val, const std::pair<const T&, const T&>& minmax);

// (from, to)
template <typename T>
bool IsInsideRange(const T& val, const T& from, const T& to);

template <typename T>
bool IsInsideRange(const T& val, const std::pair<const T&, const T&>& minmax);

// change the object if necessary
// and return the corresponding value of the operation success
template <class T, class U = T>
bool Modify(T& obj, U&& new_value);

// fully remove the specified elements from the collection
template <class Collection, class T>
void RemoveAll(Collection& c, const T& value);

// fully remove the specified elements from the collection
template <class Collection, class Pred>
void RemoveAllIf(Collection& c, Pred&& predicate);

template <class Collection, class T>
auto Find(Collection& c, const T& value);

template <class Collection, class Pred>
auto FindIf(Collection& c, Pred&& predicate);

template <class Collection, class T>
bool Contains(const Collection& c, const T& value);

template <class Collection, class Pred>
bool ContainsIf(const Collection& c, Pred&& predicate);

template <class Collection, class Pred>
int CountIf(const Collection& c, Pred&& predicate);

template <class T, class... Args>
const auto& Min(const T& arg, const Args&... args);

template <class T, class... Args>
const auto& Max(const T& arg, const Args&... args);

template <class Collection>
auto MaxElement(const Collection& c);

template <class Collection>
auto MinElement(const Collection& c);

template <class Collection, class Comp>
auto MaxElement(const Collection& c, Comp&& comparator);

template <class Collection, class Comp>
auto MinElement(const Collection& c, Comp&& comparator);

template <class Collection>
void Sort(Collection& c);

template <class Collection, class Comp>
void Sort(Collection& c, Comp&& comparator);

// remove all non-unique elements in the collection
template <class Collection>
void Unique(Collection& c);

template <class Collection, class Pred>
void Unique(Collection& c, Pred&& predicate);

template <class Collection, class Pred>
void ForEach(Collection& c, Pred&& predicate);

template <class Collection, class T>
int IndexOf(const Collection& c, const T& value);

template <class Collection, class Pred>
int IndexOfIf(const Collection& c, Pred&& predicate);
```

### Received knowledge
1. [Value Categories](https://en.cppreference.com/w/cpp/language/value_category)
1. [algorithm](https://en.cppreference.com/w/cpp/header/algorithm)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)