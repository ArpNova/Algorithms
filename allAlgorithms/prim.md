# Prim's Algorithm

## Definition

**Prim's Algorithm** is a **Greedy** algorithm used to find the **Minimum Spanning Tree (MST)** of a connected, weighted, undirected graph. It starts from any vertex and repeatedly adds the minimum weight edge that connects a visited vertex to an unvisited vertex until all vertices are included in the MST.

---

## Algorithm

**Algorithm: Prim's Algorithm**

**Input :**
- A connected weighted graph \(G(V, E)\)

**Output :**
- Minimum Spanning Tree (MST)

```text
Algorithm: Prim's Algorithm

Input :
    A connected weighted graph G(V, E)

Output :
    Minimum Spanning Tree (MST)

1. Create an array visited[] of size |V|.
2. Initialize all vertices as unvisited.
3. Choose any vertex as the starting vertex.
4. Mark the starting vertex as visited.
5. Repeat until (V − 1) edges are selected:
      a) Find the minimum weight edge that connects
         a visited vertex to an unvisited vertex.
      b) Add this edge to the Minimum Spanning Tree.
      c) Mark the newly selected vertex as visited.
6. Return the Minimum Spanning Tree.
```

---

## Explanation

### Step 1:
Create a `visited[]` array to keep track of the vertices that have already been included in the Minimum Spanning Tree.

### Step 2:
Initialize all vertices as **unvisited**.

### Step 3:
Choose any vertex as the starting vertex since Prim's Algorithm can begin from any vertex in the graph.

### Step 4:
Mark the starting vertex as **visited** and include it in the growing Minimum Spanning Tree.

### Step 5:
Among all edges connecting a visited vertex to an unvisited vertex, select the edge with the **minimum weight**.

### Step 6:
Add the selected edge to the Minimum Spanning Tree and mark the newly connected vertex as **visited**.

### Step 7:
Repeat the process until exactly **(V − 1)** edges have been selected.

### Step 8:
Return the Minimum Spanning Tree.

---

## Time Complexity (Detailed)

### Step-wise Analysis

#### Using the Standard Simple Implementation (without Priority Queue)

1. Initializing the `visited[]` array requires **O(V)** time.

2. For each of the **(V − 1)** edges of the MST, all possible edges connecting visited and unvisited vertices may need to be examined.

3. This requires approximately **O(V²)** operations.

Therefore,

**Overall Time Complexity = O(V²)**

### Using a Min Priority Queue (Heap)

- Building and updating the Priority Queue requires **O(E log V)** time.

### Best Case

- **O(V²)** (Simple implementation)
- **O(E log V)** (Using Priority Queue)

### Average Case

- **O(V²)** (Simple implementation)
- **O(E log V)** (Using Priority Queue)

### Worst Case

- **O(V²)** (Simple implementation)
- **O(E log V)** (Using Priority Queue)

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- `visited[]` → **O(V)**

### Auxiliary Data Structures

- **Simple implementation:** No additional data structure.
- **Priority Queue implementation:** Min Priority Queue → **O(V)**

### Auxiliary Space Complexity

- **Simple implementation:** **O(V)**
- **Priority Queue implementation:** **O(V)**

**Note:** The graph itself is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Greedy** technique.
- Finds the **Minimum Spanning Tree (MST)**.
- Works only for **connected, weighted, undirected graphs**.
- Starts from **any vertex**.
- Always selects the **minimum weight edge** connecting a visited vertex to an unvisited vertex.
- An MST of a graph with **V vertices contains exactly (V − 1) edges**.
- Does **not** form a cycle.
- Can be efficiently implemented using a **Min Priority Queue (Min Heap)**.

---

## Exam Tip

- **Common Viva Question:** What is the difference between Prim's Algorithm and Kruskal's Algorithm?
  - **Answer:** Prim's Algorithm grows a **single tree** by repeatedly selecting the minimum edge connected to the existing tree, whereas Kruskal's Algorithm selects the globally smallest edge and gradually merges disconnected components using **Disjoint Sets (MAKE-SET, FIND-SET, UNION)**.

- **Common Mistake:** Do **not** write that Prim's Algorithm selects the globally smallest edge in the graph. It selects the **smallest edge connecting a visited vertex to an unvisited vertex**.