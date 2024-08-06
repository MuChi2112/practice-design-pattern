#include <iostream>

#include"coffeeShop.h"
#include"espressoAdapter.h"
#include"latteAdapter.h"
#include"cappuccinoAdapter.h"

int main() {
    CoffeeShop shop;

    Espresso espresso;
    Latte latte;
    Cappuccino cappuccino;

    EspressoAdapter espressoAdapter(&espresso);
    LatteAdapter latteAdapter(&latte);
    CappuccinoAdapter cappuccinoAdapter(&cappuccino);

    shop.orderCoffee(&espressoAdapter);
    shop.orderCoffee(&latteAdapter);
    shop.orderCoffee(&cappuccinoAdapter);

    return 0;
}