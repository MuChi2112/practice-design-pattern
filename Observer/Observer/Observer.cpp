#include <iostream>

#include "coffeeShopImpl.h"
#include "coffeeLover.h"

int main() {
    CoffeeShopImpl shop;

    // 創建顧客
    CoffeeLover alice("Alice");
    CoffeeLover bob("Bob");

    // 顧客訂閱咖啡店
    shop.subscribe(&alice);
    shop.subscribe(&bob);

    // 咖啡店發佈消息
    shop.addNewCoffee("卡布奇諾");
    shop.offerSpecialDiscount("拿鐵半價");

    // 顧客取消訂閱
    shop.unsubscribe(&bob);

    // 咖啡店再次發佈消息
    shop.addNewCoffee("美式");

    return 0;
}