## 🧩 **Day 25 – Q2: Rotate Array**

**LeetCode Problem:** [189. Rotate Array](https://leetcode.com/problems/rotate-array)  
**Difficulty:** Medium  
**Topic:** Array, Two Pointers, In-Place  
**Tags:** Array, Simulation, Math

---

## 📄 Problem Statement

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

---

## 🧠 Examples

### Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3  
Output: [5,6,7,1,2,3,4]  
Explanation:  
rotate 1 steps to the right: [7,1,2,3,4,5,6]  
rotate 2 steps to the right: [6,7,1,2,3,4,5]  
rotate 3 steps to the right: [5,6,7,1,2,3,4]

### Example 2:

Input: nums = [-1,-100,3,99], k = 2  
Output: [3,99,-1,-100]  
Explanation:  
rotate 1 steps to the right: [99,-1,-100,3]  
rotate 2 steps to the right: [3,99,-1,-100]

---

## ✅ Constraints

- `1 <= nums.length <= 10⁵`
- `-2³¹ <= nums[i] <= 2³¹ - 1`
- `0 <= k <= 10⁵`

---

## 📁 File

- [`Q2.cpp`](./Q2.cpp)
