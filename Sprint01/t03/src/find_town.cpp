//#include "lib.h"
//
//void lib::find_town(std::deque<lib::t_location> &locations)
//{
//    int hold = 0;
//    std::string &first_town = locations.front().town;
//
//    for (int i = 0; i != locations.size(); i++)
//    {
//        if (locations[i].result + hold < 0)
//        {
//            locations.push_back(locations.front());
//            locations.pop_front();
//            i = -1;
//            hold = 0;
//
//            if (first_town == locations.front().town)
//                std::cerr << "Mission: Impossible" << std::endl, exit(0);
//
//        }
//        else
//            hold = locations[i].result + hold;
//    }
//}
