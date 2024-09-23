# 職責鍊模式（Chain of Responsibility）

### 題目：咖啡訂單處理系統

你要設計一個咖啡訂單處理系統，這個系統會根據顧客的需求進行不同的咖啡訂單處理步驟。系統中使用了「職責鍊模式」，每個步驟由一個具體的處理者（Handler）來負責。每個處理者只能處理自己專門的部分，如果不能處理則將請求傳給下一個處理者。

### 要求：

1. **基本咖啡訂單：** 顧客可以訂購一杯普通咖啡（黑咖啡）。
2. **添加選項：** 顧客可以選擇加入糖、奶精、或是調整咖啡的溫度（熱咖啡或冷咖啡）。
3. **處理流程：**
    - 系統會先生成一個黑咖啡訂單。
    - 如果顧客要求加入糖，則需要經過「加糖處理者」來處理。
    - 如果顧客要求加入奶精，則需要經過「加奶精處理者」來處理。
    - 如果顧客要求改變咖啡溫度，則需要經過「調整溫度處理者」來處理。

4. **程式實作：**
    - 使用C++的物件導向設計，創建處理者類別。每個處理者類別都有一個`handleRequest()`方法來處理訂單，並決定是否將訂單交給下一個處理者。
    - 實現至少三個具體的處理者：`SugarHandler`、`MilkHandler`、`TemperatureHandler`。
    - 顧客訂單可以由多個處理者來處理（例如：一杯加糖加奶的冷咖啡）。

### 提示：

1. 使用職責鍊模式來實現處理順序，每個處理者應該知道誰是下一個處理者（即「下一個職責」）。
2. 你可以使用基底處理者類別（例如`CoffeeHandler`），並讓具體的處理者繼承這個基底類別。

這個題目不僅可以幫助你理解職責鍊模式，還能加強你的物件導向設計能力。


cpp
#include <iostream>
#include <string>

// 抽象處理者類別
class CoffeeHandler {
protected:
    CoffeeHandler* nextHandler; // 下一個處理者

public:
    CoffeeHandler() : nextHandler(nullptr) {}
    virtual ~CoffeeHandler() = default;

    void setNextHandler(CoffeeHandler* handler) {
        nextHandler = handler;
    }

    virtual void handleRequest(std::string& order) {
        if (nextHandler) {
            // TODO: 在這裡實現傳遞給下一個處理者的邏輯
        }
    }
};

// 具體的處理者類別：加糖處理者
class SugarHandler : public CoffeeHandler {
public:
    void handleRequest(std::string& order) override {
        // TODO: 實現加糖邏輯
    }
};

// 具體的處理者類別：加奶精處理者
class MilkHandler : public CoffeeHandler {
public:
    void handleRequest(std::string& order) override {
        // TODO: 實現加奶精邏輯
    }
};

// 具體的處理者類別：調整溫度處理者
class TemperatureHandler : public CoffeeHandler {
private:
    std::string temperature;
    
public:
    TemperatureHandler(const std::string& temp) : temperature(temp) {}

    void handleRequest(std::string& order) override {
        // TODO: 實現調整咖啡溫度邏輯
    }
};

// 測試系統
int main() {
    // 創建處理者
    SugarHandler sugarHandler;
    MilkHandler milkHandler;
    TemperatureHandler tempHandler("冷");

    // 設定職責鍊
    sugarHandler.setNextHandler(&milkHandler);
    milkHandler.setNextHandler(&tempHandler);

    // 顧客的訂單
    std::string order = "咖啡訂單：\n  - 黑咖啡\n";

    // 處理訂單
    sugarHandler.handleRequest(order); // 從第一個處理者開始

    // 輸出結果
    std::cout << order << std::endl;

    return 0;
}


### 程式解析：
1. **抽象處理者 `CoffeeHandler`**：這是所有具體處理者的基底類別，包含指向下一個處理者的指標 `nextHandler`。該類別的 handleRequest 方法負責將請求傳遞給下一個處理者。
   
2. **具體處理者**：
   - `SugarHandler`：處理加入糖的請求。
   - `MilkHandler`：處理加入奶精的請求。
   - `TemperatureHandler`：處理調整咖啡溫度的請求，這裡的實例設定為「冷咖啡」。

3. **設定職責鍊**：每個處理者都設定了下一個處理者，例如，`SugarHandler` 將請求傳遞給 `MilkHandler`，`MilkHandler` 再傳給 `TemperatureHandler`。

4. **訂單處理流程**：訂單從黑咖啡開始，經過處理者依次添加糖、奶精和調整溫度的步驟。

### 範例輸出：
咖啡訂單：
  - 黑咖啡
  - 加入糖
  - 加入奶精
  - 冷咖啡

你可以根據需要添加更多處理者，或調整訂單的處理流程。這樣的設計便於擴展每個處理步驟。