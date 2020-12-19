#include <iostream>
#include <algorithm>
#include <map>

#include "Dragonborn.h"
#include "libsugar.h"
#include "algorithmUtils.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        libsugar::raise_error("usage: ./dragonborn [action]");

    std::map<std::string, Dragonborn::Actions> actions = {
                                                          {"shout", Dragonborn::Actions::Shout},
                                                          {"magic", Dragonborn::Actions::Magic},
                                                          {"weapon", Dragonborn::Actions::Weapon},
                                                          {"invalid", Dragonborn::Actions::Invalid}};

//    Dragonborn dragonborn;
    std::string action(argv[1]);
    auto res = actions.find(action);
    res--;
//    dragonborn.executeAction(action.find(action));
//    if (actions.find("A") != action.end())
//        dragonborn.executeAction(actions[action]);
//    else
//        dragonborn.executeAction(Dragonborn::Actions::Invalid);

    return 0;
}
