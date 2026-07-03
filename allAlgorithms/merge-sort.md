# Merge Sort

## Definition

**Merge Sort** is a **Divide and Conquer** sorting algorithm that recursively divides an array into two halves until each subarray contains only one element. It then merges the sorted subarrays to produce a completely sorted array. It is a **stable sorting algorithm** and guarantees a time complexity of **O(n log n)** in all cases.

---

## Algorithm

**Algorithm: Merge Sort**

**Input :**
- Array `A[1...n]`
- Two indices `low` and `high` representing the current subarray.

**Output :**
- Sorted array `A[1...n]`.

```text
Algorithm: Merge Sort

Input :
    Array A[1...n], low, high

Output :
    Sorted array A[1...n]

1. If low < high:
2.      Compute mid = ⌊(low + high)/2⌋.
3.      Recursively apply Merge Sort to the left subarray
            Merge Sort(A, low, mid).
4.      Recursively apply Merge Sort to the right subarray
            Merge Sort(A, mid + 1, high).
5.      Merge the two sorted subarrays:
            a) Create two temporary arrays L[] and R[].
            b) Copy the left subarray into L[].
            c) Copy the right subarray into R[].
            d) Compare the first elements of L[] and R[].
            e) Copy the smaller element into A[].
            f) Repeat until one temporary array becomes empty.
            g) Copy the remaining elements of L[], if any.
            h) Copy the remaining elements of R[], if any.
6. Return the sorted array A.
```

---

## Explanation

### Step 1:
Check whether the current subarray contains more than one element. If `low < high`, further division is required.

### Step 2:
Find the middle index of the current subarray to divide it into two nearly equal halves.

### Step 3:
Recursively sort the left half of the array.

### Step 4:
Recursively sort the right half of the array.

### Step 5:
Merge the two sorted halves by comparing their elements one by one.

### Step 6:
If one temporary array becomes empty, copy all remaining elements of the other temporary array into the original array.

### Step 7:
Repeat the merging process for all recursive calls until the entire array becomes sorted.

### Step 8:
Return the completely sorted array.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. **Dividing the Array**
   - The array is repeatedly divided into two halves.
   - Number of division levels = **O(log n)**.

2. **Merging**
   - At each level, all `n` elements are merged exactly once.
   - Time required per level = **O(n)**.

3. **Total Time**
   - There are **O(log n)** levels of recursion.
   - Each level performs **O(n)** work.

Therefore,

**Overall Time Complexity = O(n log n)**

### Best Case

- Even if the array is already sorted, all divisions and merge operations are performed.

**Best Case Time Complexity = O(n log n)**

### Average Case

- The same recursive division and merging process occurs.

**Average Case Time Complexity = O(n log n)**

### Worst Case

- Every merge operation processes all elements.

**Worst Case Time Complexity = O(n log n)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Temporary array `L[]` → **O(n)**
- Temporary array `R[]` → **O(n)**

*(The total auxiliary storage required during merging is proportional to `n`, not `2n`.)*

### Auxiliary Data Structures

- Recursive function call stack → **O(log n)**

### Auxiliary Space Complexity

- Temporary arrays → **O(n)**
- Recursion stack → **O(log n)**

Therefore,

**Auxiliary Space Complexity = O(n)**

**Note:** The input array is not included in the auxiliary space complexity because it is provided as input.

---

## Key Points

- Uses the **Divide and Conquer** technique.
- Recursively divides the array into two halves.
- Merges two sorted subarrays to obtain a sorted array.
- It is a **stable sorting algorithm**.
- Guarantees **O(n log n)** time complexity in all cases.
- Requires additional memory for temporary arrays.
- Performs well for large datasets and linked lists.
- Suitable for external sorting where data cannot fit entirely into memory.

---

## Exam Tip

- **Common Viva Question:** Why is Merge Sort called a stable sorting algorithm?
  - **Answer:** Because equal elements retain their original relative order after sorting.

- **Common Mistakes:**
  - Forgetting the merge step after dividing the array.
  - Writing only the divide phase without explaining how the sorted subarrays are merged.
  - Confusing Merge Sort with Quick Sort. Merge Sort first divides the array and then merges sorted halves, whereas Quick Sort partitions the array around a pivot.