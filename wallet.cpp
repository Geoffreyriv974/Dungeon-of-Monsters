#include "wallet.h"

Wallet::Wallet(int money)
        : m_money(money)
{

}

int Wallet::getMoney() {
    return m_money;
}

void Wallet::setMoney(int money) {
    this->m_money = money;
}

Wallet::~Wallet() {

}