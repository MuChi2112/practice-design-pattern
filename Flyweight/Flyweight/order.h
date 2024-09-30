#pragma once

#include <iostream>
#include "coffee.h"

class Order {
public:
    Order(Coffee* coffee, const string& size) : coffee_(coffee), size_(size) {}

    // 顯示訂單信息
    void showOrder() {
        coffee_->displayCoffeeInfo(size_);
        
    }

private:
    Coffee* coffee_;  // 咖啡類型（享元對象）
    string size_;     // 杯型（外部狀態）
};