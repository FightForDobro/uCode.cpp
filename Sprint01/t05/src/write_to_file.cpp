#include "lib.h"

void lib::write_to_file(const char *filename, std::forward_list<std::string> &new_names)
{
    std::string fname (filename);
    std::string ftype = fname.substr(fname.rfind('.'));
    fname.replace(fname.rfind('.'), fname.length(), ("_mod" + ftype));
    std::ofstream outfile (fname + "_mod");
    new_names.unique();

    for (auto& name: new_names)
        outfile << name << std::endl;

    outfile.close();
}
