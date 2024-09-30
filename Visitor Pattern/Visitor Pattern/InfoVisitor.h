#pragma once

#include "CoffeeVisitor.h"

class InfoVisitor : public CoffeeVisitor {
public:
    void visit(Americano& americano) override {
        cout << "Info: " << americano.getDescription() << endl;
    }

    void visit(Latte& latte) override {
        cout << "Info: " << latte.getDescription() << endl;
    }

    void visit(Cappuccino& cappuccino) override {
        cout << "Info: " << cappuccino.getDescription() << endl;
    }
};