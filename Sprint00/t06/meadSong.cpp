#include "meadSong.h"

static std::string check_s(int bottles)
{
    return bottles <= 1 ? " bottle" : " bottles";
}


static std::string check_bottles(int bottles)
{
    return bottles ? std::to_string(bottles) + check_s(bottles) + " of mead on the wall." :
                                                                  "no more bottles of mead on the wall.";
}

void sing()
{
    int bottles = 99;

    while (bottles != 0)
    {
        std::string bottle_s = check_s(bottles);
        std::cout << bottles << bottle_s + " of mead on the wall, " << bottles << bottle_s + " of mead." << std::endl;
        std::cout << "Take one down and pass it around, " << check_bottles(--bottles) << std::endl << std::endl;
    }

    std::cout << "No more bottles of mead on the wall, no more bottles of mead.\n"
                 "Go to the store and buy some more, 99 bottles of mead on the wall." << std::endl;
}
