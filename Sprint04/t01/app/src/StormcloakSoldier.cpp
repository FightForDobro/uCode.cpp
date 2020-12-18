#include <iostream>
#include "StormcloakSoldier.h"

StormcloakSoldier::StormcloakSoldier()
{
    m_health = 100;
}

StormcloakSoldier::~StormcloakSoldier()
{
    delete m_weapon;
    delete this;
}

void StormcloakSoldier::setWeapon(Axe *sword)
{
    m_weapon = sword;
}

void StormcloakSoldier::consumeDamage(int amount)
{
    m_health -= amount;
    std::cout << "Stormcloak soldier consumes " << m_weapon->getDamage() << " of damage";
}

int StormcloakSoldier::getHealth() const
{
    return m_health;
}

void StormcloakSoldier::attack(ImperialSoldier &enemy)
{
    enemy.consumeDamage(m_weapon->getDamage());
    std::cout << "Stormcloak soldier attacks and deals "<< m_weapon->getDamage() << " damage" << std::endl;

    if (enemy.getHealth() <= 0)
        std::cout << " and dies";

    std::cout << std::endl;;
}
