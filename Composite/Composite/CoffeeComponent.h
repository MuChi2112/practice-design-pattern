#pragma once

using namespace std;

class CoffeeComponent{
public:
    virtual ~CoffeeComponent() = default;
    virtual void show() const = 0;  // ��ܭq�涵��
    virtual double getCost() const = 0;  // ����@�ئ���
    virtual double getAmount(double tips) const = 0;
};