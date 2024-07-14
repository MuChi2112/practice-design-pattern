#include <iostream>

using namespace std;

#include "Latte.h"
#include "Americano.h"

#include "sugar.h"
#include "milk.h"
#include "vanilla.h"

int main(){

    string choice = "";
    cout << "Americano or Latte" << endl;
    cin >> choice;
    Coffee* drink;
    if (choice == "latte") {
        drink = new Latte();
    }
    else {
        drink = new Americano;
    }

    while (drink) {
        cout << "Add Sugar? Milk? Vanilla?" << endl;
        cin >> choice;
        
        if (choice == "sugar") {
            drink = new Sugar(drink);
        }
        else if (choice == "milk") {
            drink = new Milk(drink);
        }
        else {
            drink = new Vanilla(drink);
        }
    }
}
