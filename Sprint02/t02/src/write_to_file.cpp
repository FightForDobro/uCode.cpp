#include "write_to_file.h"

void lib::write_to_file(char *filename, std::multiset<std::string> &words)
{
    std::string fname (filename);
    std::string ftype = fname.substr(fname.rfind('.'));
    fname.replace(fname.rfind('.'), fname.length(), ("_mod" + ftype));
    std::ofstream outfile (fname + "_mod");
    std::set<std::string> temp_set(words.begin(), words.end());

    for (auto& word: temp_set)
            outfile << word << ": " << words.count(word) << std::endl;

    outfile.close();
}
