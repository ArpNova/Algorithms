# Kruskal's Algorithm

## Definition

**Kruskal's Algorithm** is a **Greedy** algorithm used to find the **Minimum Spanning Tree (MST)** of a connected, weighted, undirected graph. It repeatedly selects the **minimum weight edge** that does not form a cycle until the MST contains **(V − 1)** edges.

---

## Algorithm

**Algorithm: Kruskal's Algorithm**

**Input :**
- A connected weighted graph `G(V, E)`

**Output :**
- Minimum Spanning Tree (MST)

```text
Algorithm: Kruskal's Algorithm

Input :
    A connected weighted graph G(V, E)

Output :
    Minimum Spanning Tree (MST)

1. Arrange all the edges in increasing order of their weights.
2. Initialize the MST as an empty set.
3. Select the edge with the smallest weight.
4. If adding the selected edge does not form a cycle,
      add it to the MST.
   Otherwise,
      discard the edge.
5. Repeat Steps 3 and 4 until (V − 1) edges are included in the MST.
6. Return the Minimum Spanning Tree.
```

---

## Explanation

### Step 1:
Arrange all the edges of the graph in **ascending order of their weights**.

### Step 2:
Initialize the **Minimum Spanning Tree (MST)** as an empty set.

### Step 3:
Select the edge having the **smallest weight** from the sorted list.

### Step 4:
Check whether adding the selected edge forms a **cycle**.

### Step 5:
- If no cycle is formed, add the edge to the MST.
- Otherwise, discard the edge.

### Step 6:
Continue selecting edges in increasing order of weight until the MST contains exactly **(V − 1)** edges.

### Step 7:
Return the completed Minimum Spanning Tree.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. **Sorting the Edges**
   - Sorting all **E** edges requires **O(E log E)** time.

2. **Processing the Edges**
   - Each edge is checked once for cycle formation.
   - Using the **Disjoint Set (Union-Find)** data structure, cycle detection is nearly constant time per edge.

Therefore,

**Overall Time Complexity = O(E log E)**

Since **E log E ≈ E log V**, it is also commonly written as:

**Overall Time Complexity = O(E log V)**

### Best Case

- Sorting is still required.

**Best Case Time Complexity = O(E log E)**

### Average Case

- All edges are processed after sorting.

**Average Case Time Complexity = O(E log E)**

### Worst Case

- Every edge is examined before obtaining the MST.

**Worst Case Time Complexity = O(E log E)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Parent array (Disjoint Set) → **O(V)**
- Rank/Height array (if used) → **O(V)**

### Auxiliary Data Structures

- Disjoint Set (Union-Find) → **O(V)**

### Auxiliary Space Complexity

**Auxiliary Space = O(V)**

**Note:** The graph and the list of edges are part of the input and are **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Greedy** technique.
- Finds the **Minimum Spanning Tree (MST)**.
- Selects edges in **increasing order of weight**.
- Avoids cycle formation while adding edges.
- Uses the **Disjoint Set (Union-Find)** data structure for efficient cycle detection.
- Works for **connected, weighted, undirected graphs**.
- An MST contains exactly **(V − 1)** edges.
- Time complexity is **O(E log E)**.

---

## Exam Tip

- **Common Viva Question:** What data structure is commonly used in Kruskal's Algorithm for cycle detection?
  - **Answer:** The **Disjoint Set (Union-Find)** data structure using **MAKE-SET, FIND-SET, and UNION** operations.

- **Common Mistake:** Do **not** simply write "check for a cycle." In theory and standard textbooks, cycle detection in Kruskal's Algorithm is performed using the **Disjoint Set (Union-Find)** data structure.