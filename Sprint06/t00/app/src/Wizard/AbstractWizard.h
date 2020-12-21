#ifndef WEREWOLF_ABSTRACTWIZARD_H
#define WEREWOLF_ABSTRACTWIZARD_H

#include <iostream>
#include <string>

#include <Food/FoodItem.h>

class AbstractWizard
{
protected:
    virtual FoodType deductFoodType(FoodItem& item) = 0;
};

#endif //WEREWOLF_ABSTRACTWIZARD_H
