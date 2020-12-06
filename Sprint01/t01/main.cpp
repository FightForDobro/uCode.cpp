#include "lib.h"

int main(int argc, char **argv)
{
    if (argc <= 1)
        std::cerr << "usage: ./moveAlong [args]" << std::endl, exit(0);

    std::vector<std::string>array(argc - 1);
    std::copy(&argv[1], &argv[argc], array.begin());

    lib::seek_and_print(array);

    return 0;
}
