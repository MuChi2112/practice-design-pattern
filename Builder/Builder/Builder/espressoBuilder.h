#pragma once

#include <iostream>
#include "coffeeBuilder.h"


class EspressoBuilder : public CoffeeBuilder {
public:
    void addCoffeeBeans() override {
        coffee->setCoffeeBeans("Espresso coffee bean");
    }
    void addWater() override {
        coffee->setWater(10);
    }
    void addMilk() override {
        coffee->setMilk(10);
    }
    void addSugar() override {
        coffee->setSugar(10);
    }
    
};
