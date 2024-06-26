#include "cart.h"

void Cart::add(string productName, double unitPrice, unsigned qty)
{
    products.push_back(Product(productName, unitPrice, qty));
}

double Cart::total()
{
    double sum = 0;
    for (auto p : products) {
        sum += p.getQty() * p.getUnitPrice();
    }
    return sum;
}

double Cart::discount(double discountAmount)
{
    double totalAmount = total();

    if (totalAmount > discountAmount)
        return totalAmount - discountAmount;
    else
        return 0;
}