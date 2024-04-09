#pragma once
#include "account.h"

class ATM{
    private:
        int cashReserve;
    public:
        ATM(int initialReserve);
        bool withdraw(int amount, Account* account);
        int check(Account* account) const;
};