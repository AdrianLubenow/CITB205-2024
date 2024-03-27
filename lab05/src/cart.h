#pragma once

#include <string>
#include <vector>
#include "product.h"

using std::string;
using std::vector;

class Cart {
public:
    void add(string productName, double unitPrice, unsigned qty);
    double total();
    double discount(double discountAmount);
private:
    vector<Product> products;
};