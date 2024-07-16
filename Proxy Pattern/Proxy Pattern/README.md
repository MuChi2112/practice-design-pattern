Proxy Pattern

### 題目：實現一個智能咖啡機代理來優化咖啡訂單處理

#### 背景：
你正在開發一個智能咖啡機系統，該系統允許用戶訂購不同種類的咖啡。由於咖啡機的性能和資源有限，同時處理大量訂單可能會導致過載。為了解決這個問題，你決定使用代理模式來實現一個智能咖啡機代理，它可以緩存最近的訂單並優化處理過程。

#### 要求：
1. 定義一個`Coffee`接口，該接口包括製作咖啡的方法`makeCoffee()`。
2. 實現`RealCoffee`類，該類表示實際的咖啡製作過程。`RealCoffee`應該實現`Coffee`接口，並在其`makeCoffee()`方法中執行實際的咖啡製作操作。
3. 實現`ProxyCoffee`類，該類也應該實現`Coffee`接口，並包含一個指向`RealCoffee`對象的引用。`ProxyCoffee`應該根據訂單情況來決定是否需要實際製作咖啡。如果咖啡訂單最近已經處理過，應該直接返回結果；否則，應該製作咖啡並存入緩存。
4. 編寫一個客戶端代碼來測試你的實現。客戶端應該能夠通過`ProxyCoffee`對象來訂購和獲取咖啡，而不需要每次都進行實際製作。