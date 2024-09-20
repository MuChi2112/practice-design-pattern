#pragma once

using namespace std;
#include <iostream>

class BrewingProcess {
public:
    // 定義一個純虛擬函數來表示沖泡咖啡的過程
    virtual void brewCoffee() const = 0;

    // 虛擬析構函數，確保子類別可以正確析構
    virtual ~BrewingProcess() {}
};