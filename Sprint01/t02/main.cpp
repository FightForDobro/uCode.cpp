#include "lib.h"

// ToDo: add usage and something else!

int main(int argc, char **argv)
{
//    std::vector<std::string>array(argc - 1);
//    std::copy(&argv[1], &argv[argc], array.begin());
    std::deque<std::string>locations;

//    for (int i = 1; i < argc; ++i)
//        locations.emplace_back(argv[i]);

//    lib::seek_and_print(array);
//    std::copy(array.begin(), array.end(), std::ostream_iterator<std::string>(std::cout, " "));
    std::copy(&argv[1], &argv[argc], std::back_insert_iterator(locations));
    lib::parse_line(locations);

//    locations.push_back(locations.front());
//    locations.pop_front();

    return 0;
}


