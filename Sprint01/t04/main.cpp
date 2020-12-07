#include "lib.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cerr << "usage: ./stdAlgoV1 [file_name]" << std::endl, exit(0);

    std::ifstream file(argv[1]);

    std::string name;
    std::forward_list<std::string> list;

    file.seekg(1, std::ios::end);
    auto res = file.bad();
    auto res1 = file.good();
    if (file.bad())
        std::cerr << "error" << std::endl, exit(0);

    file.seekg(0, std::ios::beg);
    while (file.is_open())
    {
        while (std::getline(file, name))
            list.push_front(name);

        list.reverse();
        file.close();
    }

    auto size = std::count_if(list.begin(), list.end(), [](auto s){return true;});
    auto rich = std::any_of(list.begin(), list.end(), [](auto& s){return s.find("rich") != -1;});
    auto none_of_15 = std::none_of(list.begin(), list.end(), [](auto& s){return s.length() == 15;});
    auto all_end_vel = std::all_of(list.begin(), list.end(), lib::check_ending);
    auto without_mel = std::count_if(list.begin(), list.end(), [](auto& s){return s.find("mel") == -1;});

    std::cout << "size: " << size << std::endl;
    std::cout << "contains 'rich': " << std::boolalpha << rich << std::endl;
    std::cout << "none of lengths is 15: " << std::boolalpha << none_of_15 << std::endl;
    std::cout << "all end with 'vel': " << std::boolalpha << (size != 0 && all_end_vel) << std::endl;
    std::cout << "without 'mel': " << without_mel << std::endl;

    return 0;
}
