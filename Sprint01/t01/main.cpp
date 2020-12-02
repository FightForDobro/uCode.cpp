#include "lib.h"

int main(int argc, char **argv)
{
    std::vector<std::string>array(argc - 1);
    std::copy(&argv[1], &argv[argc], array.begin());


    lib::seek_and_print(array);

//    std::copy(array.begin(), array.end(), std::ostream_iterator<std::string>(std::cout, " "));

    return 0;
}
