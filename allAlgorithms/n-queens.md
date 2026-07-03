# N-Queens Problem using Backtracking

## Definition

The **N-Queens Problem** is a **Backtracking** problem in which **N queens** must be placed on an **N × N chessboard** such that no two queens attack each other. This means that no two queens can be placed in the same **row, column, or diagonal**. Backtracking systematically tries possible positions and backtracks whenever a conflict occurs.

---

## Algorithm

**Algorithm: N-Queens using Backtracking**

**Input :**
- An integer `N` representing the size of the chessboard.

**Output :**
- A valid arrangement of `N` queens on the chessboard, if one exists; otherwise, report that no solution exists.

```text
Algorithm: N-Queens using Backtracking

Input :
    An integer N representing the size of the chessboard.

Output :
    A valid arrangement of N queens, if one exists.

1. Create an N × N chessboard.
2. Initialize all positions on the chessboard as EMPTY.
3. Start placing queens from the first column.
4. For each column:
      a) Try placing a queen in every row of that column.
      b) Check whether the position is safe.
      c) If the position is safe:
            i) Place the queen.
           ii) Move to the next column.
      d) If a solution is found, continue until all queens are placed.
      e) If no safe position exists in the next column:
            i) Remove the previously placed queen.
           ii) Try the next possible row in the current column.
5. Repeat the process until all columns have been processed.
6. If all N queens are placed successfully,
      return the chessboard configuration.
7. Otherwise, report that no solution exists.
```

---

## Explanation

### Step 1:
Create an **N × N** chessboard and initialize every position as **EMPTY**.

### Step 2:
Begin by placing a queen in the **first column**.

### Step 3:
For the current column, try placing the queen in each row one by one.

### Step 4:
Before placing a queen, check whether the position is **safe**, i.e., no queen is present in the same row, upper-left diagonal, or lower-left diagonal.

### Step 5:
If the position is safe, place the queen and move to the next column.

### Step 6:
If no safe position is available in a column, **backtrack** by removing the previously placed queen and trying another row.

### Step 7:
Continue this process until either all queens are placed successfully or every possible arrangement has been tried.

### Step 8:
Return the valid arrangement if a solution exists; otherwise, report that no solution exists.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. The algorithm places one queen in each column.

2. For every column, several rows may need to be examined.

3. If a placement leads to a conflict, the algorithm backtracks and explores another possibility.

4. In the worst case, the algorithm explores a large number of possible arrangements before finding a solution or determining that none exists.

Therefore,

**Overall Time Complexity = O(N!)**

### Best Case

- A valid arrangement is found with very little backtracking.

**Best Case Time Complexity = Better than O(N!), but commonly expressed as O(N!)**

### Average Case

- Several placements and backtracking steps are required.

**Average Case Time Complexity = O(N!)**

### Worst Case

- Almost every possible arrangement is explored.

**Worst Case Time Complexity = O(N!)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- Chessboard (N × N) → **O(N²)**

### Auxiliary Data Structures

- Recursive call stack → **O(N)**

### Auxiliary Space Complexity

**Auxiliary Space = O(N²)**

**Note:** The chessboard is used during computation and is considered auxiliary space. The recursive call stack requires an additional **O(N)** space, but the overall auxiliary space remains **O(N²)**.

---

## Key Points

- Uses the **Backtracking** technique.
- Places exactly **one queen in each column**.
- No two queens can be in the same row, column, or diagonal.
- If a conflict occurs, the algorithm **backtracks** and tries another position.
- Produces a valid arrangement if one exists.
- Worst-case time complexity is **O(N!)**.
- Commonly used to demonstrate **Backtracking**.
- Can have multiple valid solutions for the same value of **N**.

---

## Exam Tip

- **Common Viva Question:** Why is the N-Queens Problem solved using Backtracking?
  - **Answer:** Because whenever a queen cannot be placed safely, the algorithm returns to the previous decision, removes the previously placed queen, and tries another position.

- **Common Mistake:** Do **not** forget to mention the **safe position check** (same row, upper-left diagonal, and lower-left diagonal). This is the most important step in the Backtracking algorithm.