#pragma once

using namespace std;
#include <iostream>
#include "Coffee.h"

// Cappuccino (卡布奇諾咖啡類型)
class Cappuccino : public Coffee {
public:
    // 建構子
    Cappuccino(BrewingProcess* process) : Coffee(process) {}

    // 實現 makeCoffee 方法，這裡不需要具體實作
    void makeCoffee() const override {
        cout << "Cappuccino";
        brewingProcess->brewCoffee();
        cout << endl;
    }
};