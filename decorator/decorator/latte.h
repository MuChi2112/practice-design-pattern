#pragma once

#include <iostream>
#include "coffee.h"

using namespace std;

class Latte : public Coffee {
public:
	Latte() :Coffee(6) {
		cout << "Latte, current Price: " << getPrice() << endl;
	}
};