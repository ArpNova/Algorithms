# Tower of Hanoi

## Definition

The **Tower of Hanoi** is a **Divide and Conquer** and **Recursive** problem in which `N` disks of different sizes are moved from a **Source** peg to a **Destination** peg using an **Auxiliary** peg. At any time, **only one disk can be moved**, and **a larger disk can never be placed on top of a smaller disk**.

---

## Algorithm

**Algorithm: Tower of Hanoi**

**Input :**
- Number of disks `N`
- Source peg `S`
- Auxiliary peg `A`
- Destination peg `D`

**Output :**
- Sequence of moves required to transfer all disks from the Source peg to the Destination peg.

```text
Algorithm: Tower of Hanoi

Input :
    Number of disks N
    Source peg S
    Auxiliary peg A
    Destination peg D

Output :
    Sequence of moves to transfer all disks from
    Source peg to Destination peg.

1. If there is only one disk:
      a) Move the disk from Source peg to Destination peg.
      b) Stop.
2. Move the top (N − 1) disks from the Source peg to the Auxiliary peg using the Destination peg.
3. Move the largest disk from the Source peg to the Destination peg.
4. Move the (N − 1) disks from the Auxiliary peg to the Destination peg using the Source peg.
5. Return the complete sequence of moves.
```

---

## Explanation

### Step 1:
If there is only one disk, move it directly from the **Source** peg to the **Destination** peg.

### Step 2:
If there are more than one disk, first move the top **(N − 1)** disks from the Source peg to the Auxiliary peg.

### Step 3:
Move the largest disk (remaining on the Source peg) directly to the Destination peg.

### Step 4:
Move the **(N − 1)** disks from the Auxiliary peg to the Destination peg.

### Step 5:
Repeat the same process recursively until all disks are moved.

### Step 6:
Return the complete sequence of moves.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. To move `N` disks:
   - Move `(N − 1)` disks to the Auxiliary peg.
   - Move one largest disk.
   - Move `(N − 1)` disks to the Destination peg.

2. This gives the recurrence relation:

\[
T(N) = 2T(N-1) + 1
\]

3. Solving the recurrence:

\[
T(N) = 2^N - 1
\]

Therefore,

**Overall Time Complexity = O(2ᴺ)**

### Best Case

- Even for the smallest valid input, recursive calls are required.

**Best Case Time Complexity = O(2ᴺ)**

### Average Case

- Every required move must be performed.

**Average Case Time Complexity = O(2ᴺ)**

### Worst Case

- All `2ᴺ − 1` moves are required.

**Worst Case Time Complexity = O(2ᴺ)**

---

## Space Complexity (Detailed)

### Auxiliary Arrays

- No auxiliary arrays are required.

### Auxiliary Data Structures

- Recursive call stack → **O(N)**

### Auxiliary Space Complexity

**Auxiliary Space = O(N)**

**Note:** The input (number of disks and peg names) is not included in the auxiliary space complexity.

---

## Key Points

- Uses **Recursion** and the **Divide and Conquer** technique.
- Uses three pegs: **Source**, **Auxiliary**, and **Destination**.
- Only **one disk** can be moved at a time.
- A **larger disk can never be placed on a smaller disk**.
- Minimum number of moves required is **2ᴺ − 1**.
- Time complexity is **O(2ᴺ)**.
- Space complexity is **O(N)** due to recursion.
- Commonly used to demonstrate the concept of recursion.

---

## Exam Tip

- **Common Viva Question:** What is the minimum number of moves required to solve the Tower of Hanoi problem?
  - **Answer:** **2ᴺ − 1**, where **N** is the number of disks.

- **Common Mistake:** Do **not** forget the order of recursive steps:
  1. Move **(N − 1)** disks to the Auxiliary peg.
  2. Move the largest disk to the Destination peg.
  3. Move **(N − 1)** disks from the Auxiliary peg to the Destination peg.