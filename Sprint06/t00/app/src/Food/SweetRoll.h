#ifndef WEREWOLF_SWEETROLL_H
#define WEREWOLF_SWEETROLL_H

#include "FoodItem.h"

class SweetRoll : public FoodItem
{
public:
    FoodType GetType() override;
    std::string GetName() override;
};

#endif //WEREWOLF_SWEETROLL_H
