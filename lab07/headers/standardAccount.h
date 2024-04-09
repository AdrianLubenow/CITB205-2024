#pragma once
#include "account.h"

class StandardAccount : public Account{
    public:
    StandardAccount(int initialBalance);
    bool withdraw(int amount) override;
};