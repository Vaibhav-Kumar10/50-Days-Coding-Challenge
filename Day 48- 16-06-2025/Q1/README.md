## 🔄 **Day 46 – Q1: Check If It Is a Good Array**

**LeetCode Problem:** [1250. Check If It Is a Good Array](https://leetcode.com/problems/check-if-it-is-a-good-array/)  
**Difficulty:** Hard  
**Topics:** Math, Number Theory  
**Tags:** GCD, Bézout's Identity, Subset Sum

---

## 📄 Problem Statement

Given an array `nums` of positive integers. Your task is to select some subset of `nums`, multiply each element by an integer, and add all these numbers. The array is said to be **good** if you can obtain a sum of **1** from the array using any possible subset and integer multipliers.

Return `true` if the array is **good**, otherwise return `false`.

---

## 🧠 Example

### Example 1:

Input: nums = \[12,5,7,23]  
Output: true  
Explanation: Pick numbers 5 and 7.  
5×3 + 7×(−2) = 1

### Example 2:

Input: nums = \[29,6,10]  
Output: true  
Explanation: 29×1 + 6×(−3) + 10×(−1) = 1

### Example 3:

Input: nums = \[3,6]  
Output: false

---

## ✅ Constraints

- `1 <= nums.length <= 10⁵`
- `1 <= nums[i] <= 10⁹`

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
