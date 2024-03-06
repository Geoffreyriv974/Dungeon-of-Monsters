#ifndef CREATE_SNAKE_SNAKE_H
#define CREATE_SNAKE_SNAKE_H
#include "charactere.h"

class Player : public Character
{
private:
    std::string m_weapon_equipped;
    std::string m_armor_equipped;

public:
    Player(std::string type, std::string pseudo, int life, int deg_initiaux, int def_initiaux, std::string weapon_equipped,
           std::string armor_equipped, int money);

    std::string getWeaponEquipped();
    std::string getArmorEquipped();

    ~Player();
};

#endif //CREATE_SNAKE_SNAKE_H
