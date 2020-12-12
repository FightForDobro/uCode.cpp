#include "list.h"

void lib::list(std::map<std::string, std::string> &books)
{
    for (auto& book: books)
        std::cout << book.first << std::endl;
}
