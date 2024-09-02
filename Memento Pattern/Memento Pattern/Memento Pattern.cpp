#include <iostream>

#include "CoffeeOrder.h"
#include "Caretaker.h"

int main() {
    CoffeeOrder order;
    Caretaker caretaker;

    // Adding coffee orders
    order.addCoffee("Espresso");
    caretaker.saveState(order.save()); // Save state
    order.displayOrder();

    order.addCoffee("Latte");
    caretaker.saveState(order.save()); // Save state
    order.displayOrder();

    order.modifyCoffee(0, "Cappuccino");
    caretaker.saveState(order.save()); // Save state
    order.displayOrder();

    // Undo operations
    cout << "\nUndo operation:" << endl;
        if (auto memento = caretaker.undo()) {
            order.restore(memento);
            order.displayOrder();
        }

    // Redo operations
    cout << "\nRedo operation:" << endl;
    if (auto memento = caretaker.redo()) {
        order.restore(memento);
        order.displayOrder();
    }

    return 0;
}


