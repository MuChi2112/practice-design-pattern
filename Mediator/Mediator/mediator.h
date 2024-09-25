#pragma once

#include <iostream>
using namespace std;

class Mediator {
public:
    virtual void addIngredient(const string& coffeeType, const string& ingredient) = 0;
    virtual void showOrder(const string& coffeeType) = 0;
};