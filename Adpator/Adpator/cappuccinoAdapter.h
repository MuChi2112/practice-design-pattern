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
        // 需要實現此方法
};