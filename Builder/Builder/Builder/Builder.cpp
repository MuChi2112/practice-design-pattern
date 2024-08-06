#include <iostream>

#include "coffee.h"
#include "coffeeDirector.h"

#include "latteBuilder.h"
#include "espressoBuilder.h"
#include "cappuccinoBuilder.h"

using namespace std;

int main() {
    string temp = "";
    cout << "Drinks?" << endl;

    cin >> temp;
    CoffeeDirector* director = nullptr;
    if (temp == "latte") {
        director = new CoffeeDirector(new LatteBuilder());
    }
    else if (temp == "espresso") {
       director = new CoffeeDirector(new EspressoBuilder());
    }
    else {
        director = new CoffeeDirector(new CappuccinoBuilder());
    }
    director->constructCoffee();
    Coffee* coffee = director->getCoffee();
    coffee->show();
}

