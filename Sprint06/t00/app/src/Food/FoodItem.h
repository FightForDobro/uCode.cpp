#ifndef WEREWOLF_FOODITEM_H
#define WEREWOLF_FOODITEM_H

#include <iostream>
#include <string>

enum class FoodType {
    ApplePie,
    HoneyNut,
    SweetRoll,
    PoisonedFood,
    Invalid
};

class FoodItem
{
public:
    virtual ~FoodItem() = default;
    virtual FoodType GetType() = 0;
    virtual std::string GetName() = 0;
};

#endif //WEREWOLF_FOODITEM_H
