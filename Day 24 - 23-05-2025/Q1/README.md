## 🧩 **Day 24 – Q1: Basic Calculator**

**LeetCode Problem:** [224. Basic Calculator](https://leetcode.com/problems/basic-calculator)
**Difficulty:** Hard
**Topic:** Stack
**Tags:** Math, Stack, String

---

## 📄 Problem Statement

Given a string `s` representing a valid expression, implement a basic calculator to evaluate it, and return _the result of the evaluation_.

> ⚠️ You are **not allowed** to use built-in functions like `eval()`.

**Note:** You are **not** allowed to use any built-in function which evaluates strings as mathematical expressions, such as `eval()`.

---

## 📄 Problem Statement

Given a string containing just the characters `'('` and `')'`, return _the length of the longest valid (well-formed) parentheses substring_.

---

## 🧠 Examples

### Example 1:

Input: s = "1 + 1"

Output: 2

### Example 2:

Input: s = " 2-1 + 2 "

Output: 3

### Example 3:

Input: s = "(1+(4+5+2)-3)+(6+8)"

Output: 23

---

## ✅ Constraints

- `1 <= s.length <= 3 * 10⁵`
- `s` consists of digits, `'+'`, `'-'`, `'('`, `')'`, and `' '`.
- `s` represents a valid expression.
- `'+'` is **not** used as a unary operation (i.e., `"+1"` and `"+(2 + 3)"` is invalid).
- `'-'` could be used as a unary operation (i.e., `"-1"` and `"-(2 + 3)"` is valid).
- There will be no two consecutive operators in the input.
- Every number and running calculation will fit in a signed 32-bit integer.

---

## 📁 File

- [`Q1.cpp`](./Q1.cpp)
