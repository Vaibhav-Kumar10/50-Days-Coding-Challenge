## 🧩 **Day 28 – Q2: Number of Subarrays With LCM Equal to K**

**LeetCode Problem:** [2470. Number of Subarrays With LCM Equal to K](https://leetcode.com/problems/number-of-subarrays-with-lcm-equal-to-k)  
**Difficulty:** Medium  
**Topic:** Array, Math, Number Theory  
**Tags:** Subarrays, LCM, Brute-force Optimization

---

## 📄 Problem Statement

Given an integer array `nums` and an integer `k`, return the number of **subarrays** of `nums` where the least common multiple of the subarray's elements is `k`.

A **subarray** is a contiguous non-empty sequence of elements within an array.

The **least common multiple** of an array is the smallest positive integer that is divisible by all the array elements.

---

## 🧠 Examples

### Example 1:

Input: nums = [3,6,2,7,1], k = 6

Output: 4

Explanation: The subarrays of nums where 6 is the least common multiple of all the subarray's elements are: 
- [3,6,2,7,1]
- [3,6,2,7,1]
- [3,6,2,7,1]
- [3,6,2,7,1]

### Example 2:

Input: nums = [3], k = 2

Output: 0

Explanation: There are no subarrays of nums where 2 is the least common multiple of all the subarray's elements.

---

## ✅ Constraints

- `1 <= nums.length <= 1000`
- `1 <= nums[i], k <= 1000`

---

## 📁 File

- [`Q2.cpp`](./Q2.cpp)
