#pragma once

#include <string>
#include <vector>
#include <stack>
#include <memory>

#include "Memento.h"
using namespace std;

class CoffeeOrder {
public:
    void addCoffee(const string& coffee) {
        currentOrder.push_back(coffee);
    }

    void modifyCoffee(int index, const string& newCoffee) {
        currentOrder[index] = newCoffee;
    }
    void displayOrder() const {
        for (auto i : currentOrder) {
            cout << i << endl;
        }
        
    }
    unique_ptr<Memento> save() {
        return make_unique<Memento>(currentOrder);
    }
    void restore(const unique_ptr<Memento>& memento) {
        currentOrder = memento->getState();
    }
private:
    vector<string> currentOrder; // Holds the current list of coffee orders
};