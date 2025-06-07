## 🔁 **Day 39 – Q2: Remove All Adjacent Duplicates In String**

**LeetCode Problem:** [1047. Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/)  
**Difficulty:** Easy  
**Topics:** Stack, String  
**Tags:** Duplicate Removal, Stack-Based Approach

---

## 📄 Problem Statement

You are given a string `s` consisting of lowercase English letters. A **duplicate removal** consists of choosing two **adjacent** and **equal** letters and removing them.

We repeatedly make **duplicate removals** on `s` until we no longer can.

Return the _final string after all such duplicate removals have been made_. It can be proven that the answer is **unique**.

---

## 🧠 Example

### Example 1:

Input: s = "abbaca"

Output: "ca"

Explanation:  
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move. The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

### Example 2:

Input: s = "azxxzy"

Output: "ay"

---

## ✅ Constraints

- `1 <= s.length <= 10^5`
- `s` consists of lowercase English letters.

---

## 📁 File

- [`Q2.cpp`](./Q2.cpp)
