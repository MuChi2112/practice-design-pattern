#pragma once

#include <iostream>

#include "cash.h"
#include "creditCard.h"
#include "paypal.h"

using namespace std;

class Order {
public:
	Order(int price, string payStrategy) {
		bills = check(price, payStrategy);
	}
	int getBills() {
		return bills;
	}

private:

	int bills;
	
	Pay* createPay(string payStrategy) {
		if (payStrategy == "cash") {
			return new Cash();
		}
		else if (payStrategy == "credit") {
			return new CreditCard();
		}
		else {
			return new Paypal();
		}

		return nullptr;
	}

	int check(int price, string payStrategy) {
		Pay* pay = createPay(payStrategy);
		return pay->payBills(price);
	}


};