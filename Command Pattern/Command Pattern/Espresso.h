#pragma once

#include <iostream>
#include "Coffee.h"
using namespace std;

class Espresso : public Coffee {
public:
    Espresso() : Coffee("Espresso", 3.0) {}
    void prepare() override {
        cout << "making Espresso" << endl;
    }
};