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
    std::cout << "Imperial soldier consumes " << m_weapon->getDamage() << " of damage";
}

int ImperialSoldier::getHealth() const
{
    return m_health;
}

void ImperialSoldier::attack(StormcloakSoldier &enemy)
{
    enemy.consumeDamage(m_weapon->getDamage());
    std::cout << "Imperial soldier attacks and deals "<< m_weapon->getDamage() << " damage" << std::endl;

    if (enemy.getHealth() <= 0)
        std::cout << " and dies";

    std::cout << std::endl;;
}
