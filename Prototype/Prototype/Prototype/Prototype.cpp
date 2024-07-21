#include <iostream>

#include "beverageManager.h"
#include "coffee.h"
#include "tea.h"

int main(){
    BeverageManager manager;

    // 添加具體飲料原型
    manager.addPrototype("Espresso", std::make_unique<Coffee>());
    manager.addPrototype("Latte", std::make_unique<Coffee>());
    manager.addPrototype("GreenTea", std::make_unique<Tea>());
    manager.addPrototype("BlackTea", std::make_unique<Tea>());

    // 創建並顯示飲料副本
    auto beverage1 = manager.createClone("Espresso");
    if (beverage1) beverage1->display();

    auto beverage2 = manager.createClone("Latte");
    if (beverage2) beverage2->display();

    auto beverage3 = manager.createClone("GreenTea");
    if (beverage3) beverage3->display();

    auto beverage4 = manager.createClone("BlackTea");
    if (beverage4) beverage4->display();
}

