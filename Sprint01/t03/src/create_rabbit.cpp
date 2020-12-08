#include "lib.h"

lib::Rabbit lib::create_rabbit(int rabbits_count)
{
    return {.gender = Gender(random() % 2), .isVampire = random() % rabbits_count == random() % rabbits_count, .age = 0};
}

void lib::create_rabbits(std::list<Rabbit> &rabbits, int count, int *males, int *females, int *vampire)
{
    std::random_device rd;
    std::uniform_int_distribution<int> gender(0,1);
    std::uniform_int_distribution<int> vamp(0, 99);
    Rabbit rabbit = {};

    while (count-- > 0)
    {
        rabbit.gender = Gender(gender(rd));
        rabbit.isVampire = vamp(rd) == 42;
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
