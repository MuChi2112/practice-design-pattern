# 原型模式 Prototype

### 題目：設計一個咖啡店管理系統，使用原型模式來創建不同種類的咖啡飲料

#### 需求描述：

1. **飲料基類**：
   - 定義一個基類 `Beverage`，包含一個純虛函數 `clone`，用於克隆對象。
   - 包含飲料的基本屬性（如名稱、價格等）和一個虛函數 display 用於顯示飲料信息。

2. **具體飲料類**：
   - 創建兩個具體飲料類 Coffee 和 `Tea`，分別繼承自 `Beverage`，並實現 clone 和 display 方法。
   - Coffee 包含咖啡的強度屬性，`Tea` 包含茶的類型屬性。

3. **飲料管理類**：
   - 設計一個飲料管理類 `BeverageManager`，包含一個用於存儲飲料原型對象的容器和一個方法 `createClone`，通過該方法可以根據飲料類型創建相應的副本。

4. **主函數**：
   - 在主函數中，創建幾個具體飲料對象並添加到飲料管理類中。
   - 使用飲料管理類的方法創建這些飲料的副本，並調用 display 方法顯示它們。

### 解釋：
 
1. **Beverage**：基類，包含純虛函數 clone 和 `display`。
2. **Coffee** 和 **Tea**：具體飲料類，分別實現 clone 和 display 方法。
3. **BeverageManager**：飲料管理類，負責存儲飲料原型並創建副本。
4. **main**：主函數中創建具體飲料原型並添加到管理類中，然後創建副本並顯示。

這個題目通過設計一個咖啡店管理系統，展示了原型模式如何應用於創建不同類型的對象副本，並減少對象創建的成本。