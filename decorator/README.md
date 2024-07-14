## 題目描述

設計一個咖啡訂購系統，可以根據不同的配料計算最終價格。系統應該能夠靈活地添加新的配料而不影響現有代碼的設計。具體要求如下：

1. **咖啡種類**：
    - 美式咖啡（Americano）：5 美元
    - 拿鐵（Latte）：6 美元

2. **配料**：
    - 牛奶（Milk）：1 美元
    - 糖（Sugar）：0.5 美元
    - 香草（Vanilla）：1.5 美元

3. **需求**：
    - 設計一個咖啡類，包含基本價格屬性和描述屬性。
    - 設計一個裝飾模式來計算最終價格，根據不同的配料應用不同的價格增量。
    - 能夠靈活地添加新的配料，而不需要修改咖啡類的代碼。

## 示例

假設有一杯美式咖啡，添加了牛奶和糖：

- 基本價格為 5 美元。
- 添加牛奶後，價格為 6 美元。
- 添加糖後，價格為 6.5 美元。

最終價格應為 6.5 美元。

## 答案要求

請用你熟悉的編程語言實現上述需求，並給出以下部分：

1. 咖啡類(Coffee)的實現
2. 裝飾者接口（Decorator）及其具體實現類
3. 一個客戶端代碼示例，展示如何使用裝飾模式計算最終價格

## 提示

裝飾模式主要包含三個部分：

1. **組件接口（Component Interface）**：定義所有組件的公共接口。
2. **具體組件類（Concrete Component Class）**：實現組件接口的具體類別。
3. **裝飾者類（Decorator Class）**：實現組件接口並包含一個組件對象的類別，可以動態地添加行為（如價格增量）。

你可以通過這個模式靈活地在不同的配料之間組合，而不需要修改具體組件類的代碼。