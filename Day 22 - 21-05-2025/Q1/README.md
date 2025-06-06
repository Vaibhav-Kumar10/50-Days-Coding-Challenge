## 🧩 **Day 22 – Q1: Minimum Remove to Make Valid Parentheses**

**LeetCode Problem:** [1249. Minimum Remove to Make Valid Parentheses](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses)  
**Difficulty:** Medium  
**Topic:** String, Stack  
**Tags:** Stack, String, Greedy

---

## 📄 Problem Statement

Given a string `s` of `'('` , `')'` and lowercase English characters.

Your task is to remove the minimum number of parentheses ( `'('` or `')'`, in any positions ) so that the resulting _parentheses string_ is valid and return **any** valid string.

Formally, a _parentheses string_ is valid if and only if:

- It is the empty string, contains only lowercase characters, or
- It can be written as `AB` (`A` concatenated with `B`), where `A` and `B` are valid strings, or
- It can be written as `(A)`, where `A` is a valid string.

---

## 🧠 Examples

### Example 1:

Input: s = "lee(t(c)o)de)"  
Output: "lee(t(c)o)de"  
Explanation: "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.

### Example 2:

Input: s = "a)b(c)d"  
Output: "ab(c)d"

Example 3:

Input: s = "))(("  
Output: ""  
Explanation: An empty string is also valid.

---

## ✅ Constraints

- `1 <= s.length <= 10⁵`
- `s[i]` is either `'('`, `')'`, or lowercase English letter.

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
