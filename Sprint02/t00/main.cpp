#include "fill_set.h"
#include "is_word.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cerr << "usage: ./uniqueWords [file_name]" << std::endl, exit(0);

    std::ifstream file(argv[1]);

    if(!file.good() || file.eof() || file.bad() || file.fail() || file.peek() == std::ifstream::traits_type::eof())
        raise_error;

    lib::fill_set(argv[1], file);

//    std::string res = "A A A";

//    std::cout << lib::is_word(res) << std::endl;

    return 0;
}