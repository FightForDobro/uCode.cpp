//
// Created by ffd on 12/21/20.
//

#ifndef IMPERIALVSSTORMCLOAK_IMPERIALSOLDIER_H
#define IMPERIALVSSTORMCLOAK_IMPERIALSOLDIER_H

#include "Soldier.h"

class ImperialSoldier : public Soldier {
public:
    ImperialSoldier(std::string &&name, int health);
    ~ImperialSoldier() override;
};


#endif //IMPERIALVSSTORMCLOAK_IMPERIALSOLDIER_H
