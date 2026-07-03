# Linear Search

## Definition

**Linear Search** is a simple **searching algorithm** that searches for a given element by checking each element of the array **one by one** from the beginning until the element is found or the end of the array is reached. It does **not require the array to be sorted**.

---

## Algorithm

**Algorithm: Linear Search**

**Input :**
- An array `A` containing `n` elements.
- The element `Key` to be searched.

**Output :**
- Position (index) of the element if found; otherwise, report that the element is not present.

```text
Algorithm: Linear Search

Input :
    An array A containing n elements
    Element Key to be searched

Output :
    Position of Key if found; otherwise,
    report that the element is not present.

1. Start searching from the first element of the array.
2. Compare the current element with Key.
3. If both are equal:
      a) Return the position of the element.
4. Otherwise:
      a) Move to the next element.
5. Repeat Steps 2 to 4 until the last element of the array is checked.
6. If the element is not found after checking all elements:
      a) Report that the element is not present.
```

---

## Explanation

### Step 1:
Start searching from the **first element** of the array.

### Step 2:
Compare the current element with the search key.

### Step 3:
If both are equal, the search is successful and return the position of the element.

### Step 4:
If they are not equal, move to the next element.

### Step 5:
Continue comparing each element until the key is found or the last element has been checked.

### Step 6:
If the entire array has been searched and the key is still not found, report that the element is not present.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. In the worst case, every element of the array is compared with the search key.

2. Each comparison requires **O(1)** time.

3. If the element is found early, fewer comparisons are required.

Therefore,

**Overall Time Complexity = O(n)**

### Best Case

- The element is present at the **first position**.

**Best Case Time Complexity = O(1)**

### Average Case

- On average, about half of the elements are examined.

**Average Case Time Complexity = O(n)**

### Worst Case

- The element is at the last position or is not present in the array.

**Worst Case Time Complexity = O(n)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- No auxiliary arrays are required.

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(1)**

**Note:** The input array is not included in the auxiliary space complexity.

---

## Key Points

- Does **not require a sorted array**.
- Searches the array **sequentially** from beginning to end.
- Easy to understand and implement.
- Suitable for **small or unsorted datasets**.
- Best-case time complexity is **O(1)**.
- Average and worst-case time complexity is **O(n)**.
- Auxiliary space complexity is **O(1)**.
- Simpler than Binary Search but less efficient for large datasets.

---

## Exam Tip

- **Common Viva Question:** When is Linear Search preferred over Binary Search?
  - **Answer:** Linear Search is preferred when the data is **unsorted** or the dataset is **small**, because it does not require sorting.

- **Common Mistake:** Do **not** mention that the array must be sorted. **Linear Search works on both sorted and unsorted arrays.**