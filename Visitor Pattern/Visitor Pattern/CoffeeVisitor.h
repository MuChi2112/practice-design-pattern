#pragma once

#include <iostream>
//#include "Americano.h"
//#include "Latte.h"
//#include "Cappuccino.h"
using namespace std;

class Americano;
class Latte;
class Cappuccino;

class CoffeeVisitor {
public:
    virtual void visit(Americano& americano) = 0;
    virtual void visit(Latte& latte) = 0;
    virtual void visit(Cappuccino& cappuccino) = 0;
    virtual ~CoffeeVisitor() = default;
};