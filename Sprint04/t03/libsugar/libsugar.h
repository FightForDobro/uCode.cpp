#ifndef DRAGONBORN_LIBSUGAR_H
#define DRAGONBORN_LIBSUGAR_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

namespace libsugar
{
    template<typename T>
    void raise_error(T &error_msg)
    { std::cout << error_msg << std::endl, exit(EXIT_FAILURE); }

    std::vector<std::string> split(const std::string& s, char delimiter)
    {
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream tokenStream(s);

        while (std::getline(tokenStream, token, delimiter))
            tokens.push_back(token);

        return tokens;
    }
}
#endif //DRAGONBORN_LIBSUGAR_H
