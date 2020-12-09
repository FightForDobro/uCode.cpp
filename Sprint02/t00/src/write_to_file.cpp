#include "write_to_file.h"

void lib::write_to_file(char *filename, std::set<std::string> &words)
{
    std::string fname (filename);
    std::ofstream outfile (fname + "_mod");

    for (auto& word: words)
        outfile << word << std::endl;

    outfile.close();
}
