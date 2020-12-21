#include "StormcloakSoldier.h"
#include "Axe.h"
#include "ImperialSoldier.h"
#include "Sword.h"
#include <iostream>
#include <algorithm>

static int string_to_dmg(std::string& dmg)
{
    try
    {
        int res = std::stoi(dmg);
        if (res > 20 || res < 10)
            throw std::logic_error("Damage has to be in a range of 10-20 points.");

        return res;
    }
    catch (...)
    {
        std::cerr << "Damage has to be in a range of 10-20 points." << std::endl, exit(EXIT_FAILURE);
    }
}

static void init_imperialSoldier(ImperialSoldier& imperialSoldier, std::string& dmg)
{
    auto *sword = new Sword(string_to_dmg(dmg));
    imperialSoldier.setWeapon(sword);
}

static void init_stormcloakSoldier(StormcloakSoldier& stormcloakSoldier, std::string& dmg)
{
    auto *axe = new Axe(string_to_dmg(dmg));
    stormcloakSoldier.setWeapon(axe);
}

static void fight(ImperialSoldier& imperialSoldier, StormcloakSoldier& stormcloakSoldier)
{
    while (true)
    {
        if (stormcloakSoldier.getHealth() > 0) stormcloakSoldier.attack(imperialSoldier);
        if (imperialSoldier.getHealth() > 0) imperialSoldier.attack(stormcloakSoldier);

        std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;

        if (imperialSoldier.getHealth() <= 0 || stormcloakSoldier.getHealth() <= 0)
            stormcloakSoldier.getHealth() > 0 ? std::cout << "Stormcloak has won!" << std::endl :
            std::cout << "Imperial has won!" << std::endl, exit(0);
    }
}

int main(int argc, char **argv)
{
    if (argc != 3) {
        std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]\n";
        return 1;
    }

    ImperialSoldier imperialSoldier("Martin", 100);
    init_imperialSoldier(imperialSoldier, reinterpret_cast<std::string &>(argv[1]));

    StormcloakSoldier stormcloakSoldier("Flynn", 100);
    init_stormcloakSoldier(stormcloakSoldier, reinterpret_cast<std::string &>(argv[2]));

    fight(imperialSoldier, stormcloakSoldier);

    return 0;
}
