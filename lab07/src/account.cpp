#include "../headers/account.h"

Account :: Account(int initialBalance) : balance(initialBalance)
{

}

bool Account :: withdraw(int amount)
{
    if(balance > amount)
    {
        balance -= amount;
        return true;
    }
    return false;
}

int Account :: checkBalance() const
{
    return balance;
}