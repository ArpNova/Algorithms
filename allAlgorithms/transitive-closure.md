# Transitive Closure of a Graph (Warshall's Algorithm)

## Definition

The **Transitive Closure** of a graph is a matrix that indicates whether a **path exists** between every pair of vertices. **Warshall's Algorithm** is a **Dynamic Programming** algorithm used to compute the transitive closure (reachability matrix) of a directed graph.

---

## Algorithm

**Algorithm: Warshall's Algorithm (Transitive Closure)**

**Input :**
- A directed graph `G(V, E)`.
- Adjacency matrix `A[][]` of the graph.

**Output :**
- Transitive Closure matrix `T[][]`.

```text
Algorithm: Warshall's Algorithm

Input :
    A directed graph G(V, E)
    Adjacency matrix A[][]

Output :
    Transitive Closure matrix T[][]

1. Create a matrix T[][] of size |V| × |V|.
2. Initialize T[][] using the adjacency matrix:
      a) If there is an edge from vertex i to vertex j,
            set T[i][j] = 1.
      b) Otherwise,
            set T[i][j] = 0.
      c) Set T[i][i] = 1 for every vertex.
3. Consider each vertex as an intermediate vertex.
4. For every pair of vertices:
      a) Check whether a path exists through the current
         intermediate vertex.
      b) If a path exists, mark the corresponding entry
         in T[][] as 1.
5. Repeat the process until all vertices have been considered
   as intermediate vertices.
6. Return the Transitive Closure matrix T[][].
```

---

## Explanation

### Step 1:
Create a matrix `T[][]` to store the reachability information between every pair of vertices.

### Step 2:
Initialize `T[][]` using the adjacency matrix.
- If there is a direct edge, mark the entry as **1**.
- Otherwise, mark it as **0**.
- Mark every diagonal element as **1**, since every vertex is reachable from itself.

### Step 3:
Consider each vertex one by one as an **intermediate vertex**.

### Step 4:
For every pair of vertices, check whether a path exists through the current intermediate vertex.

### Step 5:
If such a path exists, update the corresponding entry in the transitive closure matrix.

### Step 6:
Repeat the process for all intermediate vertices.

### Step 7:
After processing all vertices, the matrix `T[][]` represents the transitive closure of the graph.

### Step 8:
Return the transitive closure matrix.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Initializing the transitive closure matrix requires **O(V²)** time.

2. The algorithm uses **three nested loops**:
   - One loop for the intermediate vertex.
   - One loop for the source vertex.
   - One loop for the destination vertex.

3. Each iteration performs a constant-time reachability check and update.

Therefore,

**Overall Time Complexity = O(V³)**

### Best Case

- All three loops are still executed.

**Best Case Time Complexity = O(V³)**

### Average Case

- Every combination of vertices is examined.

**Average Case Time Complexity = O(V³)**

### Worst Case

- Every possible pair of vertices is checked through every intermediate vertex.

**Worst Case Time Complexity = O(V³)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Transitive Closure matrix `T[][]` → **O(V²)**

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(V²)**

**Note:** The input adjacency matrix is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Dynamic Programming** technique.
- Computes the **reachability** between every pair of vertices.
- Uses the graph's **adjacency matrix** as input.
- Produces the **Transitive Closure matrix**.
- Works for **directed graphs**.
- Time complexity is **O(V³)**.
- Space complexity is **O(V²)**.
- Based on **Warshall's Algorithm**.

---

## Exam Tip

- **Common Viva Question:** What is the difference between **Floyd–Warshall** and **Warshall's Algorithm**?
  - **Answer:** **Warshall's Algorithm** computes only the **reachability (transitive closure)** between vertices, whereas **Floyd–Warshall Algorithm** computes the **shortest path distances** between every pair of vertices.

- **Common Mistake:** Do **not** confuse the **Transitive Closure matrix** with the **Shortest Distance matrix**. The transitive closure contains only **0/1 values** indicating whether a path exists, not the path length.
