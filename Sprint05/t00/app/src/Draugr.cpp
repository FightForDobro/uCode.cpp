//
// Created by ffd on 12/21/20.
//

#include "Draugr.h"

Draugr::Draugr() : m_health(100), m_frostResist(50) {}

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


    std::cout << "Draugr (" << m_health << " health, " << m_frostResist << "% frost resist) shouts:\n" << phrases[shoutNumber];
}
