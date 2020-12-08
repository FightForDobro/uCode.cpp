#include "lib.h"

void lib::print_stage(int males, int females, int vampire)
{
    std::cout << "Males: " << males << std::endl;
    std::cout << "Females: " << females << std::endl;
    std::cout << "Vampire: " << vampire << std::endl << std::endl;
}

void lib::evolve(std::list<Rabbit> &rabbits, int *males, int *females, int *vampire)
{
    for (auto &rabbit: rabbits)
    {
        rabbit.age++;

        if (rabbit.gender == Gender::Male && rabbit.isVampire)
            (* males)--;

        else if (rabbit.gender == Gender::Female && rabbit.isVampire)
            (* females)--;
    }

    for (int i = 0; i < *vampire; i++)
    {
        auto not_vmpr = std::find_if(rabbits.begin(), rabbits.end(), [](auto r){return !r.isVampire;});
        if (not_vmpr != rabbits.end())
            not_vmpr->isVampire = true;
    }

    lib::create_rabbits(rabbits, *males >= *females ? *females : *males, males, females, vampire);
    rabbits.remove_if([](auto r){return (r.age > 3 && !r.isVampire) || r.age > 8;});


    *males = std::count_if(rabbits.begin(), rabbits.end(), [](auto r){return r.gender == Gender::Male && !r.isVampire;});
    *females = std::count_if(rabbits.begin(), rabbits.end(), [](auto r){return r.gender == Gender::Female && !r.isVampire;;});
    *vampire = std::count_if(rabbits.begin(), rabbits.end(), [](Rabbit r){return r.isVampire;});
}

