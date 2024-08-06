#pragma once

#include<iostream>
#include"cappuccino.h"
#include"coffee.h"

class CappuccinoAdapter : public Coffee {
private:
    Cappuccino* cappuccino;
public:
    CappuccinoAdapter(Cappuccino* cap) : cappuccino(cap) {}
    void makeCoffee() override {
        cappuccino->createCappuccino();
    }
        // �ݭn��{����k
};