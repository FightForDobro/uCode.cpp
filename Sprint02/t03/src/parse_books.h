#ifndef BOOKSAVER_PARSE_BOOKS_H
#define BOOKSAVER_PARSE_BOOKS_H

#include "tes_library.h"

#define line_regex "\\s*\"(.+?(?=\"))\"\\s*:\\s*\"(.+?(?=\"))\"\\s*"

namespace lib
{
    std::multimap<std::string, std::string> parse_books(std::ifstream &file);
}

#endif //BOOKSAVER_PARSE_BOOKS_H
