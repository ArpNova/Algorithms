# P, NP, NP-Hard and NP-Complete Problems

## Definition

The classes **P, NP, NP-Hard, and NP-Complete** are used in **Computational Complexity Theory** to classify problems based on the time required to solve or verify them. They help determine whether a problem can be solved efficiently and understand the relationships among different computational problems.

---

# P (Polynomial Time)

## Definition

A problem belongs to the **P** class if it can be **solved** by a deterministic algorithm in **polynomial time**, i.e., its running time is of the form **O(nᵏ)**, where **k** is a constant.

### Characteristics

- Problems can be solved efficiently.
- Solutions are obtained in polynomial time.
- Every problem in **P** is also in **NP**.

### Examples

- Linear Search
- Binary Search
- Merge Sort
- Heap Sort
- Breadth First Search (BFS)
- Depth First Search (DFS)
- Dijkstra's Algorithm
- Prim's Algorithm
- Kruskal's Algorithm

---

# NP (Non-deterministic Polynomial Time)

## Definition

A problem belongs to the **NP** class if a proposed solution can be **verified** in polynomial time, even though finding the solution may not be possible in polynomial time.

### Characteristics

- Solution may be difficult to find.
- Solution can be verified quickly.
- It is not known whether every NP problem can be solved in polynomial time.

### Examples

- Travelling Salesman Problem (Decision Version)
- Hamiltonian Cycle
- Clique Problem
- Vertex Cover (Decision Version)
- Subset Sum (Decision Version)

---

# NP-Hard

## Definition

A problem is **NP-Hard** if it is **at least as difficult as every problem in NP**. An NP-Hard problem **does not have to belong to NP**, which means its solution may not even be verifiable in polynomial time.

### Characteristics

- At least as hard as every NP problem.
- May not have a polynomial-time verification algorithm.
- May not even be a decision problem.

### Examples

- Travelling Salesman Problem (Optimization Version)
- Halting Problem
- Job Shop Scheduling (Optimization)
- Knapsack Optimization Problem

---

# NP-Complete

## Definition

A problem is **NP-Complete** if:

1. It belongs to **NP**.
2. It is also **NP-Hard**.

Thus, NP-Complete problems are the **hardest problems in NP**. If any one NP-Complete problem is solved in polynomial time, then **every problem in NP can also be solved in polynomial time**.

### Characteristics

- Belongs to NP.
- Also NP-Hard.
- Solution can be verified in polynomial time.
- No polynomial-time algorithm is currently known.

### Examples

- Boolean Satisfiability (SAT)
- 3-SAT
- Hamiltonian Cycle
- Graph Coloring (Decision Version)
- Vertex Cover (Decision Version)
- Clique Problem
- Subset Sum (Decision Version)

---

## Relationship among P, NP, NP-Hard and NP-Complete

```text
                    NP-Hard
                 ┌─────────────────┐
                 │                 │
                 │   NP-Complete   │
                 │  ┌───────────┐  │
                 │  │    NP     │  │
                 │  │ ┌───────┐ │  │
                 │  │ │   P   │ │  │
                 │  │ └───────┘ │  │
                 │  └───────────┘  │
                 └─────────────────┘
```

### Relationship

- **P ⊆ NP**
- **NP-Complete = NP ∩ NP-Hard**
- **Every NP-Complete problem is NP-Hard.**
- **Not every NP-Hard problem is NP-Complete.**

---

## Comparison Table

| Feature | P | NP | NP-Hard | NP-Complete |
|---------|---|----|---------|-------------|
| Can be solved in polynomial time | ✔ | Not known | Not known | Not known |
| Solution can be verified in polynomial time | ✔ | ✔ | Not necessary | ✔ |
| Belongs to NP | ✔ | ✔ | ✘ (not always) | ✔ |
| At least as hard as every NP problem | ✘ | ✘ | ✔ | ✔ |
| Decision problem | Usually | ✔ | Not necessary | ✔ |

---

## Key Points

- **P** contains problems that can be solved efficiently.
- **NP** contains problems whose solutions can be verified efficiently.
- **NP-Hard** problems are at least as difficult as every NP problem.
- **NP-Complete** problems are both **NP** and **NP-Hard**.
- Every **P** problem is also an **NP** problem.
- Every **NP-Complete** problem is an **NP-Hard** problem.
- If one NP-Complete problem is solved in polynomial time, then **P = NP**.
- Whether **P = NP** is still an **unsolved problem** in Computer Science.

---

## Exam Tip

- **Common Viva Question:** What is the difference between NP-Hard and NP-Complete?
  - **Answer:** Every **NP-Complete** problem belongs to **NP** and its solution can be verified in polynomial time. An **NP-Hard** problem does **not necessarily belong to NP** and may not even be a decision problem.

- **Common Mistake:** Do **not** say that **NP means Non-Polynomial**. **NP stands for Non-deterministic Polynomial Time**, meaning that a given solution can be **verified** in polynomial time.
