# Weird Algorithm — CSES Problem Set

This folder contains the solution to the **"Weird Algorithm"** problem from the [CSES Problem Set](https://cses.fi/problemset/task/1068/). It is a simple simulation problem based on the Collatz conjecture.

---

## 🧩 Problem Statement

Consider an algorithm that takes as input a positive integer `n`. If `n` is even, the algorithm divides it by two, and if `n` is odd, it multiplies it by three and adds one. The algorithm repeats this until `n` becomes `1`.

Your task is to simulate the algorithm and print all values of `n` during the process.

---

### Input

- A single integer `n` (`1 ≤ n ≤ 10^6`)

---

### Output

- A sequence of integers ending with `1`.

---

## 🚀 Approach

The logic follows directly from the problem description:

- If `n` is even → `n = n / 2`
- If `n` is odd → `n = 3 * n + 1`
- Repeat until `n == 1`

This is a direct simulation problem and can be solved with a `while` loop.

---

## 🛠️ Time and Space Complexity

- **Time Complexity**: `O(log n)` in practice (though the sequence length isn't bounded in theory).
- **Space Complexity**: `O(1)` (if printing directly).

---

## 💻 Language Used

- C++

---

## 📚 Tags

`implementation` `simulation` `collatz` `cses`

---

## 🧑‍💻 Author

**Prakhar Patel**

---

## 🔗 CSES Problem Link

[CSES - Weird Algorithm](https://cses.fi/problemset/task/1068/)
