# 0–1 Knapsack Problem

## Definition

The **0–1 Knapsack Problem** is a **Dynamic Programming** problem in which each item can either be **completely included (1)** or **completely excluded (0)** from the knapsack. The objective is to maximize the total profit without exceeding the given knapsack capacity.

---

## Algorithm

**Algorithm: 0–1 Knapsack (Dynamic Programming)**

**Input :**
- `n` items, where each item has:
  - Weight `wt[i]`
  - Profit `val[i]`
- Knapsack capacity `W`

**Output :**
- Maximum profit that can be obtained without exceeding the knapsack capacity.

```text
Algorithm: 0–1 Knapsack

Input :
    n items with weights wt[1...n],
    profits val[1...n],
    knapsack capacity W

Output :
    Maximum profit obtainable.

1. Create a table K[0...n][0...W].
2. Initialize:
      a) K[0][w] = 0 for all w = 0 to W.
      b) K[i][0] = 0 for all i = 0 to n.
3. For i = 1 to n:
      a) For w = 1 to W:
            i) If wt[i] ≤ w:
                  K[i][w] = max(K[i−1][w],
                                val[i] + K[i−1][w−wt[i]])
           ii) Otherwise:
                  K[i][w] = K[i−1][w]
4. Return K[n][W].
```

---

## Explanation

### Step 1:
Create a two-dimensional table `K[][]`, where:
- Rows represent the number of items considered.
- Columns represent the knapsack capacity.

### Step 2:
Initialize the first row and first column to **0**.
- If there are no items, the maximum profit is **0**.
- If the knapsack capacity is **0**, no item can be selected.

### Step 3:
Process each item one by one.

### Step 4:
For every capacity `w`, check whether the current item can fit into the knapsack.

### Step 5:
If the item's weight is less than or equal to the current capacity:
- **Exclude the item:** Profit = `K[i−1][w]`
- **Include the item:** Profit = `val[i] + K[i−1][w−wt[i]]`
- Store the maximum of these two values.

### Step 6:
If the item cannot fit into the knapsack, copy the value from the previous row.

### Step 7:
Continue filling the table until all items and capacities have been processed.

### Step 8:
The value stored in `K[n][W]` represents the maximum achievable profit.

### Step 9:
Return `K[n][W]`.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. **Initialization**
   - Initializing the first row and first column takes **O(n + W)** time.

2. **Filling the DP Table**
   - There are **n** rows (items).
   - There are **W** columns (capacities).
   - Each cell is computed in **O(1)** time.

Therefore,

**Overall Time Complexity = O(nW)**

### Best Case

- Every table entry is still computed.

**Best Case Time Complexity = O(nW)**

### Average Case

- The entire DP table is filled.

**Average Case Time Complexity = O(nW)**

### Worst Case

- Every table entry is computed exactly once.

**Worst Case Time Complexity = O(nW)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- DP table `K[0...n][0...W]` → **O(nW)**

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(nW)**

**Note:** The input arrays `wt[]` and `val[]` are part of the input and are **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Dynamic Programming** technique.
- Each item can be selected **only once** (either 0 or 1 time).
- Maximizes total profit without exceeding the knapsack capacity.
- Solves overlapping subproblems using a DP table.
- Guarantees the optimal solution.
- Applicable when items **cannot be divided**.
- Time complexity is **O(nW)**.
- Space complexity is **O(nW)** using the standard DP table.

---

## Exam Tip

- **Common Viva Question:** Why is it called the **0–1 Knapsack Problem**?
  - **Answer:** Because each item has only two choices: either **include it completely (1)** or **exclude it completely (0)**. Fractional selection is not allowed.

- **Common Mistake:** Do **not** confuse the **0–1 Knapsack Problem** with the **Fractional Knapsack Problem**. The 0–1 Knapsack uses **Dynamic Programming** and does not allow fractional items, whereas the Fractional Knapsack uses a **Greedy** approach and allows items to be taken in fractions.