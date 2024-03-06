#ifndef DUNGEON_AND_MONSTERS_WALLET_H
#define DUNGEON_AND_MONSTERS_WALLET_H

class Wallet
{
private:
    int m_money;

public:
    Wallet(int money);

    int getMoney();
    void setMoney(int money);

    ~Wallet();
};

#endif //DUNGEON_AND_MONSTERS_WALLET_H