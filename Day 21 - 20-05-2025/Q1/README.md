## 🧩 **Day 21 – Q1: Valid Parenthesis String**

**LeetCode Problem:** [678. Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string)  
**Difficulty:** Medium  
**Topic:** Greedy  
**Tags:** String, Stack, Greedy, Dynamic Programming

---

## 📄 Problem Statement

Given a string `s` containing only three types of characters: `'('`, `')'` and `'\*'`, return `true` if `s` is valid.

The following rules define a **valid** string:

- Any left parenthesis `'('` must have a corresponding right parenthesis `')'`.
- Any right parenthesis `')'` must have a corresponding left parenthesis `'('`.
- Left parenthesis `'('` must go before the corresponding right parenthesis `')'`.
- `'*'` could be treated as a single right parenthesis `')'` or a single left parenthesis `'('` or an empty string `""`.

---

## 🧠 Examples

### Example 1:

Input: s = "()"

Output: true

### Example 2:

Input: s = "(*)"

Output: true

### Example 3:

Input: s = "(*))"

Output: true

---

## ✅ Constraints

- `1 <= s.length <= 100`
- `s[i]` is `'('`, `')'` or `'*'`.

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
