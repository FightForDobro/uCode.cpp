#include "write_to_file.h"

void lib::write_to_file(char *filename, std::set<std::string> &words)
{
    std::string fname (filename);
    std::string ftype = fname.substr(fname.rfind('.'));
    fname.replace(fname.rfind('.'), fname.length(), ("_mod" + ftype));
    std::ofstream outfile (fname + "_mod");

    for (auto& word: words)
        outfile << word << std::endl;

    outfile.close();
}
