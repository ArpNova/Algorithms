# Ford–Fulkerson Algorithm

## Definition

The **Ford–Fulkerson Algorithm** is a **Greedy** algorithm used to find the **maximum flow** in a flow network. It repeatedly finds an **augmenting path** from the source to the sink in the residual graph and increases the flow along that path until no more augmenting paths exist.

---

## Algorithm

**Algorithm: Ford–Fulkerson Algorithm**

**Input :**
- A flow network \(G(V, E)\)
- Source vertex `s`
- Sink vertex `t`
- Capacity of each edge

**Output :**
- Maximum flow from the source to the sink.

```text
Algorithm: Ford–Fulkerson Algorithm

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
4. Repeat while an augmenting path exists from the source to the sink in the residual graph:
      a) Find an augmenting path from the source to the sink.
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
Initialize the flow on every edge to **0**, since initially no flow is sent through the network.

### Step 2:
Construct the **residual graph**, which represents the remaining capacity available on each edge.

### Step 3:
Initialize the maximum flow as **0**.

### Step 4:
Search for an **augmenting path** from the source to the sink in the residual graph.

### Step 5:
Find the **minimum residual capacity** along the augmenting path. This value is called the **bottleneck capacity** because it limits the amount of additional flow that can be sent.

### Step 6:
Increase the flow along every edge of the augmenting path by the bottleneck capacity.

### Step 7:
Update the residual graph by decreasing the residual capacity of forward edges and increasing the residual capacity of reverse edges.

### Step 8:
Add the bottleneck capacity to the current maximum flow.

### Step 9:
Repeat the process until no augmenting path exists in the residual graph.

### Step 10:
Return the maximum flow.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Finding one augmenting path using DFS requires **O(E)** time.

2. Let the maximum flow of the network be **F**.

3. In the worst case, the algorithm may find **F** augmenting paths, increasing the flow by only one unit in each iteration.

Therefore,

**Overall Time Complexity = O(E × F)**

> **Note:** If BFS is used to find the augmenting path (Edmonds–Karp Algorithm), the time complexity becomes **O(VE²)**.

### Best Case

- Large amounts of flow are added in each augmentation, requiring fewer iterations.

**Best Case Time Complexity = O(E)** (approximately)

### Average Case

- Depends on the number of augmenting paths and the network capacities.

### Worst Case

- Flow increases by only one unit in each iteration.

**Worst Case Time Complexity = O(E × F)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- `visited[]` (for finding augmenting paths) → **O(V)**
- `parent[]` (to store the augmenting path) → **O(V)**

### Auxiliary Data Structures

- Residual Graph → **O(E)**

### Auxiliary Space Complexity

**Auxiliary Space = O(V + E)**

**Note:** The original flow network is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Greedy** technique.
- Finds the **maximum flow** in a flow network.
- Uses a **Residual Graph**.
- Repeatedly finds an **augmenting path**.
- Updates both **forward** and **reverse** edge capacities.
- Stops when no augmenting path exists.
- Standard implementation uses **DFS** to find augmenting paths.
- The Edmonds–Karp Algorithm is a BFS-based implementation of Ford–Fulkerson.

---

## Exam Tip

- **Common Viva Question:** What is an augmenting path?
  - **Answer:** An augmenting path is a path from the **source** to the **sink** in the residual graph where every edge has **positive residual capacity**.

- **Common Mistake:** Do **not** confuse the **original graph** with the **residual graph**. Ford–Fulkerson always searches for augmenting paths in the **residual graph**, not in the original flow network.