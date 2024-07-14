#pragma once

#include <iostream>
#include "coffee.h"

using namespace std;


class Americano : public Coffee {
public:
	Americano() :Coffee(5) {
		cout << "Americano, current Price: " << getPrice() << endl;
	}
};