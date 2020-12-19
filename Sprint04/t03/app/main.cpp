#include <map>
#include <iterator>

#include "libsugar.h"
#include "calc.h"
#include <regex>

int main() {

    while(true)
    {
        std::cout << ":>";

        std::string line;
        std::getline(std::cin, line);

        std::regex r1(R"(^\s*([?+|?-]{0,1}\w+)\s*([+|\-|*|/]{1})\s*([?+|?-]{0,1}\w+)\s*$)");
        std::regex r2(R"(^\s*([?+|?-]{0,1}\w+)\s*([+|\-|*|/]{1})\s*([?+|?-]{0,1}\w+)\s*=\s*([a-zA-Z]+)\s*)");
        std::regex r3("^\\s*quit\\s*$");
        std::smatch match;

        if (std::regex_search(line, match, r1) || std::regex_search(line, match, r2))
            calc(match);

        else if (std::regex_match(line, match, r3))
            break;

        else
            std::cerr << "invalid input\n";
    }

    return 0;
}
