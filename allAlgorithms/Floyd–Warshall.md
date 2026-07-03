# Floyd–Warshall Algorithm

## Definition

The **Floyd–Warshall Algorithm** is a **Dynamic Programming** algorithm used to find the **shortest paths between every pair of vertices** in a weighted graph. It works for both directed and undirected graphs and can handle **negative edge weights**, provided the graph does **not contain a negative weight cycle**.

---

## Algorithm

**Algorithm: Floyd–Warshall Algorithm**

**Input :**
- A weighted graph \(G = (V, E)\).
- Distance matrix `dist[][]`, where:
  - `dist[i][j]` = weight of edge `(i, j)` if it exists.
  - `dist[i][j] = 0` if `i = j`.
  - `dist[i][j] = ∞` if there is no edge between `i` and `j`.

**Output :**
- Matrix `dist[][]` containing the shortest distances between every pair of vertices.

```text
Algorithm: Floyd–Warshall Algorithm

Input :
    Weighted graph G = (V, E)
    Distance matrix dist[][]

Output :
    Matrix dist[][] containing the shortest distances
    between every pair of vertices.

1. Initialize dist[][] using the graph:
      a) dist[i][j] = 0, if i = j.
      b) dist[i][j] = weight(i, j), if edge (i, j) exists.
      c) dist[i][j] = ∞, if there is no edge.

2. For each intermediate vertex k = 1 to |V|:
      a) For each source vertex i = 1 to |V|:
            i) For each destination vertex j = 1 to |V|:
                  If dist[i][k] + dist[k][j] < dist[i][j],
                        update
                        dist[i][j] = dist[i][k] + dist[k][j].

3. Return dist[][].
```

---

## Explanation

### Step 1:
Initialize the distance matrix `dist[][]` using the given graph.

- Distance from a vertex to itself is **0**.
- If an edge exists between two vertices, store its weight.
- Otherwise, store **∞ (Infinity)**.

### Step 2:
Choose each vertex one by one as an **intermediate vertex**.

### Step 3:
For every pair of vertices `(i, j)`, check whether the path from `i` to `j` through the intermediate vertex `k` is shorter than the current known path.

### Step 4:
If a shorter path is found, update `dist[i][j]`.

### Step 5:
Repeat the process for every vertex as the intermediate vertex.

### Step 6:
After considering all vertices as intermediate vertices, the matrix `dist[][]` contains the shortest distances between every pair of vertices.

### Step 7:
Return the final distance matrix `dist[][]`.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. **Initialization of Distance Matrix**
   - Initializing all entries of `dist[][]` requires **O(V²)** time.

2. **Three Nested Loops**
   - Outer loop (Intermediate vertex `k`) → **V** iterations.
   - Middle loop (Source vertex `i`) → **V** iterations.
   - Inner loop (Destination vertex `j`) → **V** iterations.

3. **Each Iteration**
   - Performs one comparison and one possible update.
   - Time per iteration = **O(1)**.

Therefore,

**Overall Time Complexity = O(V³)**

### Best Case

- Even if no updates occur, all three loops are executed.

**Best Case Time Complexity = O(V³)**

### Average Case

- Every combination of vertices is examined.

**Average Case Time Complexity = O(V³)**

### Worst Case

- Every comparison results in an update.

**Worst Case Time Complexity = O(V³)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- `dist[][]` → **O(V²)**

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(V²)**

**Note:** The input graph is not included in the auxiliary space complexity. The algorithm only requires the distance matrix for computation.

---

## Key Points

- Uses the **Dynamic Programming** technique.
- Finds the shortest paths between **every pair of vertices**.
- Works for both **directed** and **undirected** graphs.
- Supports **negative edge weights**.
- Does **not** work correctly if the graph contains a **negative weight cycle**.
- Uses a **distance matrix** instead of a priority queue.
- Suitable for **dense graphs**.
- Commonly used in routing, network optimization, and transitive closure problems.

---

## Exam Tip

- **Common Viva Question:** What is the difference between Dijkstra's Algorithm and Floyd–Warshall Algorithm?
  - **Answer:** Dijkstra's Algorithm finds the shortest path from a **single source** to all other vertices and requires **non-negative edge weights**, whereas Floyd–Warshall finds the shortest paths between **every pair of vertices** and can handle **negative edge weights** (but not negative weight cycles).

- **Common Mistake:** Do **not** confuse the three nested loops. The **outermost loop must always represent the intermediate vertex (`k`)**, followed by the source vertex (`i`) and destination vertex (`j`). This order is essential for the correctness of the Dynamic Programming algorithm.