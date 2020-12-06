#include "lib.h"

void lib::init_ranch(std::list<Rabbit> &rabbits)
{
    int males = 0;
    int females = 0;
    int vampire = 0;
    Rabbit rabbit = {};
    for (int i = 0; i < 10; i++)
    {
        rabbit = create_rabbit(10);

        if (rabbit.gender == lib::Gender::Male)
            males++;
        else if (rabbit.gender == lib::Gender::Female)
            females++;
        else if (rabbit.isVampire)
            vampire++;

        rabbits.emplace_back(rabbit);
    }
    lib::print_stage(males, females, vampire);
}
