#pragma once

#include <iostream>
#include "coffee.h"
using namespace std;


class Latte : public Coffee {
public:
    Latte(Mediator* m) : Coffee(m, "Latte") {}
    void addIngredients() override {
        mediator->addIngredient("Latte", "sugar");
        mediator->addIngredient("Latte", "milk");
    }
}; 