#include "remove.h"

void lib::remove(std::string &book, std::map<std::string, std::string> &books)
{
    auto to_delete = books.find(book);

    if (to_delete == books.end())
        std::cout << inv_book << std::endl;
    else
    {
        books.erase(to_delete);
        std::cout << book << " deleted" << std::endl;
    }
}