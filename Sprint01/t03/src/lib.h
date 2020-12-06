#ifndef SPRINT01_LIB_H
#define SPRINT01_LIB_H

#include <algorithm>        // std::copy
#include <iostream>        // std::cout
#include <iterator>       // std::ostream_iterator
#include <unistd.h>      // sleep
#include <variant>      // std::variant
#include <cstdlib>     // sleep
#include <sstream>    // std::sstream
#include <string>    // std::string
#include <deque>    // std::deque
#include <array>   // std::array
#include <list>   // std::list

namespace lib
{
    enum class Gender
            {
                Male,
                Female
            };
    struct Rabbit
            {
                Gender gender;
                bool isVampire;
                int age;
            };

    void init_ranch(std::list<Rabbit> &rabbits);
    lib::Rabbit create_rabbit(int rabbits_count);
    void print_stage(int males, int females, int vampire);
    void evolve(std::list<Rabbit> &rabbits, int *males, int *females, int *vampire);


    void create_rabbits(std::list<Rabbit> &rabbits, int count, int *males, int *females, int *vampire);
}

#endif //SPRINT01_LIB_H
