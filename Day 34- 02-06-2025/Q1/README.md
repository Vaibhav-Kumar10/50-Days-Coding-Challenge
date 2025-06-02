## 🌳 **Day 34 – Q1: Flatten Binary Tree to Linked List**

**LeetCode Problem:** [114. Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)  
**Difficulty:** Medium  
**Topics:** Tree, DFS, Linked List  
**Tags:** Preorder Traversal, Tree Manipulation

---

## 📄 Problem Statement

Given the `root` of a binary tree, flatten the tree into a "linked list":

- The "linked list" should use the same `TreeNode` class where the `right` child pointer points to the next node in the list and the `left` child pointer is always `null`.
- The "linked list" should be in the same order as a pre-order traversal of the binary tree.

---

## 🧠 Example

### Example 1:

![flatten](https://assets.leetcode.com/uploads/2021/01/14/flaten.jpg)

Input: root = [1,2,5,3,4,null,6]

Output: [1,null,2,null,3,null,4,null,5,null,6]

### Example 2:

Input: root = []

Output: []

### Example 3:

Input: root = [0]

Output: [0]

---

## ✅ Constraints

- The number of nodes in the tree is in the range `[0, 2000]`.
- `-100 <= Node.val <= 100`

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
