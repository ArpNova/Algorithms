# Depth First Search (DFS) Traversal

## Definition

**Depth First Search (DFS)** is a **graph traversal** algorithm that explores a graph by visiting a vertex and then recursively visiting its unvisited adjacent vertices as deeply as possible before backtracking. DFS uses **Recursion** (or a Stack) to traverse the graph.

---

## Algorithm

**Algorithm: Depth First Search (DFS)**

**Input :**
- A graph \(G(V, E)\)
- A starting (source) vertex `s`

**Output :**
- DFS traversal of the graph.

```text
Algorithm: Depth First Search (DFS)

Input :
    A graph G(V, E)
    Starting vertex s

Output :
    DFS traversal of the graph.

1. Create an array visited[] of size |V|.
2. Initialize all vertices as unvisited.
3. Start the DFS traversal from the starting vertex.
4. For the current vertex:
      a) Mark the current vertex as visited.
      b) Visit the current vertex.
      c) For every adjacent vertex of the current vertex:
            i) If the adjacent vertex is unvisited:
                  • Recursively perform DFS on that vertex.
5. Repeat the above process until all reachable vertices have been visited.
6. Return the DFS traversal.
```

---

## Explanation

### Step 1:
Create the `visited[]` array to keep track of the vertices that have already been visited.

### Step 2:
Initialize all vertices as **unvisited**.

### Step 3:
Start the traversal from the given source vertex.

### Step 4:
Mark the current vertex as **visited** and visit it.

### Step 5:
Check each adjacent vertex of the current vertex.

### Step 6:
If an adjacent vertex has not been visited, recursively perform DFS from that vertex.

### Step 7:
When a vertex has no unvisited adjacent vertices, backtrack to the previous vertex and continue the traversal.

### Step 8:
Repeat the process until all reachable vertices have been visited.

### Step 9:
Return the DFS traversal.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Initializing the `visited[]` array requires **O(V)** time.

2. Every vertex is visited exactly once.
   - Time required = **O(V)**.

3. Every edge is examined once (or twice in an undirected graph).
   - Time required = **O(E)**.

Therefore,

**Overall Time Complexity = O(V + E)**

### Best Case

- Every reachable vertex and edge is visited once.

**Best Case Time Complexity = O(V + E)**

### Average Case

- Every reachable vertex and edge is processed once.

**Average Case Time Complexity = O(V + E)**

### Worst Case

- All vertices and edges of the graph are traversed.

**Worst Case Time Complexity = O(V + E)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- `visited[]` → **O(V)**

### Auxiliary Data Structures

- Recursive call stack → **O(V)** (in the worst case)

### Auxiliary Space Complexity

**Auxiliary Space = O(V)**

**Note:** The graph representation (Adjacency List or Adjacency Matrix) is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses **Recursion** (or an explicit Stack).
- Explores one path completely before backtracking.
- Visits each vertex exactly once.
- Suitable for both directed and undirected graphs.
- Time complexity is **O(V + E)**.
- Space complexity is **O(V)**.
- Used in cycle detection, topological sorting, connected components, and path finding.
- Backtracking is the key feature of DFS.

---

## Exam Tip

- **Common Viva Question:** What is the main difference between BFS and DFS?
  - **Answer:** BFS visits vertices **level by level** using a **Queue**, whereas DFS explores one path as deeply as possible before backtracking using **Recursion or a Stack**.

- **Common Mistake:** Do **not** mark a vertex as visited after the recursive call. Always **mark it as visited before exploring its adjacent vertices**, otherwise the same vertex may be visited multiple times.