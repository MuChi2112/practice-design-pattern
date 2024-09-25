#pragma once

#include <iostream>
#include <unordered_map>
#include <vector>
#include "mediator.h"
using namespace std;

class CoffeeShopMediator : public Mediator {
private:
    unordered_map<string, vector<string>> orders;
public:
    void addIngredient(const string& coffeeType, const string& ingredient) override {
        orders[coffeeType].push_back(ingredient);
    }

    void showOrder(const string& coffeeType) override {
        cout << coffeeType <<endl;
        for (auto i : orders[coffeeType]) {

            for (int i = 0; i < coffeeType.length(); i++) {
                cout << " ";
            }
             cout <<"-"<< i << endl;

        }
    }
};