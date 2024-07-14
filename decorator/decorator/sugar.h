#pragma once

#include <iostream>
#include "decorator.h"

using namespace std;

class Sugar : public Decorator {
public:
	Sugar(Coffee* drink) :Decorator() {
		int price = drink->getPrice() + 2;
		cout << "Add Sugar, current Price: " << price << endl;
		setPrice(price);
	}
};