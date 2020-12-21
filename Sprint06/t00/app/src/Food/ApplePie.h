#ifndef WEREWOLF_APPLEPIE_H
#define WEREWOLF_APPLEPIE_H

#include "FoodItem.h"


class ApplePie : public FoodItem
{
public:
    FoodType GetType() override;
    std::string GetName() override;
};



#endif //WEREWOLF_APPLEPIE_H
