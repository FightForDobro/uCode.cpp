#include "libsugar.h"

#include "Dragonborn.h"
#include <map>
#include <functional>
#include <iostream>

void Dragonborn::shoutThuum() const {
    std::cout << "Yol Toor Shul" << std::endl;
}

void Dragonborn::attackWithMagic() const {
    std::cout << "*attacks with magic spell*" << std::endl;
}

void Dragonborn::attackWithWeapon() const {
    std::cout << "*attacks with weapon*$" << std::endl;
}

void Dragonborn::executeAction(const Dragonborn::Actions action)
{
    if (action == Actions::Invalid)
        libsugar::raise_error(INV_ACTION);

    std::map<Actions, std::function<void()>> actions = {{Actions::Shout, [this]{shoutThuum();}},
                                                        {Actions::Magic, [this]{attackWithMagic();}},
                                                        {Actions::Weapon, [this]{attackWithWeapon();}}};
    actions[action]();
}
