#pragma once

#include <iostream>
#include "customer.h"

class CoffeeLover : public Customer {
public:
    CoffeeLover(const std::string& name) : name(name) {}

    // ����q���ɥ��L����
    void update(const std::string& message) override {
        std::cout << name << message << std::endl;
    }

private:
    std::string name; // �U�ȦW��
};