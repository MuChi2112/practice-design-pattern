#pragma once

#include <iostream>
#include "beverage.h"
#include <unordered_map>

using namespace std;

class BeverageManager {
public:
    void addPrototype(const string& type, unique_ptr<Beverage> prototype) {
        prototypes_[type] = move(prototype);
    }

    unique_ptr<Beverage> createClone(const string& type) {
        if (prototypes_.find(type) != prototypes_.end()) {
            return prototypes_[type]->clone();
        }
        return nullptr;
    }

private:
    unordered_map<string, unique_ptr<Beverage>> prototypes_;
};