#pragma once

#include <iostream>
using namespace std;

class CoffeeHandler {
protected:
    CoffeeHandler* nextHandler; // 下一個處理者

public:
    CoffeeHandler() : nextHandler(nullptr) {}
    virtual ~CoffeeHandler() = default;

    void setNextHandler(CoffeeHandler* handler) {
        nextHandler = handler;
    }

    virtual void handleRequest(string& order) {
        if (nextHandler) {
            nextHandler->handleRequest(order);
        }
    }
};