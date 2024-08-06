#pragma once

#include <iostream>
#include "coffeeBuilder.h"

class LatteBuilder : public CoffeeBuilder {
public:
    void addCoffeeBeans() override {
        coffee->setCoffeeBeans("Latte coffee bean");
    }
    void addWater() override {
        coffee->setWater(30);
    }
    void addMilk() override {
        coffee->setMilk(30);
    }
    void addSugar() override {
        coffee->setSugar(30);
    }
};