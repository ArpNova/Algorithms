# Heapify Algorithm (Max Heap)

## Definition

**Heapify** is an operation used in a **Binary Heap** to restore the **Max Heap property** after a node violates it. It compares a parent node with its children and moves the larger child upward until the Max Heap property is satisfied. Heapify is a fundamental operation used in **Heap Sort** and **Priority Queues**.

---

## Algorithm

**Algorithm: Max Heapify**

**Input :**
- An array `A` representing a Max Heap.
- Index `i` of the node to be heapified.
- Size `n` of the heap.

**Output :**
- A Max Heap with the heap property restored.

```text
Algorithm: Max Heapify

Input :
    An array A representing a Max Heap
    Index i of the node to be heapified
    Size n of the heap

Output :
    Max Heap after restoring the heap property

1. Consider the node at index i as the current node.
2. Compare the current node with its left child.
3. Compare the current node with its right child.
4. Identify the largest among the current node and its two children.
5. If the current node is already the largest:
      a) Stop, as the Max Heap property is satisfied.
6. Otherwise:
      a) Swap the current node with the largest child.
      b) Repeat the Heapify process for the subtree rooted at the child where the swap occurred.
7. Return the Max Heap.
```

---

## Explanation

### Step 1:
Start with the node at index `i`, where the Max Heap property may be violated.

### Step 2:
Compare the current node with its **left child**.

### Step 3:
Compare the current node with its **right child**.

### Step 4:
Find the largest among the current node and its two children.

### Step 5:
If the current node is already the largest, no changes are required because the Max Heap property is satisfied.

### Step 6:
If one of the children is larger, swap the current node with the larger child.

### Step 7:
Since the swap may violate the Max Heap property in the affected subtree, repeat the Heapify process for that subtree.

### Step 8:
Continue until the Max Heap property is restored throughout the heap.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. In each step, Heapify moves down **one level** of the heap.

2. A Binary Heap has a height of **log₂n**.

3. At each level, only a constant number of comparisons and one possible swap are performed.

Therefore,

**Overall Time Complexity = O(log n)**

### Best Case

- The current node already satisfies the Max Heap property.

**Best Case Time Complexity = O(1)**

### Average Case

- The node moves down a few levels of the heap.

**Average Case Time Complexity = O(log n)**

### Worst Case

- The node moves from the root to the lowest level of the heap.

**Worst Case Time Complexity = O(log n)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- No auxiliary arrays are required.

### Auxiliary Data Structures

- No additional auxiliary data structures are required (iterative implementation).

### Auxiliary Space Complexity

**Auxiliary Space = O(1)**

**Note:** If Heapify is implemented recursively, the recursion stack requires **O(log n)** auxiliary space.

---

## Key Points

- Restores the **Max Heap property**.
- Used in **Heap Sort** and **Priority Queues**.
- Compares a parent node with its children.
- Swaps with the **largest child** when necessary.
- Continues until the heap property is restored.
- Worst-case time complexity is **O(log n)**.
- Iterative implementation requires **O(1)** auxiliary space.
- Building a heap repeatedly uses the Heapify operation.

---

## Exam Tip

- **Common Viva Question:** What is the purpose of Heapify?
  - **Answer:** Heapify restores the **Max Heap property** by moving a node downward until every parent node is greater than or equal to its children.

- **Common Mistake:** Do **not** say that Heapify creates a heap from an unsorted array. **Heapify restores the heap property for a subtree**, whereas **Build Heap** constructs the entire heap from an array.