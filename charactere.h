#ifndef DUNGEON_AND_MONSTERS_CHARACTERE_H
#define DUNGEON_AND_MONSTERS_CHARACTERE_H
#include <iostream>
#include "wallet.h"

class Character
{
private:
    std::string m_type;
    std::string m_pseudo;
    int m_life;
    int m_deg_initiaux;
    int m_def_initiaux;
    Wallet m_wallet;

public:
    Character(std::string type, std::string pseudo, int life, int deg_initiaux, int def_initiaux, int money);

    std::string getType();
    std::string getPseudo();
    int getLife();
    int getDefInitiaux();
    void TakeDamage(int damage);
    int getDegInitiaux();
    Wallet &getWallet();

    ~Character();
};

#endif //DUNGEON_AND_MONSTERS_CHARACTERE_H