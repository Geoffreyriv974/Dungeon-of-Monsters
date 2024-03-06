#include "charactere.h"

Character::Character(std::string type, std::string pseudo, int life, int deg_initiaux, int def_initiaux, int money)
        : m_type(type), m_pseudo(pseudo), m_life(life), m_deg_initiaux(deg_initiaux), m_def_initiaux(def_initiaux), m_wallet(Wallet(money))
{

}

std::string Character::getType()
{
    return m_type;
}

std::string Character::getPseudo()
{
    return m_pseudo;
}

int Character::getLife()
{
    return m_life;
}

int Character::getDegInitiaux()
{
    return m_deg_initiaux;
}

void Character::TakeDamage(int damage) {
    m_life -= damage;
}

int Character::getDefInitiaux()
{
    return m_def_initiaux;
}

Wallet &Character::getWallet()
{
    return m_wallet;
}

Character::~Character()
{
    // DO VERIFICATION BEFORE DESTROY
}