#pragma once

using namespace std;
#include <iostream>
#include "BrewingProcess.h"
#include "Coffee.h"

// Latte (拿鐵咖啡類型)
class Latte : public Coffee {
public:
    // 建構子
    Latte(BrewingProcess* process) : Coffee(process) {}

    // 實現 makeCoffee 方法，這裡不需要具體實作
    void makeCoffee() const override {
        cout << "Lattee";
        brewingProcess->brewCoffee();
        cout << endl;
    }
};