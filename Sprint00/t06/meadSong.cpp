#include "meadSong.h"

static std::string check_bottels(int bottels)
{
    return bottels ? std::to_string(bottels) + " bottles of mead on the wall." : "no more bottles of mead on the wall.";
}

void sing()
{
    int bottles = 99;

    while (bottles != 0)
    {
        std::cout << bottles << " bottles of mead on the wall, " << bottles << " bottles of mead." << std::endl;
        std::cout << "Take one down and pass it around, " << check_bottels(--bottles) << std::endl << std::endl;
    }

    std::cout << "No more bottles of mead on the wall, no more bottles of mead.\n"
                 "Go to the store and buy some more, 99 bottles of mead on the wall." << std::endl;
}
