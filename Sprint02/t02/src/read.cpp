#include "read.h"

void lib::read(std::string &book, std::map<std::string, std::string> &books)
{
    auto book_to_read = books.find(book);

    if (book_to_read == books.end())
        std::cout << inv_book << std::endl;
    else
        std::cout << book_to_read->second << std::endl;
}
