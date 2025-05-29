## 🧩 **Day 30 – Q1: Diameter of Binary Tree**

**LeetCode Problem:** [543. Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)  
**Difficulty:** Easy  
**Topics:** Tree, Depth-First Search, Binary Tree  
**Tags:** Recursion, DFS, Longest Path, Tree Diameter

---

## 📄 Problem Statement

Given the `root` of a binary tree, return the length of the **diameter** of the tree.

The **diameter** of a binary tree is the **length** of the longest path between any two nodes in a tree. This path may or may not pass through the `root`.

The **length** of a path between two nodes is represented by the number of edges between them.

---

## 🧠 Example

### Example 1:

![maxDiameter](https://assets.leetcode.com/uploads/2021/03/06/diamtree.jpg)

Input: root = [1,2,3,4,5]

Output: 3

Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].

### Example 2:

Input: root = [1,2]

Output: 1

---

## ✅ Constraints

- The number of nodes in the tree is in the range `[1, 10⁴]`.
- `-100 <= Node.val <= 100`

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
