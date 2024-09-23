#pragma once

#include <iostream>
#include "CoffeeHandler.h"
using namespace std;

class TemperatureHandler : public CoffeeHandler {
private:
    string temperature;

public:
    TemperatureHandler(const string& temp) : temperature(temp) {}

    void handleRequest(string& order) override {
        order += "  - " + temperature + "\n";
        CoffeeHandler::handleRequest(order);
    }
};