#pragma once

#include <string>
#include "CoffeeComponent.h"
using namespace std;

class CoffeeLeaf : public CoffeeComponent {
public:
    CoffeeLeaf(const string& name, double cost) : name_(name), cost_(cost) {}
    void show() const override {
        cout << name_ << " " << cost_ << endl;
    }

    double getCost() const override {
        return cost_;
    }

    double getAmount(double tips) const override{
        return cost_ * (1 + tips / 100);
    }

private:
    string name_;
    double cost_;
    double tip_;
};