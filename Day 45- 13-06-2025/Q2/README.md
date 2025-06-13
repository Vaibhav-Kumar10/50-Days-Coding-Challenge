## 🔄 **Day 43 – Q4: Greatest Common Divisor of Strings**

**LeetCode Problem:** [1071. Greatest Common Divisor of Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/)  
**Difficulty:** Easy  
**Topics:** String  
**Tags:** GCD, String Division, Pattern Matching  

---

## 📄 Problem Statement

For two strings `str1` and `str2`, we say "`t` divides `s`" if and only if `s = t + t + ... + t` (i.e., `t` is concatenated with itself one or more times to form `s`).

Given two strings `str1` and `str2`, return *the largest string `x` such that `x` divides both `str1` and `str2`.*

---

## 🧠 Example

### Example 1:

Input: str1 = "ABCABC", str2 = "ABC"

Output: "ABC"

### Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"

Output: "AB"

### Example 3:

Input: str1 = "LEET", str2 = "CODE"

Output: ""

---

## ✅ Constraints

- `1 <= str1.length, str2.length <= 1000`
- `str1` and `str2` consist of English uppercase letters.

---

## 📁 File

- [`Q2.cpp`](./Q2.cpp)
