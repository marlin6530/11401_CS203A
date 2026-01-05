# 資料結構課程筆記總覽

這份筆記是我在「資料結構」這門課的學習整理，主要針對常見核心資料結構  
array、linked list、stack、queue、hash table、tree、graph，以及它們之間的比較。  

---

## 檔案結構

| 檔名 | 主題 | 摘要 |
|------|------|------|
| `01-array.md` | Array（陣列） | 連續記憶體、O(1) 存取，使用 `int[]` / `vector<int>`，例子包含成績表與簡單統計。 |
| `02-linked-list.md` | Linked List（鏈結串列） | 非連續記憶體，由節點與指標構成，支援 O(1) 插入刪除，例子包括瀏覽歷史、Undo/Redo。 |
| `03-array-vs-linked-list.md` | 陣列 vs 鏈結串列 | 從時間複雜度、記憶體與實務情境比較兩者，並提供簡單選擇決策建議。 |
| `04-stack-queue.md` | Stack & Queue | 介紹 LIFO / FIFO，使用 `vector`、`stack`、`queue`/`deque` 實作括號匹配、列印佇列等。 |
| `05-hash-table.md` | Hash Table（雜湊表） | 說明雜湊函數、碰撞處理（線性探測、鏈結法），並用 `unordered_map` 實作學生系統、詞頻統計等。 |
| `06-tree.md` | Tree（樹） | 以二元搜尋樹（BST）為主，說明插入、搜尋、遍歷（前中後序），以及檔案系統、表達式樹等應用。 |
| `07-graph.md` | Graph（圖） | 以鄰接表表示圖，實作 BFS、DFS、BFS 最短路、Dijkstra，加上社交網路與路線規劃案例。 |
| `08-tree-vs-graph.md` | 樹 vs 圖 | 比較兩者的結構特性、適用場景與演算法，說明什麼問題適合用樹、什麼問題適合用圖。 |

---

## 每篇筆記的閱讀建議順序

1. **先看線性結構**  
   建議依序閱讀：`01-array.md` → `02-linked-list.md` → `03-array-vs-linked-list.md` → `04-stack-queue.md`。  
   這幾篇涵蓋所有之後資料結構會用到的基本技巧（指標、動態記憶體、STL 容器）。

2. **再看雜湊與樹**  
   之後看：`05-hash-table.md` → `06-tree.md`。  
   - Hash Table 會頻繁出現在演算法題（查詢、去重、計數）。  
   - Tree 是很多高階資料結構的基礎（BST、Heap、Segment Tree、Fenwick Tree、B-Tree）。

3. **最後看圖相關**  
   最後閱讀：`07-graph.md` → `08-tree-vs-graph.md`。  
   - 先習慣鄰接表、BFS/DFS，再理解 Dijkstra。  
   - `08-tree-vs-graph.md` 比較偏概念性整理，適合複習時看。

---

## C++ 技術點總整理

這套筆記大致用到以下 C++ 技術：

- 基本型態與 STL 容器：`vector`, `queue`, `stack`, `deque`, `unordered_map`
- 自訂結構與 class：`struct Node`, `class LinkedList`, `class Graph`, `class BST` 等
- 指標與動態配置：`new` / `delete` 操作鏈結串列與樹節點
- 遞迴：樹的前中後序遍歷、DFS
- 標準演算法：Dijkstra（priority_queue）、線性搜尋、簡單排序與迭代

---

## 實務對應（跟自己興趣的 mapping）

- **影像 / 影片處理**：  
  - `array` / `vector` 表示像素、frame 序列  
  - `linked list` 可以表示可插拔的 frame 流程（剪輯、插入片段）

- **網路與通訊**：  
  - `queue` 表示封包佇列  
  - `hash table` 實作 IP 對應、連線表  
  - `graph` 表示路由拓樸 / AS 拓樸

- **競程與演算法題**：  
  - `stack` 用於括號檢查、表達式求值  
  - `hash table` 用於 O(1) 查詢 / 去重  
  - `tree` + `graph` 是 DFS / BFS / 最短路徑的基本工具

---

## 之後可以延伸的主題

- 在 `tree` 基礎上加上 **平衡操作** → AVL / Red-Black Tree  
- 在 `graph` 上實作：  
  - 拓樸排序（已在任務排程例子中提到）  
  - 最小生成樹（Kruskal / Prim）  
- 在 `hash table` 加入 **rehash** 與負載因子控制  
- 使用 template 將各資料結構泛型化，方便重複使用

這份 `reader.md` 可以當作整份筆記的**目錄與導覽**，之後如果你在課堂或刷題中補充新的資料結構（像 heap、Trie、Segment Tree），也可以把新檔案名稱與摘要加到上面的表格裡，維持同一套風格。
