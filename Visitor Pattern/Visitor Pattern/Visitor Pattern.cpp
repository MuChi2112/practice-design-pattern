#include <iostream>
#include <vector>
#include <string>

#include "Coffee.h"
#include "Americano.h"
#include "Latte.h"
#include "Cappuccino.h"

#include "PriceVisitor.h"
#include "InfoVisitor.h"

using namespace std;

// 主程式
int main() {
    vector<Coffee*> coffees;
    coffees.push_back(new Americano());
    coffees.push_back(new Latte());
    coffees.push_back(new Cappuccino());

    PriceVisitor priceVisitor;
    InfoVisitor infoVisitor;

    cout << "=== Coffee Prices ===" << endl;
    for (auto coffee : coffees) {
        coffee->accept(priceVisitor);
    }

    cout << "\n=== Coffee Info ===" << endl;
    for (auto coffee : coffees) {
        coffee->accept(infoVisitor);
    }

    // 清理記憶體
    for (auto coffee : coffees) {
        delete coffee;
    }

    return 0;
}