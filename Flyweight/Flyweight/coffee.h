#pragma once

#include <iostream>
using namespace std;

class Coffee {
public:
    Coffee(const string& type, double price) : type_(type), price_(price) {}

    // 顯示咖啡信息
    void displayCoffeeInfo(const string& size) {
        cout << type_ << " " << price_ << " " << size << endl;
    }

private:
    string type_;  // 咖啡種類（內部狀態）
    double price_; // 價格（內部狀態）
};