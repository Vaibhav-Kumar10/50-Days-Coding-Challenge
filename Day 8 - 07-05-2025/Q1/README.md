# 🧩 Day 8 – Q1: Odd Even Linked List

**LeetCode Problem:** [328. Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list)  
**Difficulty:** Medium  
**Topic:** Linked List  
**Tags:** Two Pointers, Data Structures, In-Place Reordering

---

## 📄 Problem Statement

Given the `head` of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in `O(1)` extra space complexity and `O(n)` time complexity.

---

## 🧠 Examples

### Example 1:

![lc-evnOddList-1](https://assets.leetcode.com/uploads/2021/03/10/oddeven-linked-list.jpg)  
Input: head = [1,2,3,4,5]

Output: [1,3,5,2,4]

### Example 2:

![lc-evnOddList-1](https://assets.leetcode.com/uploads/2021/03/10/oddeven2-linked-list.jpg)  
Input: head = [2,1,3,5,6,4,7]

Output: [2,3,6,7,1,5,4]

---

## ✅ Constraints

- The number of nodes in the list is in the range `[0, 10^4]`.
- `-10^6 <= Node.val <= 10^6`

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
