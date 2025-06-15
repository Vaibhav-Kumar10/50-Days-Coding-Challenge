## 🔄 **Day 47 – Q1: Number of Substrings Containing All Three Characters**

**LeetCode Problem:** [1358. Number of Substrings Containing All Three Characters](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/)  
**Difficulty:** Medium   
**Topics:** Hash Table, String, Sliding Window   
**Tags:** Substrings, Sliding Window, Count Occurrences   

---

## 📄 Problem Statement

Given a string `s` consisting only of characters 'a', 'b', and 'c'.  
Return the number of substrings containing **at least** one occurrence of all these characters _a, b and c._

---

## 🧠 Example

### Example 1:

Input: s = "abcabc"

Output: 10

Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again).

### Example 2:

Input: s = "aaacb"

Output: 3

Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb".

### Example 3:

Input: s = "abc"

Output: 1

---

## ✅ Constraints

- `3 <= s.length <= 5 × 10⁴`
- `s` only consists of characters *'a'*, *'b'*, or *'c'* characters.

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
