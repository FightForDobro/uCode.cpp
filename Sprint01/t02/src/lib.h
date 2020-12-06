#ifndef SPRINT01_LIB_H
#define SPRINT01_LIB_H

#include <algorithm>        // std::copy
#include <iostream>        // std::cout
#include <iterator>       // std::ostream_iterator
#include <variant>        // std::variant
#include <sstream>        // std::sstream
#include <string>        // std::string
#include <deque>        // std::deque
#include <array>       // std::array

namespace lib
{
    typedef struct s_location
    {
        std::string town;
        std::string stamina;
        std::string distance;
        int result;
        int base_id;
    }              t_location;

    void init_ranch(std::__cxx11::list<lib::Rabbit> &rabbits);
    void find_town(std::deque<lib::t_location> &locations);

}

#endif //SPRINT01_LIB_H
