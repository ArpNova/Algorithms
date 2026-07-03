# Hamiltonian Cycle using Backtracking

## Definition

The **Hamiltonian Cycle Problem** is a **Backtracking** problem that finds **all possible Hamiltonian cycles** in a graph. A **Hamiltonian Cycle** is a cycle that visits **every vertex exactly once** and returns to the starting vertex. The algorithm explores all possible paths and backtracks whenever a valid cycle cannot be formed.

---

## Algorithm

**Algorithm: Hamiltonian Cycle using Backtracking**

**Input :**
- A graph `G(V, E)` represented using an adjacency matrix or adjacency list.

**Output :**
- All Hamiltonian cycles in the graph.

```text
Algorithm: Hamiltonian Cycle using Backtracking

Input :
    A graph G(V, E)

Output :
    All Hamiltonian cycles in the graph

1. Create an array path[] of size |V|.
2. Initialize all entries of path[] as EMPTY.
3. Place the first vertex in path[0] as the starting vertex.
4. Start filling the remaining positions of path[] one by one.
5. For each position:
      a) Try every vertex that has not already been included in path[].
      b) Check whether the selected vertex:
            i) Is adjacent to the previously selected vertex.
           ii) Has not already appeared in path[].
      c) If both conditions are satisfied:
            i) Place the vertex in the current position.
           ii) Continue filling the next position.
      d) If no valid vertex can be placed:
            i) Remove the previously selected vertex.
           ii) Try another vertex (Backtrack).
6. When all vertices have been placed:
      a) Check whether the last vertex is adjacent to the starting vertex.
      b) If yes, output the Hamiltonian cycle.
7. Continue searching to find all Hamiltonian cycles.
8. Return all Hamiltonian cycles.
```

---

## Explanation

### Step 1:
Create the `path[]` array to store the vertices of the Hamiltonian cycle.

### Step 2:
Initialize all positions of `path[]` as **EMPTY**.

### Step 3:
Choose any vertex as the starting vertex and place it in the first position of `path[]`.

### Step 4:
Fill the remaining positions of the path one by one.

### Step 5:
For each position, try every vertex that has not already been included in the current path.

### Step 6:
Before placing a vertex, verify that:
- It is adjacent to the previously selected vertex.
- It has not already been included in the path.

### Step 7:
If the vertex is valid, place it in the path and continue with the next position.

### Step 8:
If no valid vertex can be placed, remove the previously selected vertex and try another possibility (**Backtracking**).

### Step 9:
After all vertices have been placed, check whether the last vertex is connected to the starting vertex.

### Step 10:
If it is connected, a Hamiltonian cycle is found. Output the cycle and continue searching for other possible cycles.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. The algorithm tries different arrangements of the vertices.

2. In the worst case, almost every permutation of the vertices may be examined.

3. For each arrangement, adjacency and validity checks are performed.

Therefore,

**Overall Time Complexity = O(V!)**

### Best Case

- A valid Hamiltonian cycle is found with minimal backtracking.

**Best Case Time Complexity = Better than O(V!), but commonly expressed as O(V!)**

### Average Case

- Several paths are explored before valid cycles are found.

**Average Case Time Complexity = O(V!)**

### Worst Case

- Nearly every possible arrangement of vertices is examined.

**Worst Case Time Complexity = O(V!)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- `path[]` → **O(V)**

### Auxiliary Data Structures

- Recursive call stack → **O(V)**

### Auxiliary Space Complexity

**Auxiliary Space = O(V)**

**Note:** The graph representation (Adjacency Matrix or Adjacency List) is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Backtracking** technique.
- Visits **every vertex exactly once**.
- Returns to the **starting vertex** to form a cycle.
- Uses a `path[]` array to store the current path.
- Backtracks whenever no valid vertex can be placed.
- Worst-case time complexity is **O(V!)**.
- Auxiliary space complexity is **O(V)**.
- Can be modified to find **one** Hamiltonian cycle or **all** Hamiltonian cycles.

---

## Exam Tip

- **Common Viva Question:** What conditions must a vertex satisfy before being added to the Hamiltonian path?
  - **Answer:** The vertex must **(1) be adjacent to the previously selected vertex** and **(2) not already be present in the current path**.

- **Common Mistake:** Do **not** forget the **final check**. After placing all vertices, you **must verify that the last vertex is connected to the starting vertex**; otherwise, the path is **not** a Hamiltonian cycle.
