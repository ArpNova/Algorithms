# Heap Sort

## Definition

**Heap Sort** is a **comparison-based** sorting algorithm that uses the **Binary Heap** data structure. It first builds a **Max Heap** from the given array and then repeatedly removes the largest element (root of the heap) and places it at the end of the array until the array becomes sorted.

---

## Algorithm

**Algorithm: Heap Sort**

**Input :**
- An array `A` containing `n` elements.

**Output :**
- Sorted array in ascending order.

```text
Algorithm: Heap Sort

Input :
    An array A containing n elements

Output :
    Sorted array in ascending order

1. Build a Max Heap from the given array.
2. Repeat until only one element remains in the heap:
      a) Swap the root element (largest element) with the last element of the heap.
      b) Reduce the size of the heap by one.
      c) Restore the Max Heap property by applying Heapify to the root.
3. Return the sorted array.
```

---

## Explanation

### Step 1:
Convert the given array into a **Max Heap**, where every parent node is greater than or equal to its child nodes.

### Step 2:
The root of the Max Heap always contains the **largest element**.

### Step 3:
Swap the root element with the last element of the heap.

### Step 4:
Reduce the heap size by one because the last element is now in its correct sorted position.

### Step 5:
Apply **Heapify** to the root to restore the Max Heap property.

### Step 6:
Repeat the above steps until only one element remains in the heap.

### Step 7:
Return the sorted array.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. **Building the Max Heap**
   - Constructing the Max Heap requires **O(n)** time.

2. **Heap Sort Process**
   - There are **(n − 1)** iterations.
   - In each iteration:
     - Swapping requires **O(1)** time.
     - Heapify requires **O(log n)** time.

3. Total time for sorting:
   - **(n − 1) × O(log n) = O(n log n)**

Therefore,

**Overall Time Complexity = O(n log n)**

### Best Case

- Heap construction and Heapify operations are still required.

**Best Case Time Complexity = O(n log n)**

### Average Case

- Every Heapify operation takes **O(log n)** time.

**Average Case Time Complexity = O(n log n)**

### Worst Case

- Every extraction requires Heapify.

**Worst Case Time Complexity = O(n log n)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- No auxiliary arrays are required.

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(1)**

**Note:** Heap Sort is an **in-place sorting algorithm**. The input array is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Binary Heap** data structure.
- First builds a **Max Heap**.
- The largest element is always at the root.
- Produces the sorted array by repeatedly removing the maximum element.
- It is an **in-place** sorting algorithm.
- It is **not a stable** sorting algorithm.
- Time complexity is **O(n log n)** in all cases.
- Auxiliary space complexity is **O(1)**.

---

## Exam Tip

- **Common Viva Question:** Why is a **Max Heap** used in Heap Sort?
  - **Answer:** Because the root of a Max Heap always contains the **largest element**, making it easy to place the largest element at the end of the array during each iteration.

- **Common Mistake:** Do **not** confuse **building a heap** with **Heapify**. Building a heap is done once at the beginning, whereas Heapify is performed after each extraction to restore the Max Heap property.