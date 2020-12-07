#include "lib.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cerr << "usage: ./stdAlgoV1 [file_name]" << std::endl, exit(0);

    std::ifstream file("../file.txt");

    std::string name;
    std::forward_list<std::string> list;

    while (file.is_open())
    {
        while (std::getline(file, name))
            list.push_front(name);

        list.reverse();
        file.close();
    }

    return 0;
}
