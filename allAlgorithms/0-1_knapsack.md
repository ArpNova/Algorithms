# 0–1 Knapsack Problem

## Definition

The **0–1 Knapsack Problem** is a **Dynamic Programming** problem in which each item can either be **completely included (1)** or **completely excluded (0)** from the knapsack. The objective is to maximize the total profit without exceeding the given knapsack capacity. Unlike the Fractional Knapsack Problem, items **cannot be divided**.

---

## Algorithm

**Algorithm: 0–1 Knapsack**

**Input :**
- `n` items, where each item has
  - Weight
  - Profit
- Knapsack Capacity `W`

**Output :**
- Maximum profit obtainable.

```text
Algorithm: 0–1 Knapsack

Input :
    n items, where each item has
    - Weight
    - Profit
    Knapsack Capacity W

Output :
    Maximum profit obtainable.

1. Create a dynamic programming table K[][] of size (n + 1) × (W + 1).
2. Initialize the first row and the first column of K[][] with 0.
3. Consider each item one by one.
4. For every possible knapsack capacity from 1 to W:
      a) Check whether the current item can fit into the knapsack.
      b) If the item can fit:
            i) Find the profit obtained by excluding the item.
           ii) Find the profit obtained by including the item.
          iii) Store the larger of the two profits in the table.
      c) Otherwise:
            i) Copy the profit obtained without including the current item.
5. Repeat the above process until all items and all capacities have been considered.
6. The last entry of the table contains the maximum profit.
7. Return the maximum profit.
```

---

## Explanation

### Step 1:
Create a two-dimensional Dynamic Programming table `K[][]`. Each row represents the number of items considered, and each column represents the knapsack capacity.

### Step 2:
Initialize the first row and first column with **0** because no profit can be obtained when there are no items or when the knapsack capacity is zero.

### Step 3:
Process each item one by one.

### Step 4:
For every possible capacity, determine whether the current item can be included.

### Step 5:
If the item fits into the knapsack, compare:
- The profit obtained by **excluding** the item.
- The profit obtained by **including** the item.

Store the larger value in the table.

### Step 6:
If the item cannot fit, copy the previous profit value into the current table entry.

### Step 7:
Continue filling the table until all items and capacities have been processed.

### Step 8:
The value in the last cell of the table represents the maximum profit that can be obtained.

### Step 9:
Return the maximum profit.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. **Table Initialization**
   - Initializing the first row and first column requires **O(n + W)** time.

2. **Filling the Dynamic Programming Table**
   - There are **n** rows (items).
   - There are **W** columns (capacities).
   - Each table entry is computed only once in constant time.

Therefore,

**Overall Time Complexity = O(nW)**

### Best Case

- Every table entry must still be computed.

**Best Case Time Complexity = O(nW)**

### Average Case

- All entries of the DP table are evaluated.

**Average Case Time Complexity = O(nW)**

### Worst Case

- Every table entry is processed exactly once.

**Worst Case Time Complexity = O(nW)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Dynamic Programming table `K[][]` → **O(nW)**

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(nW)**

**Note:** The input arrays containing item weights and profits are part of the input and are **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Dynamic Programming** technique.
- Each item can be selected **only once**.
- Items **cannot be divided**.
- Produces the **optimal solution**.
- Solves overlapping subproblems using a DP table.
- Time complexity is **O(nW)**.
- Space complexity is **O(nW)**.
- Different from the Fractional Knapsack Problem, which uses a Greedy approach.

---

## Exam Tip

- **Common Viva Question:** Why is Dynamic Programming used for the 0–1 Knapsack Problem?
  - **Answer:** Because the problem has **overlapping subproblems** and **optimal substructure**, making Dynamic Programming the most efficient standard approach.

- **Common Mistake:** Do **not** write the Greedy algorithm for the 0–1 Knapsack Problem. The standard textbook solution is based on **Dynamic Programming**, whereas the Greedy approach is used only for the **Fractional Knapsack Problem**.