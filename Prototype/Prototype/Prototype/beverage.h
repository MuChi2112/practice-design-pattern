#pragma once

#include <iostream>

using namespace std;

class Beverage {
public:
	virtual unique_ptr<Beverage> clone() const = 0;
	virtual void display() = 0;
};