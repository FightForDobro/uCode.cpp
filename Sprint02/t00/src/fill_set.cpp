#include "fill_set.h"
#include "is_word.h"
#include "write_to_file.h"

void lib::fill_set(char *filename, std::ifstream &file)
{
    std::string line;
    std::string subline;
    std::set<std::string> words;

    while (!file.eof())
        while(std::getline(file, line))
        {
            std::stringstream ss(line);
            while (getline(ss, subline, ' '))
                if (is_word(subline))
                    words.insert(subline);
        }

    lib::write_to_file(filename, words);
}
