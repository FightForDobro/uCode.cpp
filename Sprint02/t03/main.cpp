#include "tes_library.h"
#include "parse_books.h"
#include "print_library.h"

int main(int argc, char **argv)
{

    if (argc != 2)
        std::cerr << "usage: ./tesLibrary [file_name]" << std::endl, exit(0);

    std::ifstream file (argv[1]);

    if (!file.is_open() || !file.good() || file.bad() || file.fail())
        std::cerr << "error" << std::endl, exit(0);

    auto teslib = lib::parse_books(file);
    lib::print_library(teslib);
    return 0;
}
