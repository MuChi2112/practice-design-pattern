#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

#include "coffeeShopMediator.h"
#include "coffee.h"

#include "lattee.h"
#include "americano.h"
#include "cappuccino.h"

int main() {
    CoffeeShopMediator mediator;

    Coffee* americano = new Americano(&mediator);
    Coffee* latte = new Latte(&mediator);
    Coffee* cappuccino = new Cappuccino(&mediator);

    americano->addIngredients(); // 學生需要實作這些函數
    latte->addIngredients();     // 學生需要實作這些函數
    cappuccino->addIngredients(); // 學生需要實作這些函數

    mediator.showOrder("Americano"); // 學生需要實作這些函數
    mediator.showOrder("Latte");     // 學生需要實作這些函數
    mediator.showOrder("Cappuccino"); // 學生需要實作這些函數

    // 釋放記憶體
    delete americano;
    delete latte;
    delete cappuccino;

    return 0;
}