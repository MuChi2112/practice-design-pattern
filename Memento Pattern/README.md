作業規格 (Spec)
留言
設計一個簡單的咖啡訂單系統，允許用戶創建和修改咖啡訂單。系統應該允許用戶撤銷或重做他們的操作。這個系統將使用 Memento Pattern 來保存訂單的狀態，以便用戶可以恢復到之前的狀態。

需求：

咖啡訂單類 (CoffeeOrder): 能夠添加咖啡和修改訂單內容。
Memento 類 (Memento): 保存咖啡訂單的狀態。
Caretaker 類 (Caretaker): 管理 Memento 物件的保存和恢復，以實現撤銷和重做操作。
Interface
cpp
#include <string>
#include <vector>
#include <stack>
#include <memory>

// Memento class to store the state of the CoffeeOrder
class Memento {
public:
explicit Memento(const std::vectorstd::string& order);
std::vectorstd::string getState() const;
};

// CoffeeOrder class that uses Memento to save and restore state
class CoffeeOrder {
public:
void addCoffee(const std::string& coffee); // Adds a coffee to the order
void modifyCoffee(int index, const std::string& newCoffee); // Modifies an existing coffee in the order
void displayOrder() const; // Displays the current coffee order
std::unique_ptr<Memento> save(); // Saves the current state to a Memento
void restore(const std::unique_ptr<Memento>& memento); // Restores the state from a Memento
private:
std::vectorstd::string currentOrder; // Holds the current list of coffee orders
};

// Caretaker class to manage Memento objects for undo and redo operations
class Caretaker {
public:
void saveState(std::unique_ptr<Memento> memento);
std::unique_ptr<Memento> undo();
std::unique_ptr<Memento> redo();
private:
std::stack<std::unique_ptr<Memento>> undoStack;
std::stack<std::unique_ptr<Memento>> redoStack;
};

你的任務
實作 Memento 類: 用來儲存 CoffeeOrder 的狀態（咖啡訂單列表）。
實作 CoffeeOrder 類: 包含可以新增咖啡、修改訂單內容、顯示訂單內容、保存和恢復狀態的功能。
實作 Caretaker 類: 用於管理 Memento 物件，以支持撤銷和重做操作。
提示
CoffeeOrder 需要有一個向量來保存當前的咖啡訂單列表。
每次用戶新增或修改咖啡時，可以創建一個新的 Memento 來保存當前狀態。
Caretaker 使用兩個堆疊（undoStack 和 redoStack）來管理撤銷和重做的狀態。
這樣的設計可以模擬一個咖啡店的訂單系統，並使用 Memento Pattern 來處理撤銷和重做功能。如果有任何問題或需要更多的幫助，請告訴我！