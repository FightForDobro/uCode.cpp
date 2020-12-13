#include "parse_books.h"

std::multimap<std::string, std::string> lib::parse_books(std::ifstream &file)
{
    std::string line;
    std::cmatch result;
    std::regex regular(line_regex);
    std::multimap<std::string, std::string> teslib;

    while (file.is_open())
    {
        for (int i = 0; std::getline(file, line); i++)
            if (std::regex_match(line.c_str(), result, regular))
                teslib.insert(std::pair{result[1], result[2]});
            else
                std::cerr << "Line " << i << " is invalid" << std::endl;
        file.close();
    }

    return teslib;
}
