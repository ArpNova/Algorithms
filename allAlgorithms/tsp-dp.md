# Travelling Salesman Problem (Dynamic Programming)

## Definition

The **Travelling Salesman Problem (TSP)** is a **Dynamic Programming** optimization problem in which a salesman must visit **every city exactly once**, return to the **starting city**, and minimize the total travelling cost. The standard Dynamic Programming solution is known as the **Held–Karp Algorithm**.

---

## Algorithm

**Algorithm: Travelling Salesman Problem (Dynamic Programming)**

**Input :**
- A cost matrix representing the distances between cities.
- Number of cities `n`.
- Starting city.

**Output :**
- Minimum cost required to visit every city exactly once and return to the starting city.

```text
Algorithm: Travelling Salesman Problem (Dynamic Programming)

Input :
    Cost matrix of n cities
    Starting city

Output :
    Minimum cost tour

1. Create a Dynamic Programming table DP[][] to store the
   minimum cost for every combination of visited cities and
   current city.
2. Initialize the table for the starting city.
3. Consider subsets of cities in increasing order of their size.
4. For each subset, do
      a) Consider every city as the current city.
      b) Compute the minimum cost of reaching the current city
         from every possible previous city in the subset.
      c) Store the minimum cost in the DP table.
5. After processing all subsets:
      a) Add the cost of returning from the last visited city
         to the starting city.
      b) Find the minimum tour cost.
6. Return the minimum tour cost.
```

---

## Explanation

### Step 1:
Create a **Dynamic Programming table `DP[][]`** to store the minimum cost of reaching each city after visiting a particular set of cities.

### Step 2:
Initialize the table using the **starting city** as the initial state.

### Step 3:
Generate all possible subsets of cities in increasing order of their size.

### Step 4:
For every subset, consider each city as the **current city**.

### Step 5:
For each current city, calculate the minimum cost of reaching it from every possible previous city already included in the subset.

### Step 6:
Store the minimum cost obtained in the Dynamic Programming table.

### Step 7:
After all subsets have been processed, add the cost of returning from the last visited city to the starting city.

### Step 8:
The smallest value obtained is the minimum travelling cost.

### Step 9:
Return the minimum tour cost.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. The algorithm considers all possible subsets of the **n** cities.
   - Number of subsets = **2ⁿ**.

2. For every subset, every city may be considered as the current city.
   - Number of cities = **n**.

3. For every current city, all possible previous cities are examined.
   - Time required = **O(n)**.

Therefore,

**Overall Time Complexity = O(n² × 2ⁿ)**

### Best Case

- All subsets must still be processed.

**Best Case Time Complexity = O(n² × 2ⁿ)**

### Average Case

- Every DP state is evaluated.

**Average Case Time Complexity = O(n² × 2ⁿ)**

### Worst Case

- All subsets and all transitions are examined.

**Worst Case Time Complexity = O(n² × 2ⁿ)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Dynamic Programming table `DP[][]` → **O(n × 2ⁿ)**

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(n × 2ⁿ)**

**Note:** The input cost matrix is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Dynamic Programming** technique (Held–Karp Algorithm).
- Visits **every city exactly once**.
- Returns to the **starting city**.
- Finds the **minimum-cost tour**.
- Uses a **Dynamic Programming table** to store intermediate results.
- Time complexity is **O(n² × 2ⁿ)**.
- Space complexity is **O(n × 2ⁿ)**.
- Produces the **optimal solution**.

---

## Exam Tip

- **Common Viva Question:** Why is Dynamic Programming used in the Travelling Salesman Problem?
  - **Answer:** Because the problem has **optimal substructure** and **overlapping subproblems**. Dynamic Programming stores intermediate results to avoid repeated calculations.

- **Common Mistake:** Do **not** confuse the Travelling Salesman Problem with the **Shortest Path Problem**. In TSP, **every city must be visited exactly once** and the salesman **must return to the starting city**.
