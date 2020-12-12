#include "add.h"

void lib::add(std::string &book, std::map<std::string, std::string> &books)
{
    std::ifstream inputfile("../library/" + book);

    if(!inputfile.good() || inputfile.bad() || inputfile.fail())
        std::cout << inv_book << std::endl;
    else
    {
        std::ostringstream content;
        content << inputfile.rdbuf();
        inputfile.close();

        books[book] = content.str();

        std::cout << book << " added" << std::endl;
    }
}
