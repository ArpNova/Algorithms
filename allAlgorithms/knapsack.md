# Fractional Knapsack Problem

## Definition

The **Fractional Knapsack Problem** is a **Greedy** optimization problem in which items can be **divided into fractions**. The objective is to maximize the total profit without exceeding the knapsack capacity by selecting items in the order of their **profit-to-weight ratio**.

---

## Algorithm

**Algorithm: Fractional Knapsack**

**Input :**
- `n` → Number of items
- `W` → Capacity of the knapsack
- Weight and profit of each item

**Output :**
- Maximum profit

```text
Algorithm: Fractional Knapsack

Input :
    n → Number of items
    W → Capacity of the knapsack
    Weight and profit of each item

Output :
    Maximum profit

1. Calculate the profit-to-weight ratio (Profit/Weight) for each item.
2. Sort all items in descending order of their profit-to-weight ratio.
3. Initialize TotalProfit = 0.
4. For each item in the sorted order, do
      a) If the item's weight is less than or equal to the remaining capacity,
            i) Take the whole item.
            ii) Add its profit to TotalProfit.
            iii) Reduce the remaining capacity.
      b) Otherwise,
            i) Take only the required fraction of the item.
            ii) Add the corresponding fractional profit to TotalProfit.
            iii) Stop, as the knapsack is full.
5. Return TotalProfit.
```

---

## Explanation

### Step 1:
Calculate the **profit-to-weight ratio (Profit/Weight)** for every item. This ratio indicates the profit obtained per unit weight.

### Step 2:
Sort all items in **descending order** of their profit-to-weight ratio so that the most profitable items are considered first.

### Step 3:
Initialize the total profit as **0**.

### Step 4:
Consider each item one by one in the sorted order.

### Step 5:
If the entire item can fit into the remaining knapsack capacity:
- Take the whole item.
- Add its profit to **TotalProfit**.
- Reduce the remaining knapsack capacity.

### Step 6:
If the item cannot fit completely:
- Take only the required fraction of the item.
- Add the corresponding fractional profit to **TotalProfit**.
- Stop, since the knapsack becomes full.

### Step 7:
Return the maximum profit obtained.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. **Calculating Profit-to-Weight Ratio**
   - Ratio is calculated for each of the **n** items.
   - Time required = **O(n)**.

2. **Sorting the Items**
   - Sorting based on the profit-to-weight ratio requires **O(n log n)** time.

3. **Selecting Items**
   - Each item is considered at most once.
   - Time required = **O(n)**.

Therefore,

**Overall Time Complexity = O(n log n)**

### Best Case

- Sorting is still required before selecting items.

**Best Case Time Complexity = O(n log n)**

### Average Case

- Sorting dominates the execution time.

**Average Case Time Complexity = O(n log n)**

### Worst Case

- All items are examined after sorting.

**Worst Case Time Complexity = O(n log n)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Array to store the profit-to-weight ratio (if maintained separately) → **O(n)**

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(n)**

**Note:** The input arrays containing the weights and profits of the items are part of the input and are **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Greedy** technique.
- Items are selected based on the **highest profit-to-weight ratio**.
- Items **can be divided into fractions**.
- Produces the **optimal solution** for the Fractional Knapsack Problem.
- Sorting is an essential step.
- Time complexity is **O(n log n)**.
- Space complexity is **O(n)**.
- Different from the **0–1 Knapsack Problem**, where items cannot be divided.

---

## Exam Tip

- **Common Viva Question:** Why does the Greedy approach work for the Fractional Knapsack Problem?
  - **Answer:** Since items can be divided, selecting items in decreasing order of their **profit-to-weight ratio** always gives the maximum possible profit.

- **Common Mistake:** Do **not** confuse the **Fractional Knapsack Problem** with the **0–1 Knapsack Problem**. Fractional Knapsack allows taking **fractions of items** and uses a **Greedy** approach, whereas the 0–1 Knapsack Problem allows only complete inclusion or exclusion of items and uses **Dynamic Programming**.