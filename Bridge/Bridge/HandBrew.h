#pragma once

using namespace std;
#include <iostream>
#include "BrewingProcess.h"
#include "Coffee.h"

class HandBrew : public BrewingProcess {
public:
    void brewCoffee() const override {
        cout << " by Hand Brew " << endl;
    }
};