#pragma once

#include <iostream>
#include "Coffee.h"

class Cappuccino : public Coffee {
public:
    Cappuccino() : Coffee("Cappuccino", 4.5) {}
    void prepare() override {
        cout << "making Cappuccino" << endl;
    }
};