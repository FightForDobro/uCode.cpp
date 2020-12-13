# TES Library

### LEGEND
The various books that appear throughout Skyrim can grant quests, increase certain skills,
or record locations on the world map. Books vary from simple stories, to letters, recipes,
notes, and journals that assist in quests and provide snippets of lore that help players
become more familiar with the culture, people, and history of Tamriel.

### DESCRIPTION

Create a program that catalogs authors' books from the given file. The program takes an
initial text file containing list of authors and books as a command-line argument.
Every valid file meets requirements listed below:
* every line contains an author name and a book title
* both author name and book title are surrounded by quotes `"`
* the author name and the book title are separated by a single colon `:`
* only whitespaces are allowed between `:` and `"`
* see a detailed example of possible input file formatting in the CONSOLE OUTPUT

`Use std::regex` to parse the input file.
  
The program prints a list of unique author names with the grouped list of their book
titles. See the output format of authors and their books in the CONSOLE OUTPUT.
  
The program prints errors to the standart error:
* in case of invalid number of arguments - `usage: ./tesLibrary [file_name]`
* for the first invalid line of the input file if it does not match the rules listed
above - `Line <number> is invalid`
* in case of any other error - `error`
  
Use std::multimap.

### Received knowledge
1. [std::multimap](https://en.cppreference.com/w/cpp/container/multimap)
1. [std::regex](https://en.cppreference.com/w/cpp/regex)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)