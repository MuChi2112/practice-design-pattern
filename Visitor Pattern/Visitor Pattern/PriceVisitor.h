#pragma once

#include <iostream>
#include "CoffeeVisitor.h"

class PriceVisitor : public CoffeeVisitor {
public:
    void visit(Americano& americano) override {
        cout << "Price: " << americano.getPrice() << endl;
    }

    void visit(Latte& latte) override {
        cout << "Price: " << latte.getPrice() << endl;
    }

    void visit(Cappuccino& cappuccino) override {
        cout << "Price: " << cappuccino.getPrice() << endl;
    }
};