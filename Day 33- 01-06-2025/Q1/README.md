## 🌳 **Day 33 – Q1: Binary Tree Right Side View**

**LeetCode Problem:** [199. Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)  
**Difficulty:** Medium  
**Topics:** Tree, BFS, DFS  
**Tags:** Level Order Traversal, Rightmost Node

---

## 📄 Problem Statement

Given the `root` of a binary tree, imagine yourself standing on the **right side** of it, return _the values of the nodes you can see ordered from top to bottom_.

---

## 🧠 Example

### Example 1:

Input: root = [1,2,3,null,5,null,4]

Output: [1,3,4]

Explanation:

![rightView-1](https://assets.leetcode.com/uploads/2024/11/24/tmpd5jn43fs-1.png)

### Example 2:

Input: root = [1,2,3,4,null,null,null,5]

Output: [1,3,4,5]

Explanation:

![rightView-2](https://assets.leetcode.com/uploads/2024/11/24/tmpkpe40xeh-1.png)

### Example 3:

Input: root = [1,null,3]

Output: [1,3]

### Example 4:

Input: root = []

Output: []

---

## ✅ Constraints

- `0 <= number of nodes <= 100`
- `-100 <= Node.val <= 100`

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
