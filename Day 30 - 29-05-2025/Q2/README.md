## 🧩 **Day 30 – Q2 : Find the Duplicate Number**

**LeetCode Problem:** [287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)  
**Difficulty:** Medium  
**Topics:** Two Pointers, Binary Search, Bit Manipulation, Floyd's Cycle Detection  
**Tags:** Arrays, Fast and Slow Pointers, Floyd’s Tortoise and Hare, Cycle Detection, Constant Space, Brute-force Optimization, Repeated Elements

---

## 📄 Problem Statement

Given an array of integers `nums` containing `n + 1` integers where each integer is in the range `[1, n]` inclusive.

There is only **one repeated number** in `nums`, return _this repeated number_.

You must solve the problem **without** modifying the array `nums` and using only constant extra space.

---

## 🧠 Examples

### Example 1:

Input: nums = [1,3,4,2,2]

Output: 2

### Example 2:

Input: nums = [3,1,3,4,2]

Output: 3

### Example 3:

Input: nums = [3,3,3,3,3]

Output: 3

---

## ✅ Constraints

- `1 <= n <= 10⁵`
- `nums.length == n + 1`
- `1 <= nums[i] <= n`
- All the integers in `nums` appear only **once** except for **precisely one integer** which appears **two or more times**.

---

## 📁 File

- [`Q2.cpp`](./Q2.cpp)
