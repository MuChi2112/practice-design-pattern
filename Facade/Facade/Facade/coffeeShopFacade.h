#pragma once

#include <iostream>

#include "coffeeMachine.h"
#include "lights.h"
#include "milkFrother.h"
#include "syrupDispenser.h"
using namespace std;

class CoffeeShopFacade {
public:
    CoffeeShopFacade() {

    }

    void makeLatte() {
        lights.turnSwitch();
        coffeeMachine.brewCoffee();
        milkFrother.frothMilk();
    }
        
    void makeCappuccino() {
        lights.turnSwitch();
        coffeeMachine.brewCoffee();
        milkFrother.frothMilk();
        milkFrother.frothMilk();
    }

    void makeCaramelMacchiato() {
        lights.turnSwitch();
        coffeeMachine.brewCoffee();
        milkFrother.frothMilk();
        syrupDispenser.addSyrup();
    }

private:
    CoffeeMachine coffeeMachine;
    MilkFrother milkFrother;
    SyrupDispenser syrupDispenser;
    Lights lights;
};
