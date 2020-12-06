#include "lib.h"

int main(int argc, char **argv)
{
    int males = 0;
    int females = 0;
    int vampire = 0;

    std::list<lib::Rabbit>rabbits;
    lib::create_rabbits(rabbits, 10, &males, &females, &vampire);
    lib::print_stage(males, females, vampire);

    while (true)
    {
        sleep(1);

        lib::evolve(rabbits, &males, &females, &vampire);
        lib::print_stage(males, females, vampire);

        if (males + females + vampire  > 1000 || rabbits.empty())
            exit(0);
    }

    return 0;
}


