#pragma once

#include <iostream>
#include "customer.h"

class CoffeeShop {
public:
    virtual ~CoffeeShop() {}
    // �q�\�U��
    virtual void subscribe(Customer* customer) = 0;
    // �����q�\
    virtual void unsubscribe(Customer* customer) = 0;
    // �q���Ҧ��q�\��
    virtual void notifySubscribers(const std::string& message) = 0;
};