#pragma once

using namespace std;
#include <iostream>
#include "BrewingProcess.h"
#include "Coffee.h"

// Espresso (�q���@�Y�@������)
class Espresso : public Coffee {
public:
    // �غc�l
    Espresso(BrewingProcess* process) : Coffee(process) {}

    // ��{ makeCoffee ��k�A�o�̤��ݭn�����@
    void makeCoffee() const override {
        cout << "Espresso";
        brewingProcess->brewCoffee();
        cout << endl;
    }
};