#ifndef BOOKSAVER_READ_H
#define BOOKSAVER_READ_H

#include "book_saver.h"

#define inv_book "invalid book"

namespace lib
{
    void read(std::string& book, std::map<std::string, std::string>& books);
}

#endif //BOOKSAVER_READ_H
