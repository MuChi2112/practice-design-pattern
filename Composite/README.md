作業目的
留言
這個作業的目的是讓你理解並應用 Composite 設計模式，這是一種結構型設計模式。Composite 設計模式允許你將物件組合成樹狀結構來表示「部分-整體」的層次結構。這樣的設計使得客戶端（使用者）對單個物件和物件組合的使用具有一致性。換句話說，無論你處理的是單一物件還是由多個物件組成的複合物件，你都可以使用相同的方式與它們互動。

作業的需求
作業要求是設計一個咖啡訂單系統，這個系統應該能夠表示以下兩種情況：

單一咖啡訂單：這代表一杯單獨的咖啡，例如 Espresso 或 Cappuccino。
複合咖啡訂單：這代表一組咖啡訂單的組合，例如一張包含兩杯 Espresso 和一杯 Cappuccino 的訂單。
介面設計概述
為了滿足上述需求，我們使用了三個主要的類別：

CoffeeComponent：這是基礎介面（基類），用於定義咖啡訂單的共同介面。它具有兩個純虛函數 show() 和 getCost()：

show()：顯示咖啡訂單的名稱和成本。
getCost()：返回咖啡的成本。
CoffeeLeaf：這個類別代表單一的咖啡訂單項目（Leaf 元件）。它繼承自 CoffeeComponent 並實現了其介面：

name：表示咖啡的名稱（例如 Espresso 或 Cappuccino）。
cost：表示這杯咖啡的價格。
show() 和 getCost()：實現顯示名稱和價格以及返回價格的功能。
CoffeeComposite：這個類別代表一組咖啡訂單的組合（Composite 元件）。它也繼承自 CoffeeComponent 並實現了其介面：

components：這是一個容器（通常是向量）用於存儲多個 CoffeeComponent 子項目（這些子項目可以是 CoffeeLeaf 或 CoffeeComposite，實現遞歸的複合結構）。
addComponent() 和 removeComponent()：這些方法用於向複合訂單中添加或移除子項目。
show() 和 getCost()：這些方法遞歸地調用所有子項目的相應方法，從而顯示所有子訂單項目並計算其總成本。
詳細步驟說明
定義介面 CoffeeComponent：

這個介面提供了所有咖啡訂單（無論是單一還是複合）的共同操作。任何類別，只要想成為咖啡訂單的一部分，都必須實現這個介面。
實現 CoffeeLeaf 類別：

這個類別代表單一咖啡。它需要有自己的名稱（name）和成本（cost），並且它實現了 show() 和 getCost() 方法來顯示和計算自己的信息。
實現 CoffeeComposite 類別：

這個類別用於組合多個咖啡訂單，可以是單一咖啡（CoffeeLeaf）或者是其他複合訂單（CoffeeComposite）。這個類別內部維護了一個子項目列表（components），並提供方法來添加或移除這些子項目。
在實現 show() 和 getCost() 方法時，CoffeeComposite 會迭代所有的子項目並調用它們各自的 show() 和 getCost() 方法，這樣就實現了遞歸的效果。