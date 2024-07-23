#include <iostream>

#include "coffeeShopFacade.h"
using namespace std;

int main(){
    string temp = "";
    cout << "Which coffee?" << endl;
    cin >> temp;
    CoffeeShopFacade coffeeOrder;
    
    if (temp == "latte") {
        coffeeOrder.makeLatte();
    }else if (temp == "cappuccino") {
        coffeeOrder.makeCappuccino();
    }else {
        coffeeOrder.makeCaramelMacchiato();
    }
    
}
