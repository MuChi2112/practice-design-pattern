#pragma once

#include <iostream>
#include "coffee.h"

class Order {
public:
    Order(Coffee* coffee, const string& size) : coffee_(coffee), size_(size) {}

    // ��ܭq��H��
    void showOrder() {
        coffee_->displayCoffeeInfo(size_);
        
    }

private:
    Coffee* coffee_;  // �@�������]�ɤ���H�^
    string size_;     // �M���]�~�����A�^
};