#pragma once

#include <iostream>
#include "customer.h"

class CoffeeShop {
public:
    virtual ~CoffeeShop() {}
    // 訂閱顧客
    virtual void subscribe(Customer* customer) = 0;
    // 取消訂閱
    virtual void unsubscribe(Customer* customer) = 0;
    // 通知所有訂閱者
    virtual void notifySubscribers(const std::string& message) = 0;
};