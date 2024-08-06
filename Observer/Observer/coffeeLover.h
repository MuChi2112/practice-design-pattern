#pragma once

#include <iostream>
#include "customer.h"

class CoffeeLover : public Customer {
public:
    CoffeeLover(const std::string& name) : name(name) {}

    // 收到通知時打印消息
    void update(const std::string& message) override {
        std::cout << name << message << std::endl;
    }

private:
    std::string name; // 顧客名稱
};