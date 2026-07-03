# Matrix Chain Multiplication (MCM)

## Definition

**Matrix Chain Multiplication (MCM)** is a **Dynamic Programming** algorithm used to determine the **most efficient order of multiplying a sequence of matrices**. The objective is to minimize the **total number of scalar multiplications** required to compute the product. It does **not change the order of the matrices**, only the order of multiplication (parenthesization).

---

## Algorithm

**Algorithm: Matrix Chain Multiplication**

**Input :**
- A sequence of `n` matrices.
- Dimension array `P[0...n]`, where matrix `Ai` has dimensions `P[i−1] × P[i]`.

**Output :**
- Minimum number of scalar multiplications required to multiply the matrix chain.

```text
Algorithm: Matrix Chain Multiplication

Input :
    A sequence of n matrices
    Dimension array P[0...n]

Output :
    Minimum number of scalar multiplications.

1. Create a cost table M[][] of size n × n.
2. Initialize the diagonal elements of M[][] to 0.
3. Consider matrix chains of length 2.
4. Gradually increase the chain length until all n matrices
   are included.
5. For each chain:
      a) Consider every possible position to divide the chain.
      b) Compute the cost of multiplying the left subchain.
      c) Compute the cost of multiplying the right subchain.
      d) Compute the cost of multiplying the two resulting matrices.
      e) Find the minimum among all possible costs.
      f) Store the minimum cost in the table M[][].
6. Repeat the process until all chain lengths have been processed.
7. Return the minimum multiplication cost stored in the table.
```

---

## Explanation

### Step 1:
Create a **Dynamic Programming table `M[][]`** to store the minimum multiplication cost for every possible matrix chain.

### Step 2:
Initialize all diagonal elements to **0**, because multiplying a single matrix requires no scalar multiplication.

### Step 3:
Start with chains containing **2 matrices**.

### Step 4:
Gradually increase the chain length until the entire sequence of matrices is considered.

### Step 5:
For every chain, consider every possible position where the chain can be divided.

### Step 6:
For each division:
- Compute the cost of multiplying the left subchain.
- Compute the cost of multiplying the right subchain.
- Compute the cost of multiplying the two resulting matrices.

### Step 7:
Select the minimum cost among all possible divisions and store it in the table.

### Step 8:
Continue until the complete matrix chain has been processed.

### Step 9:
Return the minimum multiplication cost.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. The algorithm considers all possible chain lengths.
   - Number of chain lengths = **O(n)**.

2. For each chain length, all possible starting positions are examined.
   - Number of starting positions = **O(n)**.

3. For each chain, every possible division point is considered.
   - Number of division points = **O(n)**.

Therefore,

**Overall Time Complexity = O(n³)**

### Best Case

- Every table entry must still be computed.

**Best Case Time Complexity = O(n³)**

### Average Case

- All possible chain lengths and partition points are examined.

**Average Case Time Complexity = O(n³)**

### Worst Case

- Every possible partition is evaluated.

**Worst Case Time Complexity = O(n³)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Cost table `M[][]` → **O(n²)**

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(n²)**

**Note:** The input dimension array `P[]` is part of the input and is **not included** in the auxiliary space complexity.

---

## Key Points

- Uses the **Dynamic Programming** technique.
- Determines the **optimal parenthesization** of matrix multiplication.
- Does **not** change the order of matrices.
- Minimizes the **number of scalar multiplications**.
- Solves overlapping subproblems using a DP table.
- Time complexity is **O(n³)**.
- Space complexity is **O(n²)**.
- Widely used in compiler optimization and scientific computing.

---

## Exam Tip

- **Common Viva Question:** What is the objective of Matrix Chain Multiplication?
  - **Answer:** To find the **optimal order (parenthesization)** of multiplying matrices so that the **total number of scalar multiplications is minimized**.

- **Common Mistake:** Do **not** state that Matrix Chain Multiplication changes the order of the matrices. It only changes the **order of multiplication (parenthesization)**, while the sequence of matrices remains the same.