# Bellman-Ford Algorithm

## Definition

**Bellman-Ford Algorithm** is a **Dynamic Programming-based shortest path algorithm** used to find the **shortest path** from a **single source vertex** to all other vertices in a weighted graph. Unlike Dijkstra's Algorithm, it can handle **negative edge weights** and can also detect the presence of **negative weight cycles**.

---

## Algorithm

```text
Algorithm: Bellman-Ford Algorithm

Input :
    Weighted graph G(V, E)
    Source vertex S

Output :
    dist[] containing the shortest distance from S to every vertex
    or report a negative weight cycle.

1. Create a distance array dist[] of size V.
2. Initialize dist[i] = ∞ for all vertices.
3. Set dist[S] = 0.
4. Repeat (V − 1) times:
      a) For every edge (u, v) with weight w:
            if dist[u] ≠ ∞ and
               dist[u] + w < dist[v]
               then
                   dist[v] = dist[u] + w
5. For every edge (u, v) with weight w:
      if dist[u] ≠ ∞ and
         dist[u] + w < dist[v]
         then
             Report "Negative Weight Cycle Exists"
             Stop.
6. Return dist[].
```

---

## Explanation

**Step 1:** Create a `dist[]` array to store the shortest distance from the source vertex to every other vertex.

**Step 2:** Initialize all distances to **∞ (infinity)** because initially no shortest path is known.

**Step 3:** Set the distance of the source vertex to **0** since the distance from the source to itself is zero.

**Step 4:** Relax all edges **(V − 1)** times.
- For every edge `(u, v)`, check whether going from `u` to `v` gives a shorter path.
- If yes, update the distance of `v`.

**Step 5:** Traverse all edges one more time.
- If any distance can still be reduced, it means a **negative weight cycle** exists in the graph.

**Step 6:** If no negative cycle exists, return the `dist[]` array containing the shortest distance from the source to every vertex.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Initializing the distance array takes **O(V)** time.
2. There are **E** edges in the graph.
3. Every edge is relaxed **(V − 1)** times.

Therefore,

- Edge relaxation = **O((V − 1) × E)**
- Negative cycle detection = **O(E)**

Hence,

**Overall Time Complexity = O(V × E)**

---

### Best Case

**O(V × E)**

Even if distances become stable early, the standard Bellman-Ford Algorithm still performs **(V − 1)** relaxation passes.

---

### Average Case

**O(V × E)**

---

### Worst Case

**O(V × E)**

---

## Space Complexity (Detailed)

Extra memory used:

- Distance array `dist[]` → **O(V)**

Therefore,

**Auxiliary Space Complexity = O(V)**

> **Note:** The graph representation (edge list, adjacency list, or adjacency matrix) is considered input and is **not** included in the auxiliary space complexity.

---

## Key Points

- Finds the **shortest path from one source vertex to all other vertices**.
- Works with **positive and negative edge weights**.
- Can **detect negative weight cycles**.
- Relaxes every edge exactly **(V − 1)** times.
- Performs one additional iteration to check for a **negative weight cycle**.
- Returns the `dist[]` array containing the shortest distance from the source to every vertex.

---

## Difference Between Dijkstra's Algorithm and Bellman-Ford Algorithm

| Dijkstra's Algorithm | Bellman-Ford Algorithm |
|----------------------|------------------------|
| Greedy Algorithm | Dynamic Programming-based Algorithm |
| Works only with non-negative edge weights | Works with positive and negative edge weights |
| Cannot detect negative weight cycles | Detects negative weight cycles |
| Time Complexity: **O(E log V)** (Min-Heap) | Time Complexity: **O(V × E)** |
| Faster | Slower |
| Used when all edge weights are non-negative | Used when negative edge weights may exist |