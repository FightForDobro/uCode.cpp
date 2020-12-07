<img src="https://static.wikia.nocookie.net/elderscrolls/images/9/9d/Velehk_Sain_Ingame.png/revision/latest/scale-to-width-down/300?cb=20121220222805" align="right" alt="logo" height="" width="128px">

# Standard Algorithms V2

### LEGEND
"Names have power, lad. You should know by now. Just say "Velehk Sain, I release you.",
and "Poof!", I'm on my way."

### DESCRIPTION

Create a program that modifies a given list of names. The program takes a file as a
command-line argument with the list of names, one per line. Just like in the previous
task.
The program modifies the list if it meets the following conditions using
`standard library algorithms` and `std::forward_list` , and saves it in the new file with
the suffix `_mod` :
* `remove` name if it contains at least one of `'c', 'b', 'l'` characters
* `replace` name with `Long one` string if it is longer than 10 characters
* `replace` name with `Short one` string if it is shorter than 4 characters
* make sure that the resulting list contains only unique values
* `reverse` resulting list
Error handling. The program prints errors to the standart error:
* in case of an invalid number of arguments - `usage: ./stdAlgoV2 [file_name]`
* in case of any other errors - `error`
A valid file contains text and can be opened for reading.

### Received knowledge
1. [<algorithm>](https://en.cppreference.com/w/cpp/header/algorithm)
2. [std::distance](https://en.cppreference.com/w/cpp/iterator/distance)
3. [std::forward_list](https://en.cppreference.com/w/cpp/container/forward_list)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)