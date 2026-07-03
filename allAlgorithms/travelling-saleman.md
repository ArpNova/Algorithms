# Travelling Salesman Problem (TSP)

## Definition

The **Travelling Salesman Problem (TSP)** is a **Dynamic Programming** optimization problem in which a salesman has to visit each city **exactly once**, return to the starting city, and minimize the total travel cost. The objective is to find the **minimum-cost Hamiltonian cycle**.

> **Note:** The standard textbook solution for TSP is **Dynamic Programming (Held–Karp Algorithm)**. Some books also discuss the **Branch and Bound** approach, but DP is the standard algorithm in Design and Analysis of Algorithms.

---

## Algorithm

**Algorithm: Travelling Salesman Problem (Dynamic Programming)**

**Input :**
- A weighted graph (or cost matrix) representing the distances between cities.
- Starting city.

**Output :**
- Minimum cost of completing the tour by visiting every city exactly once and returning to the starting city.

```text
Algorithm: Travelling Salesman Problem

Input :
    A weighted graph (or cost matrix)
    Starting city

Output :
    Minimum cost tour visiting every city exactly once
    and returning to the starting city.

1. Create a Dynamic Programming table to store the minimum
   cost for every combination of visited cities and current city.
2. Initialize the table with the cost of starting from the
   source city.
3. Consider subsets of cities in increasing order of their size.
4. For each subset:
      a) Consider every possible current city.
      b) Compute the minimum cost of reaching the current city
         from all previously visited cities.
      c) Store the minimum cost in the Dynamic Programming table.
5. After all subsets have been processed:
      a) Add the cost of returning from the last visited city
         to the starting city.
      b) Find the minimum tour cost.
6. Return the minimum tour cost.
```

---

## Explanation

### Step 1:
Create a **Dynamic Programming table** to store the minimum cost required to reach each city after visiting a particular set of cities.

### Step 2:
Initialize the table using the starting city.

### Step 3:
Generate all possible subsets of cities, starting from the smallest subsets.

### Step 4:
For every subset, compute the minimum cost of reaching each city from the previously visited cities.

### Step 5:
Store the minimum cost for each state in the Dynamic Programming table.

### Step 6:
After all cities have been visited, add the cost of returning to the starting city.

### Step 7:
The minimum value obtained represents the minimum cost tour.

### Step 8:
Return the minimum tour cost.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. The algorithm considers all possible subsets of the `n` cities.
   - Number of subsets = **2ⁿ**.

2. For each subset, every city may be considered as the current city.
   - Number of cities = **n**.

3. For each current city, all possible previous cities are examined.
   - Time required = **O(n)**.

Therefore,

**Overall Time Complexity = O(n² × 2ⁿ)**

### Best Case

- All subsets must still be processed.

**Best Case Time Complexity = O(n² × 2ⁿ)**

### Average Case

- Every state of the Dynamic Programming table is evaluated.

**Average Case Time Complexity = O(n² × 2ⁿ)**

### Worst Case

- All subsets and transitions are explored.

**Worst Case Time Complexity = O(n² × 2ⁿ)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Dynamic Programming table → **O(n × 2ⁿ)**

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(n × 2ⁿ)**

**Note:** The input graph (or cost matrix) is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Dynamic Programming** technique (Held–Karp Algorithm).
- Visits **every city exactly once**.
- Returns to the **starting city**.
- Finds the **minimum-cost Hamiltonian cycle**.
- Guarantees the **optimal solution**.
- Time complexity is **O(n² × 2ⁿ)**.
- Space complexity is **O(n × 2ⁿ)**.
- Used in route planning, logistics, circuit design, and scheduling.

---

## Exam Tip

- **Common Viva Question:** What is the objective of the Travelling Salesman Problem?
  - **Answer:** To find the **minimum-cost tour** that visits every city exactly once and returns to the starting city.

- **Common Mistake:** Do **not** confuse the Travelling Salesman Problem with the **Shortest Path Problem**. In TSP, **every city must be visited exactly once** and the tour must **return to the starting city**, whereas shortest path algorithms (like Dijkstra's) find the shortest path between vertices without visiting all vertices.