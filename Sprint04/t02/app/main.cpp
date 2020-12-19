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
                                                          {"", Dragonborn::Actions::Invalid}};

    Dragonborn dragonborn;
    std::string action(argv[1]);
    dragonborn.executeAction(actions.find(action) != actions.end() ? actions[action] : actions[""]);

    return 0;
}
