#pragma once

#include <iostream>

class Customer {
public:
    virtual ~Customer() {}
    // �����q������k
    virtual void update(const std::string& message) = 0;
};