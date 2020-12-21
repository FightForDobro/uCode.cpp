#ifndef WEREWOLF_POISONEDFOOD_H
#define WEREWOLF_POISONEDFOOD_H

#include "FoodItem.h"

class PoisonedFood : public FoodItem {
public:
    FoodType GetType() override;
    std::string GetName() override;
};


#endif //WEREWOLF_POISONEDFOOD_H
