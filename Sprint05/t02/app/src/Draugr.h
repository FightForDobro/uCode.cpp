#ifndef DWEMERCALCULATOR_DRAUGR_H
#define DWEMERCALCULATOR_DRAUGR_H

#include <iostream>
#include <array>
#include <regex>

class Draugr {
public:
    explicit Draugr(double _health = 100, int _frostResist = 50);
    Draugr(Draugr& other);
    Draugr(Draugr&& other) noexcept;

    void setName(const std::string&& name);
    void shoutPhrase(int shoutNumber) const;

private:
    double m_health;
    const int m_frostResist;
    std::string m_name;
};


#endif //DWEMERCALCULATOR_DRAUGR_H
