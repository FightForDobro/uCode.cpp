#ifndef IMPERIALVSSTORMCLOAK_STORMCLOAKSOLDIER_H
#define IMPERIALVSSTORMCLOAK_STORMCLOAKSOLDIER_H

#include "Soldier.h"

class StormcloakSoldier : public Soldier {
public:
    StormcloakSoldier(std::string &&name, int health);
    ~StormcloakSoldier() override;
};


#endif //IMPERIALVSSTORMCLOAK_STORMCLOAKSOLDIER_H
