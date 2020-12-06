#include "lib.h"

lib::Rabbit lib::create_rabbit(int rabbits_count)
{
    return {.gender = Gender(random() % 2), .isVampire = random() % rabbits_count == random() % rabbits_count, .age = 0};
}

void lib::create_rabbits(std::list<Rabbit> &rabbits, int count, int *males, int *females, int *vampire)
{
    Rabbit rabbit = {};

    while (count-- > 0)
    {
        rabbit.gender = Gender(random() % 2);
        rabbit.isVampire = random() % 100 == random() % 100;
        rabbit.age = 0;

        if (rabbit.gender == Gender::Male && !rabbit.isVampire)
            *males += 1;
        else if (rabbit.gender == Gender::Female && !rabbit.isVampire)
            *females += 1;
        else
            *vampire += 1;

        rabbits.push_back(rabbit);
    }
}
