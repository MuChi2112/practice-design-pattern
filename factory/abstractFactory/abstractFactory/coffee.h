#pragma once

#include <iostream>
#include "drink.h"

using namespace std;

class Coffee : public Drink{
	public:
		Coffee() {
			
		}

		void prepare() override {
			cout << "prepare for coffee"<<endl;
		}
};