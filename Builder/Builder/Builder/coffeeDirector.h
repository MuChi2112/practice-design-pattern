#pragma once

#include <iostream>
#include "coffee.h"
#include "coffeeBuilder.h"
using namespace std;

class CoffeeDirector {
public:
    CoffeeDirector(CoffeeBuilder* temp) {
        builder = temp;
    }
    Coffee* getCoffee() {
        return builder->getCoffee();
    }
    void constructCoffee() {
        builder->createNewCoffee();
        builder->addCoffeeBeans();
        builder->addMilk();
        builder->addSugar();
        builder->addWater();
    }
private:
    CoffeeBuilder* builder;
};