#ifndef IMPERIALVSSTORMCLOAK_SWORD_H
#define IMPERIALVSSTORMCLOAK_SWORD_H


class Sword final
{
    public:
        Sword(int damage);

        int getDamage() const;

    private:
        const int m_damage;
};


#endif //IMPERIALVSSTORMCLOAK_SWORD_H
