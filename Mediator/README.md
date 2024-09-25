中介者模式：

### 題目：

假設你有一個咖啡店的點單系統，有多種咖啡品項和配料。咖啡和配料之間的關係複雜，例如不同咖啡可能有不同的配料搭配。請使用 **中介者模式** 來設計一個系統，讓咖啡和配料之間的互動不再彼此依賴，而是通過一個中介者來協調。

**需求：**
1. 咖啡類型：
   - 美式咖啡 (Americano)
   - 拿鐵 (Latte)
   - 卡布奇諾 (Cappuccino)

2. 配料：
   - 牛奶 (Milk)
   - 糖 (Sugar)
   - 濃縮咖啡 (Espresso)

3. 中介者的角色負責管理咖啡和配料的交互邏輯。例如，不同咖啡可能有不同的配料需求，而這些需求由中介者處理：
   - 美式咖啡不加牛奶，但可以加糖。
   - 拿鐵需要加牛奶，可以選擇是否加糖。
   - 卡布奇諾需要濃縮咖啡和牛奶，可以選擇是否加糖。

4. 實作中介者模式，使咖啡和配料的互動通過中介者進行，讓咖啡和配料之間的依賴性降低。

### 提示：
- 你需要定義咖啡和配料的抽象類別，並實作具體的咖啡類型和配料。
- 中介者模式的核心是創建一個中介者接口，並在其中管理咖啡和配料之間的關係。

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

// 中介者介面
class Mediator {
public:
    virtual void addIngredient(const std::string& coffeeType, const std::string& ingredient) = 0;
    virtual void showOrder(const std::string& coffeeType) = 0;
};

// 咖啡類型
class Coffee {
protected:
    Mediator* mediator;
    std::string type;
public:
    Coffee(Mediator* m, const std::string& t) : mediator(m), type(t) {}
    virtual void addIngredients() = 0;     virtual ~Coffee() = default;
};

// 美式咖啡類型
class Americano : public Coffee {
public:
    Americano(Mediator* m) : Coffee(m, "Americano") {}
    void addIngredients() override {
        // TODO: 實作添加美式咖啡的配料
    }
};

// 拿鐵咖啡類型
class Latte : public Coffee {
public:
    Latte(Mediator* m) : Coffee(m, "Latte") {}
    void addIngredients() override {
        // TODO: 實作添加拿鐵的配料
    }
};

// 卡布奇諾咖啡類型
class Cappuccino : public Coffee {
public:
    Cappuccino(Mediator* m) : Coffee(m, "Cappuccino") {}
    void addIngredients() override {
        // TODO: 實作添加卡布奇諾的配料
    }
};

// 咖啡店中介者，負責管理咖啡與配料
class CoffeeShopMediator : public Mediator {
private:
    std::unordered_map<std::string, std::vector<std::string>> orders;
public:
    void addIngredient(const std::string& coffeeType, const std::string& ingredient) override {
        // TODO: 實作添加配料邏輯
    }

    void showOrder(const std::string& coffeeType) override {
        // TODO: 實作顯示訂單邏輯
    }
};

// 主函數
int main() {
    CoffeeShopMediator mediator;

    Coffee* americano = new Americano(&mediator);
    Coffee* latte = new Latte(&mediator);
    Coffee* cappuccino = new Cappuccino(&mediator);

    americano->addIngredients(); // 學生需要實作這些函數
    latte->addIngredients();     // 學生需要實作這些函數
    cappuccino->addIngredients(); // 學生需要實作這些函數

    mediator.showOrder("Americano"); // 學生需要實作這些函數
    mediator.showOrder("Latte");     // 學生需要實作這些函數
    mediator.showOrder("Cappuccino"); // 學生需要實作這些函數

    // 釋放記憶體
    delete americano;
    delete latte;
    delete cappuccino;

    return 0;
}
  

### 說明：
1. **Mediator** 介面定義了中介者的行為。具體的中介者是 `CoffeeShopMediator`，負責管理咖啡和配料之間的互動。
2. **Coffee** 是一個抽象類別，代表了各種咖啡類型。不同的咖啡類型如 `Americano`、`Latte` 和 Cappuccino 繼承自它，並透過中介者來添加配料。
3. **CoffeeShopMediator** 負責協調咖啡和配料的關係，並可以顯示每個咖啡的配料。

執行後，你會看到每種咖啡和它所包含的配料。這樣使用中介者模式就可以將咖啡和配料的關係解耦。