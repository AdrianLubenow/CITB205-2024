#include <iostream>
#include <iomanip>
#include "cart.h"

using namespace std;

int main() {
    Cart cart;
    string hasDiscount;
    double discountAmount = 0;

    cart.add("Apple", 1.50, 2);
    cart.add("Melon", 3.90, 1);

    cout << "Do you have a discount? (yes/no)" << endl;
    cin >> hasDiscount;

    if(hasDiscount == "yes" || hasDiscount == "Yes")
    {
        cout << "Enter discount amount: ";
        cin >> discountAmount;
    }

    cout << "$" << fixed << setprecision(2) << cart.discount(discountAmount) << endl;
    return 0;
}