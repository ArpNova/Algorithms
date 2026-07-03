# Graph Coloring Algorithm (Greedy Method)

## Definition

**Graph Coloring** is the process of assigning colors to the vertices of a graph such that **no two adjacent vertices have the same color**. The objective is to use the **minimum number of colors**. The Greedy Graph Coloring Algorithm assigns the first available color to each vertex one by one.

---

## Algorithm

```text
Algorithm: Graph Coloring (Greedy Method)

Input :
    Graph G(V, E)

Output :
    color[] containing the assigned color for each vertex.

1. Create an array color[] of size V.
2. Initialize color[i] = -1 for all vertices.
3. Assign the first color (Color 1) to the first vertex.
4. For each remaining vertex u:
      a) Mark all colors as available.
      b) For every adjacent vertex v of u:
            if color[v] is assigned,
               mark color[v] as unavailable.
      c) Assign the first available color to vertex u.
5. Return color[].
```

---

## Explanation

**Step 1:** Create an array `color[]` to store the color assigned to each vertex.

**Step 2:** Initialize all vertices with **-1**, indicating that no color has been assigned.

**Step 3:** Assign the first color to the first vertex.

**Step 4:** Process every remaining vertex one by one.
- Check all adjacent vertices.
- Mark the colors already used by adjacent vertices as unavailable.
- Assign the first available color that is not used by any adjacent vertex.

**Step 5:** After all vertices are colored, return the `color[]` array.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Initializing the color array takes **O(V)** time.
2. Each vertex is processed once.
3. For every vertex, all adjacent vertices are checked.

Using an **Adjacency Matrix**:

- For each of the **V** vertices, checking adjacent vertices takes **O(V)**.

Therefore,

**Time Complexity = O(V × V) = O(V²)**

---

### Using Adjacency List

- Every vertex is visited once.
- Every edge is examined once while checking adjacent vertices.

Therefore,

**Time Complexity = O(V + E)**

where,
- **V** = Number of vertices
- **E** = Number of edges

---

### Best Case

- **O(V²)** (Adjacency Matrix)
- **O(V + E)** (Adjacency List)

---

### Average Case

- **O(V²)** (Adjacency Matrix)
- **O(V + E)** (Adjacency List)

---

### Worst Case

- **O(V²)** (Adjacency Matrix)
- **O(V + E)** (Adjacency List)

---

## Space Complexity (Detailed)

Extra memory used:

- Color array `color[]` → **O(V)**
- Availability array `available[]` → **O(V)**

Therefore,

**Auxiliary Space Complexity = O(V)**

> **Note:** The graph representation (Adjacency Matrix/List) is considered input and is **not** included in the auxiliary space complexity.

---

## Key Points

- It is a **Greedy Algorithm**.
- Adjacent vertices must **not have the same color**.
- The algorithm assigns the **first available color** to each vertex.
- It **does not always produce the minimum possible number of colors**.
- The minimum number of colors required to color a graph is called the **Chromatic Number**.
- Used in **timetabling, register allocation in compilers, map coloring, frequency assignment, and scheduling problems**.