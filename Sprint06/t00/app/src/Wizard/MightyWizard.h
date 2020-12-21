#ifndef WEREWOLF_MIGHTYWIZARD_H
#define WEREWOLF_MIGHTYWIZARD_H

#include "AbstractWizard.h"
#include "Food/FoodItem.h"

class MightyWizard : protected AbstractWizard
{
public:
    explicit MightyWizard(std::string& name);
    void checkFood(FoodItem& item);
    void checkFood(FoodItem* item);

protected:
    FoodType deductFoodType(FoodItem& item);

private:
    std::string m_name;

};

#endif //WEREWOLF_MIGHTYWIZARD_H
