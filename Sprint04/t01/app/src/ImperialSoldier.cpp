#include <iostream>
#include "ImperialSoldier.h"

ImperialSoldier::ImperialSoldier()
{
    m_health = 100;
}

ImperialSoldier::~ImperialSoldier()
{
    delete m_weapon;
    delete this;
}

void ImperialSoldier::setWeapon(Sword *sword)
{
    m_weapon = sword;
}

void ImperialSoldier::consumeDamage(int amount)
{
    m_health -= amount;
    std::cout << "Imperial soldier consumes " << amount << " of damage";
}

int ImperialSoldier::getHealth() const
{
    return m_health;
}

void ImperialSoldier::attack(StormcloakSoldier &enemy)
{
    if (getHealth() <= 0)
        return;

    std::cout << "Imperial soldier attacks and deals "<< m_weapon->getDamage() << " damage" << std::endl;
    enemy.consumeDamage(m_weapon->getDamage());

    if (enemy.getHealth() <= 0)
        std::cout << " and dies";

    std::cout << std::endl;;
}
