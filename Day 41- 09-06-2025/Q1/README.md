## 🌳 **Day 41 – Q1: Delete Node in a BST**

**LeetCode Problem:** [450. Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/)  
**Difficulty:** Medium  
**Topics:** Tree, BST  
**Tags:** Deletion, Binary Search Tree, Inorder Successor

---

## 📄 Problem Statement

Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return _the **root node reference** (possibly updated) of the BST_.

The deletion consists of two steps:

1. Search for a node to remove.
2. If the node is found, delete it.

---

## 🧠 Example

### Example 1:

![delBST-1](https://assets.leetcode.com/uploads/2020/09/04/del_node_1.jpg)

Input: root = [5,3,6,2,4,null,7], key = 3

Output: [5,4,6,2,null,null,7]

Explanation: Given key to delete is 3. So we find the node with value 3 and delete it.  
One valid answer is [5,4,6,2,null,null,7], shown in the above BST.  
Please notice that another valid answer is [5,2,6,null,4,null,7] and it's also accepted.

![delBST-2](https://assets.leetcode.com/uploads/2020/09/04/del_node_supp.jpg)

### Example 2:

Input: root = [5,3,6,2,4,null,7], key = 0

Output: [5,3,6,2,4,null,7]

Explanation: The tree does not contain a node with value = 0.

### Example 3:

Input: root = [], key = 0

Output: []

---

## ✅ Constraints

- The number of nodes in the tree is in the range `[0, 10⁴]`.
- `-10⁵ <= Node.val <= 10⁵`
- Each node has a unique value.
- `root` is a valid binary search tree.
- `-10⁵ <= key <= 10⁵`

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
