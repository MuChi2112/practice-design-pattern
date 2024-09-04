#include <iostream>
#include <string>
#include "CoffeeMachine.h"

// CoffeeMachine 類別的完整實作（隱藏）

int main() {
    // 獲取唯一的 CoffeeMachine 實例
    CoffeeMachine* machine = CoffeeMachine::getInstance();

    // 設定咖啡類型並製作咖啡
    machine->setCoffeeType("Latte");
    machine->makeCoffee();

    // 再次嘗試獲取實例，應該是相同的實例
    CoffeeMachine* anotherMachine = CoffeeMachine::getInstance();
    anotherMachine->makeCoffee();  // 這應該還是 "Latte"

    return 0;
}