#pragma once

#include <iostream>
#include "CoffeeHandler.h"
using namespace std;

class MilkHandler : public CoffeeHandler {
public:
    void handleRequest(string& order) override {
        order += "  - �[���� \n";
        CoffeeHandler::handleRequest(order);
    }
};