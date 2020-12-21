#ifndef DWEMERCALCULATOR_DRAUGR_H
#define DWEMERCALCULATOR_DRAUGR_H

#include <iostream>
#include <array>
#include <optional>

class Draugr {
public:
    explicit Draugr(double _health = 100, int _frostResist = 50);
    void shoutPhrase(int shoutNumber) const;

private:
    double m_health;
    const int m_frostResist;
};


#endif //DWEMERCALCULATOR_DRAUGR_H
