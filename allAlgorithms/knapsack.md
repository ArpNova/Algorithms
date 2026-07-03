# 0–1 Knapsack Problem

## Definition

The **0–1 Knapsack Problem** is a **Dynamic Programming** problem in which each item can either be **completely included (1)** or **completely excluded (0)** from the knapsack. The objective is to maximize the total profit without exceeding the given knapsack capacity. Unlike the Fractional Knapsack Problem, items **cannot be divided**.

---

## Algorithm

**Algorithm: 0/1 Knapsack (Dynamic Programming)**

**Input :**
- `n` → Number of items
- `W` → Capacity of the knapsack
- `wt[]` → Array of item weights
- `val[]` → Array of item values

**Output :**
- Maximum profit that can be obtained.

```text
Algorithm: 0/1 Knapsack (Dynamic Programming)

Input :
    n → Number of items
    W → Capacity of the knapsack
    wt[] → Array of item weights
    val[] → Array of item values

Output :
    Maximum profit that can be obtained

1. Create a table K[0...n][0...W].
2. Initialize the first row and first column to 0.
3. For each item i = 1 to n, do
      a) For each capacity w = 1 to W, do
            i. If wt[i] ≤ w, then
                  K[i][w] = max(val[i] + K[i-1][w-wt[i]],
                                K[i-1][w])
           ii. Otherwise,
                  K[i][w] = K[i-1][w]
4. The value stored in K[n][W] is the maximum profit.
5. Return K[n][W].
```

---

## Explanation

### Step 1:
Create a Dynamic Programming table `K[][]` of size **(n + 1) × (W + 1)**. Each row represents the number of items considered, and each column represents the knapsack capacity.

### Step 2:
Initialize the first row and the first column with **0**.
- If there are no items, the maximum profit is **0**.
- If the knapsack capacity is **0**, no item can be selected.

### Step 3:
Process each item one by one.

### Step 4:
For every possible knapsack capacity:
- If the current item can fit into the knapsack (`wt[i] ≤ w`), calculate:
  - Profit obtained by **including** the item.
  - Profit obtained by **excluding** the item.
  - Store the larger of the two profits in the table.
- Otherwise, copy the profit from the previous row.

### Step 5:
Continue filling the table until all items and capacities have been processed.

### Step 6:
The value stored in `K[n][W]` represents the maximum profit that can be obtained.

### Step 7:
Return `K[n][W]`.

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

**Note:** The input arrays `wt[]` and `val[]` are part of the input and are **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Dynamic Programming** technique.
- Each item can be selected **only once** (0 or 1 time).
- Items **cannot be divided**.
- Produces the **optimal solution**.
- Uses a **Dynamic Programming table (`K[][]`)** to store intermediate results.
- Time complexity is **O(nW)**.
- Space complexity is **O(nW)**.
- Different from the **Fractional Knapsack Problem**, which uses a Greedy approach.

---

## Exam Tip

- **Common Viva Question:** Why is Dynamic Programming used for the 0–1 Knapsack Problem?
  - **Answer:** Because the problem has **optimal substructure** and **overlapping subproblems**, making Dynamic Programming the most efficient standard approach.

- **Common Mistake:** Do **not** write the Greedy algorithm for the 0–1 Knapsack Problem. The standard solution uses **Dynamic Programming**, whereas the Greedy approach is applicable only to the **Fractional Knapsack Problem**.