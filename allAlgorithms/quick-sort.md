# Quick Sort

## Definition

**Quick Sort** is a **Divide and Conquer** sorting algorithm that sorts an array by selecting a **pivot** element and partitioning the array into two parts such that elements smaller than or equal to the pivot are placed before it and elements greater than the pivot are placed after it. The same process is then applied recursively to the left and right subarrays until the entire array is sorted.

---

## Algorithm

**Algorithm: Quick Sort**

**Input :**
- Array `A[1...n]`
- Two indices `low` and `high` representing the current subarray.

**Output :**
- Sorted array `A[1...n]`.

```text
Algorithm: Quick Sort

Input :
    Array A[1...n], low, high

Output :
    Sorted array A[1...n]

1. If low < high:
2.      Select the last element A[high] as the pivot.
3.      Initialize i = low − 1.
4.      For j = low to high − 1:
            a) If A[j] ≤ pivot:
                  i) Increment i by 1.
                 ii) Swap A[i] and A[j].
5.      Swap A[i + 1] and A[high].
6.      Let q = i + 1 be the pivot position.
7.      Recursively apply Quick Sort to the left subarray
            Quick Sort(A, low, q − 1).
8.      Recursively apply Quick Sort to the right subarray
            Quick Sort(A, q + 1, high).
9. Return the sorted array A.
```

---

## Explanation

### Step 1:
Check whether the current subarray contains more than one element. If `low < high`, sorting is required; otherwise, the subarray is already sorted.

### Step 2:
Select the **last element** of the current subarray as the pivot.

### Step 3:
Initialize index `i = low − 1`. This index keeps track of the last element that is smaller than or equal to the pivot.

### Step 4:
Traverse the subarray from `low` to `high − 1`.

### Step 5:
Whenever an element is less than or equal to the pivot, increment `i` and swap the current element with `A[i]`.

### Step 6:
After scanning all elements, place the pivot in its correct sorted position by swapping it with `A[i + 1]`.

### Step 7:
The pivot divides the array into two subarrays:
- Left subarray containing elements less than or equal to the pivot.
- Right subarray containing elements greater than the pivot.

### Step 8:
Recursively apply Quick Sort to both subarrays.

### Step 9:
When all recursive calls complete, the array becomes fully sorted.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. **Partitioning**
   - The partition procedure scans the current subarray once.
   - Time required = **O(n)** for a subarray of size `n`.

2. **Recursive Calls**
   - After partitioning, the algorithm recursively sorts the left and right subarrays.

### Best Case

- The pivot divides the array into two nearly equal halves at every recursive call.
- Number of recursion levels = **O(log n)**.
- Each level performs **O(n)** partitioning.

Therefore,

**Best Case Time Complexity = O(n log n)**

### Average Case

- On average, the pivot divides the array reasonably evenly.
- There are approximately **O(log n)** recursion levels.
- Each level performs **O(n)** work.

Therefore,

**Average Case Time Complexity = O(n log n)**

### Worst Case

- The pivot is always the smallest or largest element (e.g., already sorted or reverse sorted array when the last element is chosen as pivot).
- One subarray contains `n − 1` elements and the other contains `0` elements.
- There are **O(n)** recursion levels.
- Each level performs **O(n)** partitioning.

Therefore,

**Worst Case Time Complexity = O(n²)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- No auxiliary arrays are used.

### Auxiliary Data Structures

- Recursive function call stack.

### Auxiliary Space Complexity

- **Best/Average Case:** `O(log n)` (balanced recursion)
- **Worst Case:** `O(n)` (unbalanced recursion)

**Note:** The input array is not included in the auxiliary space complexity because it is provided as input. Quick Sort is considered an **in-place sorting algorithm**, requiring only the recursion stack as extra space.

---

## Key Points

- Uses the **Divide and Conquer** technique.
- Selects a **pivot** element for partitioning.
- After partitioning, the pivot is placed in its correct sorted position.
- Sorting is performed recursively on the left and right subarrays.
- It is an **in-place** sorting algorithm.
- It is **not a stable** sorting algorithm.
- Average-case performance is **O(n log n)**.
- Worst-case performance is **O(n²)** when partitions are highly unbalanced.

---

## Exam Tip

- **Common Viva Question:** Why is Quick Sort generally faster than Merge Sort?
  - **Answer:** Quick Sort has better cache performance and performs sorting in-place, making it faster in practice for many applications.

- **Common Mistakes:**
  - Forgetting to place the pivot in its correct position after partitioning.
  - Writing recursive calls before partitioning.
  - Confusing Quick Sort with Merge Sort. Quick Sort partitions around a pivot, whereas Merge Sort divides the array into halves and merges sorted subarrays.