//
// Created by ffd on 12/21/20.
//

#ifndef IMPERIALVSSTORMCLOAK_WEAPON_H
#define IMPERIALVSSTORMCLOAK_WEAPON_H


class Weapon {
public:
    explicit Weapon(int damage);
    virtual ~Weapon() = default;

    int getDamage() const;

private:
    const int m_damage;
};


#endif //IMPERIALVSSTORMCLOAK_WEAPON_H
