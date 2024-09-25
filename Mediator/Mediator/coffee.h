#pragma once

#include <iostream>
#include "mediator.h" 
using namespace std;

class Coffee {
protected:
    Mediator* mediator;
    string type;
public:
    Coffee(Mediator* m, const string& t) : mediator(m), type(t) {}
    virtual void addIngredients() = 0;     virtual ~Coffee() = default;
};