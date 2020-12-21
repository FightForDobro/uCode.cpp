#ifndef WEREWOLF_HONEYNUT_H
#define WEREWOLF_HONEYNUT_H

#include "FoodItem.h"

class HoneyNut : public FoodItem {
public:
    FoodType GetType() override;
    std::string GetName() override;
};

#endif //WEREWOLF_HONEYNUT_H
