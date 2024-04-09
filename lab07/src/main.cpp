#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "../headers/standardAccount.h"
#include "../headers/atm.h"


int main()
{
//cout << fixed << setprecision(2);

Account acc1(100);
StandardAccount acc2(100);
ATM atm(120);

bool ok = false;

ok = atm.withdraw(50, &acc1);
cout << (ok ? "OK" : "FAIL") << endl; // expect OK
cout << "$" << atm.check(&acc1) << endl; // expect 50

ok = atm.withdraw(50, &acc2);
cout << (ok ? "OK" : "FAIL") << endl; // expect OK
cout << "$" << atm.check(&acc2) << endl; // expect 49

ok = atm.withdraw(50, &acc1);
cout << (ok ? "OK" : "FAIL") << endl; // expect FAIL
cout << "$" << atm.check(&acc1) << endl; // expect 50
return 0;
}