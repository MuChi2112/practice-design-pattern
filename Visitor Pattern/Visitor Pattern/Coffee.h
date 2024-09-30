#pragma once

#include <iostream>
using namespace std;

class CoffeeVisitor;

class Coffee {
public:
    virtual void accept(CoffeeVisitor& visitor) = 0;
    virtual double getPrice() const = 0;
    virtual string getDescription() const = 0;
    virtual ~Coffee() = default;
};