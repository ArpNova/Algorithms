# Graph Coloring Problem (Greedy Graph Coloring)

## Definition

The **Graph Coloring Problem** is the problem of assigning colors to the vertices of a graph such that **no two adjacent vertices have the same color**. The **Greedy Graph Coloring Algorithm** is a **Greedy** technique that assigns the smallest available color to each vertex one by one. It aims to produce a valid coloring using a reasonable number of colors, though it does **not always produce the minimum possible number of colors**.

---

## Algorithm

**Algorithm: Greedy Graph Coloring**

**Input :**
- A graph \( G = (V, E) \) represented using an adjacency list or adjacency matrix.

**Output :**
- `color[]` containing the color assigned to each vertex.

```text
1. Create an array color[] of size |V|.
2. Initialize color[i] = -1 for every vertex i.

3. Assign the first color (Color 0) to the first vertex.
      color[0] = 0

4. Create an array available[] of size |V|.

5. For each remaining vertex u = 1 to |V| − 1:

      a. Initialize all colors as available.
            available[i] = true for all i

      b. For every adjacent vertex v of u:
            If color[v] ≠ -1
                  available[color[v]] = false

      c. Find the first available color c
            such that available[c] = true.

      d. Assign
            color[u] = c

6. Return color[].
```

---

## Explanation

### Step 1:
Create the `color[]` array to store the color assigned to every vertex. Initially, no vertex has a color, so all entries are set to **-1**.

### Step 2:
Assign the first color (**Color 0**) to the first vertex since no neighboring vertices have been colored yet.

### Step 3:
Create the `available[]` array. This array keeps track of which colors can be assigned to the current vertex.

### Step 4:
Process each remaining vertex one by one.

### Step 5:
Before coloring a vertex, mark every color as available.

### Step 6:
Visit every adjacent vertex. If an adjacent vertex already has a color, mark that color as unavailable.

### Step 7:
Choose the first available color that is not used by any adjacent vertex.

### Step 8:
Assign the selected color to the current vertex.

### Step 9:
Repeat the process until every vertex is colored.

### Step 10:
Return the `color[]` array containing the color assigned to every vertex.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Initializing `color[]`
   - Takes **O(V)** time.

2. Initializing `available[]`
   - Done for every vertex.
   - Costs **O(V)** per vertex.
   - Total = **O(V²)**.

3. Checking all adjacent vertices
   - Across the entire graph, every edge is examined once (or twice in an undirected graph).
   - Total = **O(E)**.

4. Finding the first available color
   - In the worst case, checks at most **V** colors for each vertex.
   - Total = **O(V²)**.

Therefore,

**Overall Time Complexity = O(V² + E)**

For a dense graph where \(E = O(V^2)\), the complexity becomes:

**Overall Time Complexity = O(V²)**

### Best Case

- Every new vertex can use the first available color.
- Time Complexity = **O(V² + E)**

### Average Case

- Similar to the worst case because each vertex still checks available colors and adjacent vertices.
- Time Complexity = **O(V² + E)**

### Worst Case

- Every vertex requires checking many colors.
- Time Complexity = **O(V² + E)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- `color[]` → **O(V)**
- `available[]` → **O(V)**

### Auxiliary Data Structures

- No additional auxiliary data structures are used.

### Auxiliary Space Complexity

**Auxiliary Space = O(V)**

**Note:** The graph (adjacency list or adjacency matrix) is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- It is a **Greedy Algorithm**.
- Adjacent vertices must have different colors.
- Colors are assigned one vertex at a time.
- Always selects the **smallest available color**.
- Does **not** always produce the minimum number of colors (chromatic number).
- Works with both adjacency lists and adjacency matrices.
- Simple to implement and efficient for practical use.
- Common applications include timetable scheduling, register allocation in compilers, map coloring, and frequency assignment.

---

## Exam Tip

- **Common Viva Question:** Does the Greedy Graph Coloring algorithm always produce the minimum number of colors?
  - **Answer:** No. It produces a **valid coloring**, but not necessarily the **optimal (minimum) coloring**.

- **Common Mistake:** Do **not** confuse **Greedy Graph Coloring** with the **m-Coloring Problem**. The Greedy algorithm colors vertices one by one without backtracking, whereas the m-Coloring Problem uses **Backtracking** to determine whether the graph can be colored using at most **m** colors.