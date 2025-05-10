# 🧩 Day 11 – Q1: Remove Nth Node From End of List

**LeetCode Problem:** [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list)  
**Difficulty:** Medium  
**Topic:** Linked List  
**Tags:** Two Pointers, Linked List, One-pass Algorithm

---

## 📄 Problem Statement

Given the `head` of a singly linked list, remove the `nᵗʰ` node from the end of the list and return its head.

---

## 🧠 Examples

### Example 1:

![lc-removeNEnd-1](https://assets.leetcode.com/uploads/2020/10/03/remove_ex1.jpg)

Input: head = [1,2,3,4,5], n = 2

Output: [1,2,3,5]

### Example 2:

Input: head = [1], n = 1

Output: []

### Example 3:

Input: head = [1,2], n = 1

Output: [1]

---

## ✅ Constraints

- The number of nodes in the list is `sz`.
- `1 <= sz <= 30`
- `0 <= Node.val <= 100`
- `1 <= n <= sz`

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
