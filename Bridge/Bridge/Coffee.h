#pragma once

using namespace std;
#include <iostream>
#include "BrewingProcess.h"

class Coffee {
protected:
    // 保存一個 BrewingProcess 類的指標，用來指向具體的沖泡過程
    BrewingProcess* brewingProcess;

public:
    // 建構子接受一個 BrewingProcess 類的指標
    Coffee(BrewingProcess* process) : brewingProcess(process) {}

    // 純虛擬函數，表示製作咖啡的過程
    virtual void makeCoffee() const = 0;

    // 虛擬析構函數
    virtual ~Coffee() {}
};

