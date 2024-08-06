#pragma once

#include<iostream>
#include"coffee.h"

class CoffeeShop {
public:
    void orderCoffee(Coffee* coffee) {
        coffee->makeCoffee();
    }
};

