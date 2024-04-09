#pragma once
#include <string>


class Account{
public:
    Account(int initialBalance);
    virtual bool withdraw(int amount);
    int checkBalance() const;
 private:
    int balance;
};