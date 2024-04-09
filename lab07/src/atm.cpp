#include "../headers/atm.h"

ATM::ATM(int initialReserve) : cashReserve(initialReserve) 
{

}

bool ATM::withdraw(int amount, Account *account)
{
    if(cashReserve > amount && account->withdraw(amount))
    {
        cashReserve -= amount;
        return true;
    }
    return false;
}

int ATM :: check(Account* account) const
{
    return account->checkBalance();
}