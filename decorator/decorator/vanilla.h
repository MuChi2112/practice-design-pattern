#pragma once

#include <iostream>
#include "decorator.h"

using namespace std;

class Vanilla : public Decorator {
public:
	Vanilla(Coffee* drink) :Decorator() {
		int price = drink->getPrice() + 3;
		cout << "Add Vanilla, current Price: " << price << endl;
		setPrice(price);
	}
};