#include "lib.h"

// ToDo: ask question about order
int main(int argc, char **argv)
{
    if (argc != 2)
        std::cerr << "usage: ./stdAlgoV2 [file_name]" << std::endl, exit(0);

    std::ifstream file(argv[1]);

    std::string name;
    std::forward_list<std::string> list;

    file.seekg(1, std::ios::end);
    if (!file.good() || file.eof())
        std::cerr << "error" << std::endl, exit(0);

    file.seekg(0, std::ios::beg);
    while (file.is_open())
    {
        while (std::getline(file, name))
            list.push_front(name);

        list.reverse();
        file.close();
    }

    list.remove_if([](std::string &s){return std::any_of(s.begin(), s.end(),
                                                  [](auto& c){return c == 'c' || c == 'b' || c == 'l';});});

    std::replace_if(list.begin(), list.end(), [](std::string& s){return s.length() > 10;}, "Long one");
    std::replace_if(list.begin(), list.end(), [](std::string& s){return s.length() < 4;}, "Short one");

    list.reverse();

    lib::write_to_file(argv[1], list);

    return 0;
}
