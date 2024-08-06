### 練習題設計

#### 題目描述

設計一個咖啡店系統，該系統允許顧客訂購不同種類的咖啡。咖啡店提供的咖啡有多種口味，每種口味的咖啡都有不同的製作過程。你的任務是使用適配器模式來將不同的咖啡製作流程統一成一個接口，使得系統可以統一處理所有種類的咖啡訂單。

### 系統要求

1. **咖啡接口（Coffee）**:
   - 定義製作咖啡的方法 `makeCoffee`。

2. **多種咖啡類型**:
   - 每種咖啡類型都有自己的製作流程（例如，Espresso、Latte、Cappuccino 等）。

3. **適配器（CoffeeAdapter）**:
   - 適配不同的咖啡類型，將其統一為標準接口。

4. **咖啡店（CoffeeShop）**:
   - 可以處理所有類型咖啡的訂單，並製作咖啡。

### 說明

- **`Coffee` 接口**:
  - 定義了 makeCoffee 方法，所有適配器需實現此接口。

- **`Espresso`、`Latte`、`Cappuccino` 類**:
  - 每種咖啡類型都有自己的製作流程。

- **適配器類（`EspressoAdapter`、`LatteAdapter`、`CappuccinoAdapter`）**:
  - 將不同咖啡類型的製作流程統一為 Coffee 接口。

- **`CoffeeShop` 類**:
  - 接收咖啡訂單並製作咖啡。

### 作業要求

1. **實現不同的適配器：**
   - 為每種咖啡類型編寫適配器類，並實現 makeCoffee 方法。

2. **測試你的實現：**
   - 編寫測試案例，驗證不同類型咖啡是否能通過適配器正常製作。

3. **擴展功能：**
   - 增加更多種類的咖啡及其適配器，測試系統的擴展性。

4. **優化設計：**
   - 使用智能指針來管理內存，提升系統的可擴展性和維護性。

#include <iostream>
#include <string>

// 咖啡接口
class Coffee {
public:
    virtual ~Coffee() {}
    virtual void makeCoffee() = 0; // 製作咖啡的方法
};

// Espresso 類
class Espresso {
public:
    void brewEspresso(); // 製作濃縮咖啡的方法
};

// Latte 類
class Latte {
public:
    void prepareLatte(); // 製作拿鐵咖啡的方法
};

// Cappuccino 類
class Cappuccino {
public:
    void createCappuccino(); // 製作卡布奇諾咖啡的方法
};

// Espresso 的適配器
class EspressoAdapter : public Coffee {
private:
    Espresso* espresso;
public:
    EspressoAdapter(Espresso* esp);
    void makeCoffee() override; // 需要實現此方法
};

// Latte 的適配器
class LatteAdapter : public Coffee {
private:
    Latte* latte;
public:
    LatteAdapter(Latte* lat);
    void makeCoffee() override; // 需要實現此方法
};

// Cappuccino 的適配器
class CappuccinoAdapter : public Coffee {
private:
    Cappuccino* cappuccino;
public:
    CappuccinoAdapter(Cappuccino* cap);
    void makeCoffee() override; // 需要實現此方法
};

// 咖啡店類
class CoffeeShop {
public:
    void orderCoffee(Coffee* coffee); // 接收咖啡訂單並製作咖啡
};

// 主函數
int main() {
    CoffeeShop shop;

    Espresso espresso;
    Latte latte;
    Cappuccino cappuccino;

    EspressoAdapter espressoAdapter(&espresso);
    LatteAdapter latteAdapter(&latte);
    CappuccinoAdapter cappuccinoAdapter(&cappuccino);

    shop.orderCoffee(&espressoAdapter);
    shop.orderCoffee(&latteAdapter);
    shop.orderCoffee(&cappuccinoAdapter);

    return 0;
}