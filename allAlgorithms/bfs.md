# Breadth First Search (BFS) Traversal

## Definition

**Breadth First Search (BFS)** is a **graph traversal** algorithm that visits the vertices of a graph **level by level**. It starts from a given source vertex and explores all its adjacent vertices before moving to the next level. BFS uses a **Queue** to maintain the order of traversal.

---

## Algorithm

**Algorithm: Breadth First Search (BFS)**

**Input :**
- A graph \(G(V, E)\)
- A starting (source) vertex `s`

**Output :**
- BFS traversal of the graph.

```text
Algorithm: Breadth First Search (BFS)

Input :
    A graph G(V, E)
    Starting vertex s

Output :
    BFS traversal of the graph.

1. Create an array visited[] of size |V|.
2. Initialize all vertices as unvisited.
3. Create an empty Queue.
4. Mark the starting vertex as visited.
5. Insert the starting vertex into the Queue.
6. Repeat until the Queue becomes empty:
      a) Remove the front vertex from the Queue.
      b) Visit the removed vertex.
      c) For every adjacent vertex of the removed vertex:
            i) If the adjacent vertex is unvisited:
                  • Mark it as visited.
                  • Insert it into the Queue.
7. Return the BFS traversal.
```

---

## Explanation

### Step 1:
Create the `visited[]` array to keep track of the vertices that have already been visited.

### Step 2:
Initialize all vertices as **unvisited**.

### Step 3:
Create an empty **Queue** to store the vertices that are to be processed.

### Step 4:
Mark the starting vertex as **visited** and insert it into the Queue.

### Step 5:
Remove the front vertex from the Queue and visit it.

### Step 6:
Visit all adjacent vertices of the current vertex. If an adjacent vertex has not been visited, mark it as visited and insert it into the Queue.

### Step 7:
Repeat the process until the Queue becomes empty.

### Step 8:
Return the BFS traversal.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Initializing the `visited[]` array requires **O(V)** time.

2. Every vertex is inserted into and removed from the Queue at most once.
   - Total time = **O(V)**.

3. Every edge is examined once (or twice in an undirected graph).
   - Total time = **O(E)**.

Therefore,

**Overall Time Complexity = O(V + E)**

### Best Case

- Every vertex and edge is still processed once.

**Best Case Time Complexity = O(V + E)**

### Average Case

- Every reachable vertex and edge is processed once.

**Average Case Time Complexity = O(V + E)**

### Worst Case

- All vertices and edges of the graph are visited.

**Worst Case Time Complexity = O(V + E)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- `visited[]` → **O(V)**

### Auxiliary Data Structures

- Queue → **O(V)**

### Auxiliary Space Complexity

**Auxiliary Space = O(V)**

**Note:** The graph representation (Adjacency List or Adjacency Matrix) is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses a **Queue (FIFO)**.
- Traverses the graph **level by level**.
- Visits each vertex exactly once.
- Suitable for both directed and undirected graphs.
- Finds the **shortest path in an unweighted graph**.
- Time complexity is **O(V + E)**.
- Space complexity is **O(V)**.
- Can be used to check graph connectivity and perform level-order traversal.

---

## Exam Tip

- **Common Viva Question:** Why does BFS use a Queue?
  - **Answer:** Because a Queue follows the **First In, First Out (FIFO)** principle, ensuring that vertices are visited level by level.

- **Common Mistake:** Do **not** mark a vertex as visited **after removing it from the Queue**. Mark it as visited **before inserting it into the Queue** to avoid inserting the same vertex multiple times.