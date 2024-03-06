#include "player.h"

Player::Player(std::string type, std::string pseudo, int life, int deg_initiaux, int def_initiaux, std::string weapon_equipped,std::string armor_equipped, int money)
: Character(type, pseudo, life, deg_initiaux, def_initiaux, money)
{
    this->m_weapon_equipped = weapon_equipped;
    this->m_armor_equipped = armor_equipped;
}

std::string Player::getWeaponEquipped()
{
    return m_weapon_equipped;
}

std::string Player::getArmorEquipped()
{
    return m_armor_equipped;
}


Player::~Player()
{
    // DO VERIFICATION BEFORE DESTROY
}