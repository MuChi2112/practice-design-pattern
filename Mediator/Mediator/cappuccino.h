#pragma once

#include <iostream>
#include "coffee.h"
using namespace std;

class Cappuccino : public Coffee {
public:
    Cappuccino(Mediator* m) : Coffee(m, "Cappuccino") {}
    void addIngredients() override {
        mediator->addIngredient("Cappuccino", "sugar");
    }
};