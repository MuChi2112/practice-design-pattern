#pragma once

#include <iostream>
using namespace std;

class Coffee {
protected:
    string name;
    double price;
public:
    Coffee(string n, double p) : name(n), price(p) {}
    virtual void prepare() = 0;
    string getName() { return name; }
    double getPrice() { return price; }
};