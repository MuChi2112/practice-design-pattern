#pragma once

#include <iostream>
using namespace std;

class Coffee {
public:
    Coffee(const string& type, double price) : type_(type), price_(price) {}

    // ��ܩ@�ثH��
    void displayCoffeeInfo(const string& size) {
        cout << type_ << " " << price_ << " " << size << endl;
    }

private:
    string type_;  // �@�غ����]�������A�^
    double price_; // ����]�������A�^
};