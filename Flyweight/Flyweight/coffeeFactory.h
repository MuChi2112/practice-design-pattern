#pragma once

#include <iostream>
#include <unordered_map>
#include "coffee.h"
using namespace std;

class CoffeeFactory {
public:
    Coffee* getCoffee(const string& type) {
        if (coffeeMap_.count(type)) return coffeeMap_[type];
        Coffee* coffee = nullptr;
        if (type == "美式") {
            coffee = new Coffee(type, 3.0);
        }else if (type == "拿鐵") {
            coffee = new Coffee(type, 4.0);
        }else {
            coffee = new Coffee(type, 5.0);
        }

        return coffee;
        
    }

    ~CoffeeFactory() {
        for (auto& coffeePair : coffeeMap_) {
            delete coffeePair.second;
        }
    }

private:
    unordered_map<string, Coffee*> coffeeMap_; // 存放共享的咖啡對象
};