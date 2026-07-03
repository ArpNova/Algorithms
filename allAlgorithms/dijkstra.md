# Dijkstra's Algorithm

## Definition

**Dijkstra's Algorithm** is a **Greedy Algorithm** used to find the **shortest path** from a **source vertex** to all other vertices in a weighted graph having **non-negative edge weights**. It repeatedly selects the unvisited vertex with the minimum distance and updates the distances of its adjacent vertices until the shortest path to every vertex is obtained.

---

## Algorithm

```text
Algorithm: Dijkstra's Algorithm

Input :
    Weighted graph G(V, E)
    Source vertex S

Output :
    dist[] containing the shortest distance from S to every vertex.

1. Create a distance array dist[] of size V.
2. Create a visited array visited[] of size V.
3. Initialize dist[i] = ∞ and visited[i] = FALSE for all vertices.
4. Set dist[S] = 0.
5. Repeat (V − 1) times:
      a) Select the unvisited vertex u having the minimum value in dist[].
      b) Mark visited[u] = TRUE.
      c) For every adjacent vertex v of u:
            if visited[v] = FALSE and
               dist[u] + weight(u, v) < dist[v]
               then
                   dist[v] = dist[u] + weight(u, v)
6. Return dist[].
```

---

## Explanation

**Step 1:** Create a distance array `dist[]` to store the shortest distance from the source vertex to every other vertex.

**Step 2:** Create a `visited[]` array to keep track of the vertices whose shortest distance has already been finalized.

**Step 3:** Initialize all distances as **∞ (infinity)** because initially no path is known. Mark every vertex as **FALSE**, indicating that no vertex has been visited.

**Step 4:** Set the distance of the source vertex to **0** because the distance from the source to itself is zero.

**Step 5:** Repeat the following until all vertices are processed:
- Select the unvisited vertex having the minimum distance.
- Mark it as visited.
- Check all its adjacent vertices.
- If a shorter path to an adjacent vertex is found through the current vertex, update its distance.

**Step 6:** Return the `dist[]` array, which contains the shortest distance from the source vertex to every other vertex.

---

## Time Complexity (Detailed)

### Using Adjacency Matrix

1. Initializing `dist[]` and `visited[]` takes **O(V)** time.
2. Finding the minimum-distance unvisited vertex requires **O(V)** time.
3. This selection is performed for all **V** vertices.

Therefore,

- Selecting minimum vertex = **O(V × V) = O(V²)**
- Updating adjacent vertices also takes at most **O(V)** per iteration.

Hence,

**Overall Time Complexity = O(V²)**

---

### Using Adjacency List + Priority Queue (Min-Heap)

1. Initializing arrays takes **O(V)** time.
2. Each insertion and deletion from the priority queue takes **O(log V)** time.
3. Every edge is relaxed at most once.

Therefore,

- Heap operations = **O(V log V)**
- Edge relaxation = **O(E log V)**

Hence,

**Overall Time Complexity = O(E log V)**

---

### Best Case

- **O(V²)** using Adjacency Matrix.
- **O(E log V)** using Priority Queue.

Even in the best case, all reachable vertices must be processed.

---

### Average Case

- **O(V²)** (Adjacency Matrix)
- **O(E log V)** (Priority Queue)

---

### Worst Case

- **O(V²)** (Adjacency Matrix)
- **O(E log V)** (Priority Queue)

---

## Space Complexity (Detailed)

Extra memory used by the algorithm:

- Distance array `dist[]` → **O(V)**
- Visited array `visited[]` → **O(V)**
- Priority Queue (Min-Heap implementation) → **O(V)**

Therefore,

**Auxiliary Space Complexity = O(V)**

> **Note:** The graph itself (Adjacency Matrix or Adjacency List) is considered the input and is **not** included in the auxiliary space complexity.

---

## Key Points

- It is a **Greedy Algorithm**.
- Used to find the **shortest path from one source vertex to all other vertices**.
- Works only for **graphs with non-negative edge weights**.
- Uses a **distance array (`dist[]`)** to store the shortest distances.
- Uses a **visited array (`visited[]`)** to ensure each vertex is processed only once.
- Always selects the **unvisited vertex with the minimum distance**.
- Returns the **`dist[]` array** containing the shortest distance from the source to every vertex.
- If the graph contains **negative edge weights**, **Dijkstra's Algorithm cannot be used**. In that case, **Bellman-Ford Algorithm** is preferred.