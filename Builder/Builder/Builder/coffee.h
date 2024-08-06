#pragma once

#include <iostream>
using namespace std;

class Coffee{
public:
    void setCoffeeBeans(string temp) {
        coffeeBeans = temp;
    }
    void setWater(int amount) {
        water = amount;
    }
    void setMilk(int amount) {
        milk = amount;
    }
    void setSugar(int amount) {
        sugar = amount;
    }
    void show() const {
        cout << "Coffee beans: " << coffeeBeans << endl;
        cout << "Water: " << water << endl;
        cout << "Milk: " << milk << endl;
        cout << "Sugar: " << sugar << endl;
    }

private:
    string coffeeBeans;
    int water;
    int milk;
    int sugar;
};