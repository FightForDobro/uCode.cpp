# Book Saver

### LEGEND
Library in Vivec City is accessible from the Hall of Wisdom beneath the High Fane in
Vivec, Temple Canton. It has a very large collection of books. Mehra Milo can be found
here.

### DESCRIPTION

Create a program that manages a library. Implement a simple library manager using standard
input stream `stdin` .
The program handles 5 commands:
* `add <bookName>` - adds a book including its content to the library
* `delete <bookName>` - removes a book including its content from the library
* `read <bookName>` - prints content of the book to the standard output
* `list` - prints the list of all available books in the library to the standard output
* `quit` - quits the program

`<bookName>` is a name of the file which is stored in the `./library` directory.
An empty file is still a vaild one.
The program prints:
* `enter command:>` - before each command
* `<bookName>` added - if a book exists in the `./library/<bookName>` and was successfully
added to the library
* `<bookName>` deleted - in case of successful deletion of the book from the library
* `invalid book` - if the book does not exist in the `./library/<bookName>` , or it has
not been added to the library previously
* `invalid command` - in case of invalid commands
* `bye` - in case of quit
Use `std::map` .

### Received knowledge
1. [std::map](https://en.cppreference.com/w/cpp/container/map)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)