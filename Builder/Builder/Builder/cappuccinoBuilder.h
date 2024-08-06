#pragma once

#include <iostream>
#include "coffeeBuilder.h"

class CappuccinoBuilder : public CoffeeBuilder {
public:
    void addCoffeeBeans() override {
        coffee->setCoffeeBeans("Cappuccino coffee bean");
    }
    void addWater() override {
        coffee->setWater(20);
    }
    void addMilk() override {
        coffee->setMilk(20);
    }
    void addSugar() override {
        coffee->setSugar(20);
    }
};