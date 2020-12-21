#ifndef DWEMERCALCULATOR_DRAUGR_H
#define DWEMERCALCULATOR_DRAUGR_H

#include <iostream>
#include <array>

class Draugr {
public:
    Draugr();

    void shoutPhrase(int shoutNumber) const;

private:
    double m_health;
    const int m_frostResist;
};


#endif //DWEMERCALCULATOR_DRAUGR_H
