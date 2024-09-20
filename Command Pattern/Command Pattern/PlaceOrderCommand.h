#pragma once

#include <iostream>
#include "OrderCommand.h"
#include "Coffee.h"
using namespace std;

class PlaceOrderCommand : public OrderCommand {
private:
    Coffee* coffee;
public:
    PlaceOrderCommand(Coffee* c) : coffee(c) {}
    void execute() override {
        coffee->prepare();
    }
    void cancel() override {
        cout << "cancel " << coffee->getName() << endl;
    }
};