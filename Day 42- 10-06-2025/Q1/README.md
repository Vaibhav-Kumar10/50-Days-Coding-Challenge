## 🌳 **Day 42 – Q1: Validate Binary Search Tree**

**LeetCode Problem:** [98. Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)  
**Difficulty:** Medium  
**Topics:** Tree, DFS, Binary Search Tree  
**Tags:** BST Validation, Inorder Traversal, Recursion

---

## 📄 Problem Statement

Given the `root` of a binary tree, _determine if it is a valid binary search tree (BST)_.

A **valid BST **is defined as:

- The left subtree of a node contains only nodes with keys **less than** the node's key.
- The right subtree of a node contains only nodes with keys **greater than** the node's key.
- Both the left and right subtrees must also be binary search trees.

---

## 🧠 Example

### Example 1:

![validBST-1](https://assets.leetcode.com/uploads/2020/12/01/tree1.jpg)

Input: root = [2,1,3]

Output: true

### Example 2:

![validBST-2](https://assets.leetcode.com/uploads/2020/12/01/tree2.jpg)

Input: root = [5,1,4,null,null,3,6]

Output: false

Explanation: The root node's value is 5 but its right child's value is 4.

---

## ✅ Constraints

- The number of nodes in the tree is in the range `[1, 10⁴]`.
- `-2³¹ <= Node.val <= 2³¹ - 1`

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
