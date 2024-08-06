#pragma once

#include <iostream>

class Customer {
public:
    virtual ~Customer() {}
    // 接收通知的方法
    virtual void update(const std::string& message) = 0;
};