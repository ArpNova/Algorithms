# m-Coloring Problem (Backtracking)

## Definition

The **m-Coloring Problem** is a **Backtracking Algorithm** used to determine whether a graph can be colored using at most **m colors** such that no two adjacent vertices have the same color.

---

## Algorithm

```text
Algorithm: m-Coloring (Backtracking)

Input :
    Graph G(V, E)
    Number of colors m

Output :
    A valid coloring of the graph using at most m colors,
    or report that no such coloring exists.

1. Create an array color[] of size V.
2. Initialize color[i] = 0 for all vertices.
3. Start with the first vertex (vertex 0).
4. For the current vertex:
      a) Try each color from 1 to m.
      b) Check whether assigning the color is safe
         (i.e., no adjacent vertex has the same color).
      c) If safe:
            i) Assign the color to the current vertex.
           ii) Recursively color the next vertex.
      d) If all vertices are successfully colored,
         return TRUE.
      e) Otherwise,
         remove the assigned color (Backtrack)
         and try the next color.
5. If no color can be assigned to the current vertex,
   return FALSE.
6. Return the color[] array if coloring is possible;
   otherwise report "No solution exists."
```

---

## Explanation

**Step 1:** Create a `color[]` array to store the color assigned to each vertex.

**Step 2:** Initialize every vertex with color `0`, meaning "no color assigned."

**Step 3:** Start coloring from the first vertex.

**Step 4:** For each vertex:
- Try all colors from **1 to m**.
- Check whether assigning the current color violates the graph coloring rule.
- If it is safe, assign the color and recursively color the next vertex.
- If a solution cannot be found, remove the assigned color and try another color (Backtracking).

**Step 5:** If none of the `m` colors can be assigned, return `FALSE`.

**Step 6:** If all vertices are colored successfully, return the `color[]` array.

---

## Time Complexity (Detailed)

### Step-wise Analysis

For every vertex:

- Up to **m** colors may be tried.

For **V** vertices,

Maximum number of possibilities =

**m × m × ... × m (V times)**

= **mᴠ**

Therefore,

**Worst Case Time Complexity = O(mᴠ)**

---

### Best Case

**O(V)**

If the first color tried for every vertex is valid, only one color is checked per vertex.

---

### Average Case

Depends on the graph structure.

Generally written as:

**O(mᴠ)**

---

### Worst Case

**O(mᴠ)**

The algorithm may need to explore all possible color assignments before concluding that no valid coloring exists.

---

## Space Complexity (Detailed)

Extra memory used:

- Color array `color[]` → **O(V)**
- Recursion stack → **O(V)**

Therefore,

**Auxiliary Space Complexity = O(V)**

---

## Key Points

- It is a **Backtracking Algorithm**.
- Input includes the **number of colors (m)**.
- Tries colors from **1 to m** for every vertex.
- If a conflict occurs, it **backtracks**.
- Finds a valid coloring if one exists.
- If no coloring is possible using **m** colors, it reports **"No solution exists."**

---

## Applications

- Map Coloring
- Timetable Scheduling
- Register Allocation
- Frequency Assignment
- Sudoku and Constraint Satisfaction Problems