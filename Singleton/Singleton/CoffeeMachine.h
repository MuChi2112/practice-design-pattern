#pragma once

#include <iostream>
using namespace std;

class CoffeeMachine {
public:
	void makeCoffee() {
		cout << "make " << Coffee << endl;
	}

	void setCoffeeType(string coffee) {
		Coffee = coffee;
	}

	static CoffeeMachine* getInstance() {
		if (!instance) instance = new CoffeeMachine();;
		return instance;
	}

private:
	CoffeeMachine(){}
	static CoffeeMachine* instance;
	string Coffee;
};
CoffeeMachine* CoffeeMachine::instance = nullptr;