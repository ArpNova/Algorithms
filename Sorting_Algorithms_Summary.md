# Sorting Algorithms Summary

This document provides a summary of standard sorting algorithms, detailing their design approaches, whether they are stable or not, and their time and space complexities. 

**Stability** in a sorting algorithm means that two objects with equal keys appear in the same order in sorted output as they appear in the input array.

| Sorting Algorithm | Approach / Design Paradigm | Stable? | Time Complexity (Best) | Time Complexity (Avg) | Time Complexity (Worst) | Space Complexity |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Bubble Sort** | Incremental / Brute Force | **Yes** | $O(N)$ | $O(N^2)$ | $O(N^2)$ | $O(1)$ |
| **Selection Sort** | Greedy / Incremental | **No** | $O(N^2)$ | $O(N^2)$ | $O(N^2)$ | $O(1)$ |
| **Insertion Sort** | Incremental | **Yes** | $O(N)$ | $O(N^2)$ | $O(N^2)$ | $O(1)$ |
| **Merge Sort** | Divide & Conquer | **Yes** | $O(N \log N)$ | $O(N \log N)$ | $O(N \log N)$ | $O(N)$ |
| **Quick Sort** | Divide & Conquer | **No** | $O(N \log N)$ | $O(N \log N)$ | $O(N^2)$ | $O(\log N)$ |
| **Heap Sort** | Data Structure (Heap) | **No** | $O(N \log N)$ | $O(N \log N)$ | $O(N \log N)$ | $O(1)$ |
| **Shell Sort** | Diminishing Increment | **No** | $O(N \log N)$ | $O(N^{4/3})$ or $O(N^{3/2})$| $O(N^2)$ | $O(1)$ |
| **Counting Sort** | Non-comparative / Hashing | **Yes** | $O(N + K)$ | $O(N + K)$ | $O(N + K)$ | $O(K)$ |
| **Radix Sort** | Non-comparative / Digit by Digit | **Yes** | $O(d(N + K))$ | $O(d(N + K))$ | $O(d(N + K))$ | $O(N + K)$ |
| **Bucket Sort** | Non-comparative / Distribution | **Yes** | $O(N + K)$ | $O(N + K)$ | $O(N^2)$ | $O(N \cdot K)$ |

*Note: For Counting, Radix, and Bucket Sort, $K$ represents the range of the input data (or number of buckets), and $d$ represents the number of digits in the maximum element.*
