#include "lib.h"

int main(int argc, char **argv)
{
    std::array<std::string, 5> arr;
    std::copy(&argv[1], &argv[6], arr.begin());
    lib::sort_args(&arr);

    std::copy(std::begin(arr), std::end(arr), std::ostream_iterator<std::string>(std::cout, " "));

    return 0;
}
