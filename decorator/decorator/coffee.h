#pragma once

class Coffee {
public:
	Coffee() {

	}
	Coffee(int price) {
		Price = price;
	}
	int getPrice() {
		return Price;
	}
	void setPrice(int price) {
		Price = price;

	}
private:
	int Price;
};