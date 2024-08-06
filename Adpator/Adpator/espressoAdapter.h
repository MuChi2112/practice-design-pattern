#pragma once

#include<iostream>
#include"espresso.h"
#include"coffee.h"

class EspressoAdapter : public Coffee {
private:
    Espresso* espresso;
public:
    EspressoAdapter(Espresso* esp) : espresso(esp) {}
    void makeCoffee() override {
        espresso->brewEspresso();
    }
};