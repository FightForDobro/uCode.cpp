#ifndef DRAGONBORN_DRAGONBORN_H
#define DRAGONBORN_DRAGONBORN_H

#define INV_ACTION "Invalid action"

class Dragonborn final
{
    public:
        enum class Actions
        {
            Shout,
            Magic,
            Weapon,
            Invalid
        };
        void executeAction(const Actions action);

    private:
        void shoutThuum() const;
        void attackWithMagic() const;
        void attackWithWeapon() const;
};


#endif //DRAGONBORN_DRAGONBORN_H
