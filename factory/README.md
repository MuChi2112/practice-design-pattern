### 題目一：簡單工廠模式
**題目描述：**
設計一個簡單工廠，用於生產不同種類的飲料。每種飲料都應該有一個 Drink 接口或抽象類別，並且每種具體的飲料都應該實現這個接口。工廠應該能夠根據輸入的參數來決定生產哪種飲料。

**要求：**
1. 實現一個 Drink 接口或抽象類別，包含一個 prepare() 方法。
2. 實現多種具體的飲料類別（例如：Coffee, Tea, Juice），並實現 Drink 接口。
3. 實現一個簡單工廠類別 `DrinkFactory`，包含一個靜態方法 `createDrink(String type)`，該方法根據輸入的類型創建並返回對應的飲料對象。

### 題目二：工廠方法模式
**題目描述：**
設計一個飲料生產系統，其中每種飲料的生產過程應該由對應的工廠來處理。每個具體工廠都應該實現一個工廠接口來創建具體的飲料對象。

**要求：**
1. 定義一個 Drink 接口或抽象類別，包含一個 prepare() 方法。
2. 實現多種具體的飲料類別（例如：Coffee, Tea, Juice），並實現 Drink 接口。
3. 定義一個 DrinkFactory 接口，包含一個 createDrink() 方法。
4. 實現多種具體工廠類別（例如：CoffeeFactory, TeaFactory, JuiceFactory），並實現 DrinkFactory 接口。

### 題目三：抽象工廠模式
**題目描述：**
設計一個抽象工廠模式的飲料生產系統，不僅要生產飲料，還要生產相應的容器。不同類型的飲料會有不同類型的容器，例如咖啡用咖啡杯，茶用茶杯，果汁用玻璃杯。

**要求：**
1. 定義一個 Drink 接口或抽象類別，包含一個 prepare() 方法。
2. 定義一個 Container 接口或抽象類別，包含一個 hold() 方法。
3. 實現多種具體的飲料類別（例如：Coffee, Tea, Juice），並實現 Drink 接口。
4. 實現多種具體的容器類別（例如：CoffeeCup, TeaCup, Glass），並實現 Container 接口。
5. 定義一個 DrinkFactory 接口，包含 createDrink() 和 createContainer() 方法。
6. 實現多種具體工廠類別（例如：CoffeeFactory, TeaFactory, JuiceFactory），並實現 DrinkFactory 接口，這些工廠應該能夠同時創建相應的飲料和容器。