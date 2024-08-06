#pragma once

#include<iostream>
#include"latte.h"
#include"coffee.h"

class LatteAdapter : public Coffee {
private:
    Latte* latte;
public:
    LatteAdapter(Latte* lat) : latte(lat) {}
    void makeCoffee() override {
        latte->prepareLatte();
    }
};