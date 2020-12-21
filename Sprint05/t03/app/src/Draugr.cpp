#include "Draugr.h"

Draugr::Draugr(double _health, int _frostResist): m_health(_health), m_frostResist(_frostResist)
{
    std::cout << "Draugr with " << m_health << " health and " << m_frostResist << " frost resist was born!\n";
}

void Draugr::shoutPhrase(int shoutNumber) const
{

    std::array<std::string, 9> phrases =
            {
                    "Qiilaan Us Dilon!",
                    "Bolog Aaz, Mal Lir!",
                    "Kren Sosaal!",
                    "Dir Volaan!",
                    "Aar Vin Ok!",
                    "Unslaad Krosis!",
                    "Faaz! Paak! Dinok!",
                    "Aav Dilon!",
                    "Sovngarde Saraan!"
            };


    std::cout << "Draugr " << m_name << " (" << m_health << " health, " << m_frostResist << "% frost resist) shouts:\n" << phrases[shoutNumber] << "\n";
}

void Draugr::setName(const std::string&& name)
{
    m_name = name;
}




