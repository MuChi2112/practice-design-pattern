### 題目說明

請實作一個單例模式的 CoffeeMachine 類別。這個類別應該能夠：

1. 確保在整個應用程式中只有一個 CoffeeMachine 實例。
2. 允許設定咖啡的類型（如 "Espresso", "Latte" 等）。
3. 提供一個方法來製作指定類型的咖啡。

**注意**：需要使用單例模式來實作這個類別，並確保只有一個實例可以被創建和使用。

### 範例程式碼

以下是 main 函數的實作，你需要補充 CoffeeMachine 類別的內容：

cpp
#include <iostream>
#include <string>

// CoffeeMachine 類別的完整實作（隱藏）

int main() {
    // 獲取唯一的 CoffeeMachine 實例
    CoffeeMachine* machine = CoffeeMachine::getInstance();

    // 設定咖啡類型並製作咖啡
    machine->setCoffeeType("Latte");
    machine->makeCoffee();

    // 再次嘗試獲取實例，應該是相同的實例
    CoffeeMachine* anotherMachine = CoffeeMachine::getInstance();
    anotherMachine->makeCoffee();  // 這應該還是 "Latte"

    return 0;
}

### 提示

- 請記得將 CoffeeMachine 類別的建構子設為私有，防止直接創建新實例。
- 使用靜態成員變數來保存唯一的 CoffeeMachine 實例。
- 提供一個公有的靜態方法 getInstance 來訪問唯一的 CoffeeMachine 實例。