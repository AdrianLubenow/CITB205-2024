#include "../headers/standardAccount.h" 

StandardAccount::StandardAccount(int initialBalance) : Account(initialBalance)
{

}

bool StandardAccount :: withdraw(int amount)
{
    const int fee = 1;
    if(checkBalance() >= amount + fee)
    {
        return Account::withdraw(amount + fee);
    }
    return false;
}