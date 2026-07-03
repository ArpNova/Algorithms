# Binary Search

## Definition

**Binary Search** is a **Divide and Conquer** searching algorithm used to find the position of a target element in a **sorted array**. It repeatedly compares the target element with the middle element of the array and eliminates half of the remaining search space until the element is found or the search interval becomes empty.

---

## Algorithm

**Algorithm: Binary Search**

**Input :**
- A sorted array `A` containing `n` elements.
- The element `Key` to be searched.

**Output :**
- Position (index) of the element if found; otherwise, report that the element is not present.

```text
Algorithm: Binary Search

Input :
    A sorted array A containing n elements
    Element Key to be searched

Output :
    Position of Key if found; otherwise, report that
    the element is not present.

1. Initialize:
      a) Low = 0
      b) High = n − 1
2. Repeat while Low is less than or equal to High:
      a) Find the middle position between Low and High.
      b) Compare Key with the middle element.
      c) If both are equal:
            i) Return the position of the element.
      d) If Key is smaller than the middle element:
            i) Continue searching in the left half.
      e) If Key is greater than the middle element:
            i) Continue searching in the right half.
3. If the search interval becomes empty:
      a) Report that the element is not present.
```

---

## Explanation

### Step 1:
Ensure that the array is **sorted**, as Binary Search works only on sorted data.

### Step 2:
Initialize two pointers:
- **Low** pointing to the first element.
- **High** pointing to the last element.

### Step 3:
Find the middle element of the current search interval.

### Step 4:
Compare the search key with the middle element.

### Step 5:
If both are equal, the search is successful and the position is returned.

### Step 6:
If the key is smaller than the middle element, continue searching only in the **left half** of the array.

### Step 7:
If the key is greater than the middle element, continue searching only in the **right half** of the array.

### Step 8:
Repeat the process until the element is found or the search interval becomes empty.

### Step 9:
If no element is found, report that the element is not present.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. In each iteration, the search space is reduced to **half** of its previous size.

2. The maximum number of times an array of size `n` can be divided by 2 is **log₂n**.

3. Each iteration performs only one comparison with the middle element.

Therefore,

**Overall Time Complexity = O(log n)**

### Best Case

- The key is found at the first middle element.

**Best Case Time Complexity = O(1)**

### Average Case

- The search interval is repeatedly divided into two halves.

**Average Case Time Complexity = O(log n)**

### Worst Case

- The search continues until only one element remains or the element is not present.

**Worst Case Time Complexity = O(log n)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- No auxiliary arrays are required.

### Auxiliary Data Structures

- No additional auxiliary data structures are required (Iterative version).

### Auxiliary Space Complexity

**Auxiliary Space = O(1)**

**Note:** If the recursive version of Binary Search is used, the recursion stack requires **O(log n)** auxiliary space.

---

## Key Points

- Uses the **Divide and Conquer** technique.
- Works **only on sorted arrays**.
- Repeatedly divides the search interval into two halves.
- Eliminates half of the remaining search space in each step.
- Iterative Binary Search requires **O(1)** auxiliary space.
- Best-case time complexity is **O(1)**.
- Average and worst-case time complexity is **O(log n)**.
- Faster than Linear Search for large sorted datasets.

---

## Exam Tip

- **Common Viva Question:** Why does Binary Search require a sorted array?
  - **Answer:** Because it decides whether to search the left half or the right half by comparing the key with the middle element. This decision is valid only when the array is sorted.

- **Common Mistake:** Do **not** apply Binary Search to an unsorted array. The algorithm will not produce correct results unless the array is sorted.