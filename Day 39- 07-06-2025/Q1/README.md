## 🌲 **Day 39 – Q41: Insert into a Binary Search Tree**

**LeetCode Problem:** [701. Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree/)  
**Difficulty:** Medium  
**Topics:** Tree, Binary Search Tree, Recursion  
**Tags:** BST Insertion, Tree Traversal

---

## 📄 Problem Statement

You are given the `root` node of a Binary Search Tree (BST) and a `value` to insert into the tree. Return _the root node of the BST after the insertion_. It is **guaranteed** that the new value does not exist in the original BST.

**Notice** that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return **any of them**.

---

## 🧠 Example

### Example 1:

![insertBST-1](https://assets.leetcode.com/uploads/2020/10/05/insertbst.jpg)
Input: root = [4,2,7,1,3], val = 5

Output: [4,2,7,1,3,5]

Explanation: Another accepted tree is:
![insertBST-2](https://assets.leetcode.com/uploads/2020/10/05/bst.jpg)

### Example 2:

Input: root = [40,20,60,10,30,50,70], val = 25

Output: [40,20,60,10,30,50,70,null,null,25]

### Example 3:

Input: root = [4,2,7,1,3,null,null,null,null,null,null], val = 5

Output: [4,2,7,1,3,5]

---

## ✅ Constraints

- The number of nodes in the tree will be in the range `[0, 10^4]`.
- `-10^8 <= Node.val <= 10^8`
- All the values `Node.val` are **unique**.
- `-10^8 <= val <= 10^8`
- It is **guaranteed** that `val` does not exist in the original BST.

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
