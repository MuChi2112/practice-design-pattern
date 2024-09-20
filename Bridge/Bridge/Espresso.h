#pragma once

using namespace std;
#include <iostream>
#include "BrewingProcess.h"
#include "Coffee.h"

// Espresso (義式濃縮咖啡類型)
class Espresso : public Coffee {
public:
    // 建構子
    Espresso(BrewingProcess* process) : Coffee(process) {}

    // 實現 makeCoffee 方法，這裡不需要具體實作
    void makeCoffee() const override {
        cout << "Espresso";
        brewingProcess->brewCoffee();
        cout << endl;
    }
};