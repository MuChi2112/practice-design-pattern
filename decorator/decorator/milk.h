#pragma once

#include <iostream>
#include "decorator.h"

using namespace std;

class Milk : public Decorator {
public:
	Milk(Coffee* drink) :Decorator() {
		int price = drink->getPrice() + 1;
		cout << "Add Milk, current Price: "<< price <<endl;
		setPrice(price);
	}
};