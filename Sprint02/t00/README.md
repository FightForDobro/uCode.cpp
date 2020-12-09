# Unique Words

### LEGEND
ACT IV, SCENE III, CONTINUED
Lifts-Her-Tail: Certainly not, kind sir! I am here but to clean your chambers.
Crantius Colto: Is that all you have come here for, little one? My chambers?
...
Crantius Colto: Plenty of time, my sweet. Plenty of time.
END OF ACT IV, SCENE III

### DESCRIPTION

Create a program that saves only unique words from the given file in a new file with
the suffix `_mod` . The program takes an initial text file as a command-line argument.
The unique words are case sensitive. A word is a sequence of alphanumeric and `'`
, `-`

characters. There must be one word per line in the new file.
The program prints errors to the standard error:
•
in case of invalid number of arguments - `usage: ./uniqueWords [file_name]`
•
in case of any other errors - `error`
A valid file contains text and can be opened for reading.

Use `std::set` .

### Received knowledge
1. [std::set](https://en.cppreference.com/w/cpp/container/set)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)