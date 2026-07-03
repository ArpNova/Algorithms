# Vertex Cover Problem (Approximation Algorithm)

## Definition

The **Vertex Cover Problem** is a **Greedy Approximation** problem in which the objective is to find a set of vertices such that **every edge in the graph has at least one of its endpoints in the selected set**. Since finding the minimum vertex cover is an **NP-Complete** problem, the standard textbook algorithm is a **2-Approximation Greedy Algorithm**.

---

## Algorithm

**Algorithm: Vertex Cover (Approximation Algorithm)**

**Input :**
- A graph `G(V, E)`

**Output :**
- A vertex cover of the graph.

```text
Algorithm: Vertex Cover (Approximation Algorithm)

Input :
    A graph G(V, E)

Output :
    A vertex cover

1. Initialize the Vertex Cover as an empty set.
2. Mark all edges as uncovered.
3. Repeat until all edges are covered:
      a) Select any uncovered edge (u, v).
      b) Add both vertices u and v to the Vertex Cover.
      c) Mark all edges incident on u or v as covered.
4. Return the Vertex Cover.
```

---

## Explanation

### Step 1:
Create an empty set to store the vertices included in the Vertex Cover.

### Step 2:
Initially, mark every edge of the graph as **uncovered**.

### Step 3:
Select any edge that is still uncovered.

### Step 4:
Add **both endpoints** of the selected edge to the Vertex Cover.

### Step 5:
Since both endpoints are selected, every edge connected to either of these vertices is now covered.

### Step 6:
Mark all such edges as covered.

### Step 7:
Repeat the process until every edge of the graph has been covered.

### Step 8:
Return the Vertex Cover.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Every edge is considered at most once.

2. For each selected edge, all incident edges are marked as covered.

3. Using an adjacency list, all vertices and edges are processed efficiently.

Therefore,

**Overall Time Complexity = O(V + E)**

### Best Case

- Few edges are selected before all edges become covered.

**Best Case Time Complexity = O(V + E)**

### Average Case

- Each edge is processed once.

**Average Case Time Complexity = O(V + E)**

### Worst Case

- Every edge is examined.

**Worst Case Time Complexity = O(V + E)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Covered edge array (or edge status) → **O(E)**

### Auxiliary Data Structures

- Vertex Cover set → **O(V)**

### Auxiliary Space Complexity

**Auxiliary Space = O(V + E)**

**Note:** The graph representation is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses a **Greedy Approximation** approach.
- Covers every edge by selecting its endpoints.
- Produces a **valid Vertex Cover**, but not necessarily the minimum one.
- Gives a **2-Approximation** of the minimum vertex cover.
- The Minimum Vertex Cover problem is **NP-Complete**.
- Time complexity is **O(V + E)**.
- Auxiliary space complexity is **O(V + E)**.
- Widely used when an exact solution is computationally expensive.

---

## Exam Tip

- **Common Viva Question:** Why is an approximation algorithm used for the Vertex Cover Problem?
  - **Answer:** Because finding the **minimum vertex cover** is an **NP-Complete** problem. The approximation algorithm provides a solution that is guaranteed to be at most **twice the size of the optimal solution**.

- **Common Mistake:** Do **not** write that this algorithm always finds the **minimum** vertex cover. It finds an **approximate vertex cover**, not necessarily the optimal one.
