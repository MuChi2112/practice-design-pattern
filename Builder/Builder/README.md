# Builder 建造者模式

## 題目：咖啡製作系統

你被要求設計一個咖啡製作系統，該系統應使用 Builder 設計模式來構建不同類型的咖啡。系統應能夠生成以下幾種類型的咖啡：

1. **Espresso**
2. **Latte**
3. **Cappuccino**

每種咖啡都有一些基本組成部分，如咖啡豆、水、牛奶、糖等。

### 要求：

1. **抽象 Builder 類**：定義一個抽象類 `CoffeeBuilder`，包含構建咖啡不同部分的方法：
   - addCoffeeBeans()
   - addWater()
   - addMilk()
   - add Sugar()
   - getCoffee()

2. **具體 Builder 類**：為每種咖啡（Espresso, Latte, Cappuccino）創建具體的 Builder 類，繼承 CoffeeBuilder 並實現具體的構建步驟。

3. **Product 類**：定義 Coffee 類，包含咖啡的各種屬性（如是否有牛奶、糖等）。

4. **Director 類**：創建一個 CoffeeDirector 類，負責使用指定的 CoffeeBuilder 來構建咖啡。

5. **測試程序**：編寫一個測試程序，使用 CoffeeDirector 來構建不同類型的咖啡並顯示結果。

### 提示：

- 使用 Builder 設計模式將咖啡製作的複雜過程分解為多個步驟，並允許靈活地構建不同類型的咖啡。
- 具體的 CoffeeBuilder 可以設置不同的默認值來構建特定類型的咖啡，例如，`EspressoBuilder` 不會添加牛奶和糖，而 LatteBuilder 會添加牛奶。


### Coffee 類 (Product)
cpp
class Coffee {
public:
    void setCoffeeBeans(const std::string& beans);
    void setWater(int amount);
    void setMilk(int amount);
    void setSugar(int amount);
    void show() const;
private:
    std::string coffeeBeans;
    int water;
    int milk;
    int sugar;
};

### CoffeeBuilder 類 (抽象 Builder)
cpp
class CoffeeBuilder {
public:
    virtual ~CoffeeBuilder() {}
    Coffee* getCoffee();
    void createNewCoffee();
    virtual void addCoffeeBeans() = 0;
    virtual void addWater() = 0;
    virtual void addMilk() = 0;
    virtual void addSugar() = 0;
protected:
    Coffee* coffee;
};

### EspressoBuilder 類 (具體 Builder)
cpp
class EspressoBuilder : public CoffeeBuilder {
public:
    void addCoffeeBeans() override;
    void addWater() override;
    void addMilk() override;
    void addSugar() override;
};

### LatteBuilder 類 (具體 Builder)
cpp
class LatteBuilder : public CoffeeBuilder {
public:
    void addCoffeeBeans() override;
    void addWater() override;
    void addMilk() override;
    void addSugar() override;
};

### CappuccinoBuilder 類 (具體 Builder)
cpp
class CappuccinoBuilder : public CoffeeBuilder {
public:
    void addCoffeeBeans() override;
    void addWater() override;
    void addMilk() override;
    void addSugar() override;
};

### CoffeeDirector 類
cpp
class CoffeeDirector {
public:
    void setCoffeeBuilder(CoffeeBuilder* builder);
    Coffee* getCoffee();
    void constructCoffee();
private:
    CoffeeBuilder* builder;
};