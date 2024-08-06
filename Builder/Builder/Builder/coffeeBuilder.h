#pragma once

#include <iostream>
#include "coffee.h"
using namespace std;

class CoffeeBuilder {
public:
    virtual ~CoffeeBuilder() {}
    Coffee* getCoffee() {
        return coffee;
    }
    void createNewCoffee() {
        coffee = new Coffee();
    }
    virtual void addCoffeeBeans() = 0;
    virtual void addWater() = 0;
    virtual void addMilk() = 0;
    virtual void addSugar() = 0;
protected:
    Coffee* coffee;
};