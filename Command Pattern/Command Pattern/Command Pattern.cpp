#include <iostream>
#include <string>
#include <vector>

#include "Coffee.h"
#include "Lattee.h"
#include "Cappuccino.h"
#include "Espresso.h"

#include "OrderCommand.h"
#include "PlaceOrderCommand.h"

#include "Barista.h"

int main() {
    Barista barista;

    Coffee* espresso = new Espresso();
    OrderCommand* order1 = new PlaceOrderCommand(espresso);
    barista.takeOrder(order1);

    Coffee* latte = new Latte();
    OrderCommand* order2 = new PlaceOrderCommand(latte);
    barista.takeOrder(order2);

    barista.cancelOrder(order1);

    delete order1;
    delete order2;
    delete espresso;
    delete latte;

    return 0;
}