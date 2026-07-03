# Travelling Salesman Problem (Branch and Bound)

## Definition

The **Travelling Salesman Problem (TSP)** using **Branch and Bound** is an optimization algorithm used to find the **minimum-cost tour** that visits every city exactly once and returns to the starting city. It systematically explores possible tours while **discarding (pruning)** those branches whose lower bound is greater than the current best solution.

---

## Algorithm

**Algorithm: Travelling Salesman Problem (Branch and Bound)**

**Input :**
- Cost matrix representing the distances between cities.
- Number of cities `n`.
- Starting city.

**Output :**
- Minimum cost tour.

```text
Algorithm: Travelling Salesman Problem (Branch and Bound)

Input :
    Cost matrix of n cities
    Starting city

Output :
    Minimum cost tour

1. Compute the initial lower bound of the tour.
2. Initialize the current path with the starting city.
3. Initialize the minimum tour cost as infinity.
4. Expand the current path by considering each unvisited city.
5. For every possible city:
      a) Calculate the new lower bound.
      b) If the lower bound is less than the current minimum tour cost:
            i) Include the city in the current path.
           ii) Continue exploring the remaining cities.
      c) Otherwise:
            i) Discard the current path (Prune the branch).
6. When all cities have been visited:
      a) Add the cost of returning to the starting city.
      b) If the total tour cost is smaller than the current minimum,
            update the minimum tour cost.
7. Continue until all possible promising branches have been explored.
8. Return the minimum cost tour.
```

---

## Explanation

### Step 1:
Compute an **initial lower bound**, which represents the minimum possible cost that any complete tour from the current state can have.

### Step 2:
Start the tour from the given **starting city**.

### Step 3:
Initialize the minimum tour cost to **infinity**, since no complete tour has been found yet.

### Step 4:
Extend the current path by selecting one unvisited city at a time.

### Step 5:
For every newly selected city, compute the new **lower bound**.

### Step 6:
If the lower bound is **less than the current minimum tour cost**, continue exploring that path.

### Step 7:
If the lower bound is **greater than or equal to the current minimum tour cost**, discard (**prune**) that branch because it cannot produce a better solution.

### Step 8:
When every city has been visited, add the cost of returning to the starting city.

### Step 9:
If the obtained tour cost is smaller than the current minimum, update the minimum tour cost.

### Step 10:
Continue exploring all remaining promising branches.

### Step 11:
Return the minimum cost tour.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. The algorithm explores different possible tours.

2. Branch and Bound eliminates many unnecessary branches using the **lower bound**.

3. However, in the worst case, almost every possible tour may still need to be examined.

Therefore,

**Overall Time Complexity = O(n!)**

### Best Case

- Many branches are pruned early due to effective lower bounds.

**Best Case Time Complexity = Better than O(n!), but depends on pruning**

### Average Case

- Several branches are pruned, reducing the search space.

**Average Case Time Complexity = Better than O(n!), but depends on the problem instance**

### Worst Case

- Very few branches are pruned, and almost all tours are explored.

**Worst Case Time Complexity = O(n!)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Current path array → **O(n)**
- Visited array → **O(n)**

### Auxiliary Data Structures

- Recursive call stack → **O(n)**

### Auxiliary Space Complexity

**Auxiliary Space = O(n)**

**Note:** The input cost matrix is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Branch and Bound** technique.
- Finds the **minimum-cost tour**.
- Visits **every city exactly once**.
- Returns to the **starting city**.
- Uses a **lower bound** to eliminate unnecessary branches.
- **Pruning** reduces the number of paths explored.
- Worst-case time complexity is **O(n!)**.
- Produces the **optimal solution**.

---

## Exam Tip

- **Common Viva Question:** What is the purpose of the lower bound in Branch and Bound?
  - **Answer:** The lower bound estimates the minimum possible cost of completing the current partial tour. If it is greater than or equal to the current best solution, that branch is **pruned** because it cannot produce a better result.

- **Common Mistake:** Do **not** confuse **Backtracking** with **Branch and Bound**. Backtracking prunes branches when they become **invalid**, whereas Branch and Bound prunes branches when they **cannot lead to a better (minimum-cost) solution** based on the lower bound.
