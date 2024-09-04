#pragma once

using namespace std;

class CoffeeComponent{
public:
    virtual ~CoffeeComponent() = default;
    virtual void show() const = 0;  // 顯示訂單項目
    virtual double getCost() const = 0;  // 獲取咖啡成本
    virtual double getAmount(double tips) const = 0;
};