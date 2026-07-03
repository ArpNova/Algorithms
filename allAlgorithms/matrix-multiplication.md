# Matrix Multiplication

## Definition

Matrix Multiplication is a **Divide and Conquer** compatible operation used to compute the product of two matrices. In the **standard matrix multiplication algorithm**, each element of the resultant matrix is obtained by multiplying the corresponding row of the first matrix with the corresponding column of the second matrix and summing the products.

---

## Algorithm

**Algorithm: Matrix Multiplication**

**Input :**
- Matrix `A` of order `m × n`
- Matrix `B` of order `n × p`

**Output :**
- Matrix `C` of order `m × p`

```text
Algorithm: Matrix Multiplication

Input :
    Matrix A of order m × n
    Matrix B of order n × p

Output :
    Matrix C of order m × p

1. Create a matrix C of order m × p.
2. Initialize every element of matrix C to 0.
3. For each row of matrix A:
      a) For each column of matrix B:
            i) Multiply each element of the current row of A
               with the corresponding element of the current
               column of B.
           ii) Add all the products.
          iii) Store the obtained sum in the corresponding
               position of matrix C.
4. Repeat the above process until every row of A and every
   column of B have been processed.
5. Return matrix C.
```

---

## Explanation

### Step 1:
Create the result matrix `C` having `m` rows and `p` columns.

### Step 2:
Initialize every element of matrix `C` to **0**.

### Step 3:
Select one row from matrix `A`.

### Step 4:
Select one column from matrix `B`.

### Step 5:
Multiply the corresponding elements of the selected row and column.

### Step 6:
Add all the obtained products.

### Step 7:
Store the sum in the corresponding position of matrix `C`.

### Step 8:
Repeat the process for every row of matrix `A` and every column of matrix `B`.

### Step 9:
Return the resultant matrix `C`.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. There are **m** rows in matrix `A`.

2. There are **p** columns in matrix `B`.

3. For every row-column pair, **n** multiplications and additions are performed.

Therefore,

**Overall Time Complexity = O(m × n × p)**

For two square matrices of order **n × n**,

**Overall Time Complexity = O(n³)**

### Best Case

- Every element must still be computed.

**Best Case Time Complexity = O(m × n × p)**

### Average Case

- Every row-column pair is processed.

**Average Case Time Complexity = O(m × n × p)**

### Worst Case

- Every multiplication and addition is performed.

**Worst Case Time Complexity = O(m × n × p)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Result matrix `C` → **O(m × p)**

### Auxiliary Data Structures

- No additional auxiliary data structures are required.

### Auxiliary Space Complexity

**Auxiliary Space = O(m × p)**

**Note:** The input matrices `A` and `B` are part of the input and are **not included** in the auxiliary space complexity.

---

## Key Points

- Matrix multiplication is possible only when the **number of columns of the first matrix equals the number of rows of the second matrix**.
- The order of the resultant matrix is **m × p**.
- Each element of the result is obtained by the **row-column multiplication rule**.
- Matrix multiplication is **not commutative**, i.e., **AB ≠ BA** in general.
- Time complexity for square matrices is **O(n³)**.
- Auxiliary space is required for the resultant matrix.
- Widely used in computer graphics, machine learning, scientific computing, and network analysis.

---


::contentReference[oaicite:0]{index=0}


## Exam Tip

- **Common Viva Question:** What is the condition for multiplying two matrices?
  - **Answer:** The **number of columns of the first matrix must be equal to the number of rows of the second matrix**.

- **Common Mistake:** Do **not** confuse matrix multiplication with element-wise multiplication. In matrix multiplication, each element of the result is obtained by multiplying a **row** of the first matrix with a **column** of the second matrix and adding the products.