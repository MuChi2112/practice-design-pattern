#pragma once

using namespace std;
#include <iostream>
#include "Coffee.h"

// Cappuccino (�d���_�թ@������)
class Cappuccino : public Coffee {
public:
    // �غc�l
    Cappuccino(BrewingProcess* process) : Coffee(process) {}

    // ��{ makeCoffee ��k�A�o�̤��ݭn�����@
    void makeCoffee() const override {
        cout << "Cappuccino";
        brewingProcess->brewCoffee();
        cout << endl;
    }
};