#pragma once

#include <iostream>
#include "coffee.h"
using namespace std;

class Americano : public Coffee {
public:
    Americano(Mediator* m) : Coffee(m, "Americano") {}
    void addIngredients() override {
        mediator->addIngredient("Americano", "sugar");
    }
};