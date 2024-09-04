#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "CoffeeComponent.h"
using namespace std;

class CoffeeComposite : public CoffeeComponent {
public:

    ~CoffeeComposite() {
        for (auto component : components_) {
            delete component;
        }
    }

    void addComponent(CoffeeComponent* component) {
        components_.push_back(component);

    }

    void removeComponent(CoffeeComponent* component) {
        components_.erase(std::remove(components_.begin(), components_.end(), component), components_.end());
        delete component;
    }

    void show() const override {
        for (auto i : components_) {
            i->show();
        }
    }

    double getCost() const override {
        double ans = 0;
        for (auto i : components_) {
            ans += i->getCost();
        }

        return ans;
    }

    double getAmount(double tips) const override {
        return getCost() * (1 + tips / 100);
    }

private:
    vector<CoffeeComponent*> components_;
};