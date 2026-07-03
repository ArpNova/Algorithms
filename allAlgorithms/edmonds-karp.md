# Edmonds–Karp Algorithm

## Definition

The **Edmonds–Karp Algorithm** is a **Greedy** algorithm used to find the **maximum flow** in a flow network. It is a specific implementation of the **Ford–Fulkerson Algorithm** that uses **Breadth First Search (BFS)** to find the shortest augmenting path (in terms of the number of edges) in the residual graph. It guarantees a polynomial running time.

---

## Algorithm

**Algorithm: Edmonds–Karp Algorithm**

**Input :**
- A flow network \(G(V, E)\)
- Source vertex `s`
- Sink vertex `t`
- Capacity of each edge

**Output :**
- Maximum flow from the source to the sink.

```text
Algorithm: Edmonds–Karp Algorithm

Input :
    A flow network G(V, E)
    Source vertex s
    Sink vertex t
    Capacity of each edge

Output :
    Maximum flow from source to sink.

1. Initialize the flow of every edge to 0.
2. Construct the residual graph using the given capacities.
3. Initialize MaxFlow = 0.
4. Repeat while a path exists from the source to the sink in the residual graph:
      a) Use Breadth First Search (BFS) to find the shortest
         augmenting path from the source to the sink.
      b) Determine the minimum residual capacity (bottleneck capacity)
         along the augmenting path.
      c) Increase the flow of every edge in the augmenting path by the
         bottleneck capacity.
      d) Update the residual capacities of the forward and reverse edges.
      e) Add the bottleneck capacity to MaxFlow.
5. Return MaxFlow.
```

---

## Explanation

### Step 1:
Initialize the flow of every edge to **0**.

### Step 2:
Construct the **residual graph**, which stores the remaining capacity available on every edge.

### Step 3:
Initialize the maximum flow as **0**.

### Step 4:
Use **Breadth First Search (BFS)** to find the shortest augmenting path from the source to the sink in the residual graph.

### Step 5:
Find the **minimum residual capacity** (bottleneck capacity) among all edges in the augmenting path.

### Step 6:
Increase the flow along every edge of the augmenting path by the bottleneck capacity.

### Step 7:
Update the residual graph by decreasing the residual capacity of forward edges and increasing the residual capacity of reverse edges.

### Step 8:
Add the bottleneck capacity to the current maximum flow.

### Step 9:
Repeat the process until BFS cannot find any augmenting path from the source to the sink.

### Step 10:
Return the maximum flow.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Each augmenting path is found using **Breadth First Search (BFS)**.
   - BFS requires **O(E)** time.

2. The number of augmenting paths found by the algorithm is at most **O(VE)**.

3. Therefore, the total running time is:

\[
O(E) \times O(VE) = O(VE^2)
\]

Therefore,

**Overall Time Complexity = O(VE²)**

### Best Case

- Even if the maximum flow is found quickly, BFS is used for every augmentation.

**Best Case Time Complexity = O(VE²)**

### Average Case

- Depends on the structure of the flow network.

**Average Case Time Complexity = O(VE²)**

### Worst Case

- Maximum possible number of augmenting paths is explored.

**Worst Case Time Complexity = O(VE²)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- `visited[]` → **O(V)**
- `parent[]` → **O(V)**

### Auxiliary Data Structures

- Queue (used by BFS) → **O(V)**
- Residual Graph → **O(E)**

### Auxiliary Space Complexity

**Auxiliary Space = O(V + E)**

**Note:** The original flow network is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- It is a **special implementation of the Ford–Fulkerson Algorithm**.
- Uses **Breadth First Search (BFS)** to find augmenting paths.
- Always selects the **shortest augmenting path** (minimum number of edges).
- Uses a **Residual Graph**.
- Updates both **forward** and **reverse** edge capacities.
- Guarantees a polynomial time complexity of **O(VE²)**.
- Produces the **maximum flow** in the network.
- More efficient and predictable than the standard Ford–Fulkerson Algorithm.

---

## Exam Tip

- **Common Viva Question:** What is the main difference between Ford–Fulkerson and Edmonds–Karp?
  - **Answer:** Ford–Fulkerson can use **any method** (commonly DFS) to find an augmenting path, whereas Edmonds–Karp **always uses BFS** to find the shortest augmenting path. This gives Edmonds–Karp a guaranteed time complexity of **O(VE²)**.

- **Common Mistake:** Do **not** write that Edmonds–Karp searches the original graph. It always performs **BFS on the residual graph** to find augmenting paths.