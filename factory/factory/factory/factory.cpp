#include <iostream>

#include "coffeeFactory.h"
#include "juiceFactory.h"
#include "teaFactory.h"

using namespace std;

DrinkFactory* createFactory(string temp) {
	DrinkFactory* drinkFactory = nullptr;
	if (temp == "coffee") {
		drinkFactory = new CoffeeFactory();

	}
	else if (temp == "juice") {
		drinkFactory = new JuiceFactory();
	}
	else if (temp == "tea") {
		drinkFactory = new TeaFactory();
	}
	else {
		cout << "Wrong drink" << endl;
		return nullptr;
	}

	return drinkFactory;
}

int main() {
	string temp = "";
	

	cout << "Enter the drink" << endl;
	cin >> temp;

	DrinkFactory* factory = createFactory(temp);
	
	if (factory != nullptr) {
		Drink* drink = factory->createDrink();

		drink->prepare();
	}

	
}
