#pragma once

using namespace std;
#include <iostream>
#include "BrewingProcess.h"

class MachineBrew : public BrewingProcess {
public:
    void brewCoffee() const override {
        cout << " by Machine Coffee" << endl;
    }
};