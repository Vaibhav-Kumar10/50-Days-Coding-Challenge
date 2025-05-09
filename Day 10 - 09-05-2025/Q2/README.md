# 🧩 Day 10 – Q2: Bulb Switcher

**LeetCode Problem:** [319. Bulb Switcher](https://leetcode.com/problems/bulb-switcher)
**Difficulty:** Medium
**Topic:** Math
**Tags:** Number Theory, Bit Manipulation, Brainteaser

---

## 📄 Problem Statement

There are `n` bulbs that are initially off. You first turn on all the bulbs, then you turn off every second bulb.

On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the `iᵗʰ` round, you toggle every `i` bulb. For the `nᵗʰ` round, you only toggle the last bulb.

Return the number of bulbs that are on after ``n` rounds.

---

## 💡 Key Insight

A bulb ends up **on** if it is toggled an **odd** number of times.

Only **perfect squares** have an odd number of divisors → so the answer is the number of perfect squares ≤ `n`.

---

## 🧠 Examples

### Example 1:

![lc-bulbSwitcher](https://assets.leetcode.com/uploads/2020/11/05/bulb.jpg)

Input: n = 3

Output: 1

Explanation: At first, the three bulbs are [off, off, off].
After the first round, the three bulbs are [on, on, on].
After the second round, the three bulbs are [on, off, on].
After the third round, the three bulbs are [on, off, off].
So you should return 1 because there is only one bulb is on.

### Example 2:

Input: n = 0

Output: 0

### Example 3:

Input: n = 1

Output: 1

---

## ✅ Constraints

- `0 <= n <= 10^9`

---

## 📁 File

- [`Q2.cpp`](./Q2.cpp)
