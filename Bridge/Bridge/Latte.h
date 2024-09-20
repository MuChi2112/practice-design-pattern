#pragma once

using namespace std;
#include <iostream>
#include "BrewingProcess.h"
#include "Coffee.h"

// Latte (���K�@������)
class Latte : public Coffee {
public:
    // �غc�l
    Latte(BrewingProcess* process) : Coffee(process) {}

    // ��{ makeCoffee ��k�A�o�̤��ݭn�����@
    void makeCoffee() const override {
        cout << "Lattee";
        brewingProcess->brewCoffee();
        cout << endl;
    }
};