# Cook's Theorem

## Definition

**Cook's Theorem** (also called the **Cook–Levin Theorem**) states that the **Boolean Satisfiability (SAT) Problem** is **NP-Complete**. It was proved by **Stephen Cook** in **1971** and was the first theorem to establish the existence of an NP-Complete problem.

---

## Statement of Cook's Theorem

**Cook's Theorem states that:**

> **The Boolean Satisfiability (SAT) Problem is NP-Complete.**

This means:

1. **SAT belongs to NP**, because a given truth assignment can be verified in polynomial time.
2. **Every problem in NP can be polynomially reduced to SAT.**

Therefore, SAT is **NP-Complete**.

---

## Explanation

### Step 1: SAT belongs to NP

Given a Boolean formula and a truth assignment (values of True or False for variables), we can evaluate the formula in **polynomial time** to verify whether it is satisfied.

Hence,

**SAT ∈ NP**

---

### Step 2: Every NP Problem can be Reduced to SAT

Cook proved that any problem that belongs to **NP** can be transformed into an equivalent SAT problem using a **polynomial-time reduction**.

This means:

- If we can solve SAT efficiently,
- Then we can solve every NP problem efficiently.

---

### Step 3: Therefore, SAT is NP-Complete

Since:

- SAT belongs to NP, and
- Every NP problem reduces to SAT,

SAT satisfies both conditions required for an NP-Complete problem.

Hence,

**SAT is NP-Complete.**

---

## Significance of Cook's Theorem

- It was the **first NP-Complete problem** to be discovered.
- It laid the foundation for the theory of **NP-Completeness**.
- It provides a method to prove that many other problems are NP-Complete by reducing SAT to them.
- It plays a fundamental role in Computational Complexity Theory.

---

## Applications

- Computational Complexity Theory
- Algorithm Design
- Artificial Intelligence
- Circuit Design
- Logic Verification
- Scheduling Problems
- Optimization Problems

---

## Time Complexity

Cook's Theorem itself is a **mathematical theorem**, not an algorithm, so it **does not have a time complexity**.

However, the theorem states that the reduction from any NP problem to SAT can be performed in **polynomial time**.

---

## Key Points

- Proposed by **Stephen Cook** in **1971**.
- Also known as the **Cook–Levin Theorem**.
- Proves that **SAT is NP-Complete**.
- SAT belongs to **NP**.
- Every NP problem can be reduced to SAT in **polynomial time**.
- It was the **first NP-Complete problem**.
- Forms the foundation of **NP-Completeness Theory**.
- Used to prove many other problems are NP-Complete through polynomial-time reductions.

---

## Exam Tip

- **Common Viva Question:** Why is Cook's Theorem important?
  - **Answer:** Because it proved that **SAT is the first NP-Complete problem**, making it possible to prove many other problems are NP-Complete using **polynomial-time reductions**.

- **Common Mistake:** Do **not** say that Cook's Theorem proves **P = NP**. It only proves that **SAT is NP-Complete**. The question of whether **P = NP** remains an **unsolved problem**.
