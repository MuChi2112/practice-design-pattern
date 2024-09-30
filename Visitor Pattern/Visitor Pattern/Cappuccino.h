#pragma once

#include <iostream>
#include "Coffee.h"
#include "CoffeeVisitor.h"

using namespace std;

class CoffeeVisitor;

class Cappuccino : public Coffee {
public:
    void accept(CoffeeVisitor& visitor) override {
        visitor.visit(*this);
    }

    double getPrice() const override {
        return 8.0;
    }

    string getDescription() const override {
        return "This is Cappuccino";
    }
};