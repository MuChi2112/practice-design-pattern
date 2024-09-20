#pragma once

#include <iostream>
#include "Coffee.h"

using namespace std;

class Latte : public Coffee {
public:
    Latte() : Coffee("Latte", 4.0) {}

    void prepare() override {
        cout <<"making Latte" << endl;
    }
};