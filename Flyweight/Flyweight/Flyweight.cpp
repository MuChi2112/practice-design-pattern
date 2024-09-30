#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

#include "coffeeFactory.h"
#include "order.h"
#include "coffee.h"

int main() {
    CoffeeFactory coffeeFactory;

    // 點幾杯咖啡
    Order order1(coffeeFactory.getCoffee("美式"), "中杯");
    Order order2(coffeeFactory.getCoffee("拿鐵"), "大杯");
    Order order3(coffeeFactory.getCoffee("卡布奇諾"), "小杯");

    // 顯示訂單詳情
    order1.showOrder();
    order2.showOrder();
    order3.showOrder();

    return 0;
}
