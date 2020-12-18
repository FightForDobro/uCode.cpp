#ifndef TEST_IMPERIALSOLDIER_H
#define TEST_IMPERIALSOLDIER_H

#include "StormcloakSoldier.h"
#include "Sword.h"

class StormcloakSoldier;
class Sword;

class ImperialSoldier final {
public:
    ImperialSoldier();
    ~ImperialSoldier();

    void setWeapon(Sword* sword);
    void attack(StormcloakSoldier& enemy);
    void consumeDamage(int amount);
    int getHealth() const;

private:
    Sword* m_weapon;
    int m_health;
};
#endif //TEST_IMPERIALSOLDIER_H
