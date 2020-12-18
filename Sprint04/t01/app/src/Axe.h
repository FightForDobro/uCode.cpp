#ifndef IMPERIALVSSTORMCLOAK_AXE_H
#define IMPERIALVSSTORMCLOAK_AXE_H


class Axe final
{
    public:
        Axe(int damage);

        int getDamage() const;

    private:
        const int m_damage;
};


#endif //IMPERIALVSSTORMCLOAK_AXE_H
