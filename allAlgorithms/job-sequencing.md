# Job Sequencing with Deadlines

## Definition

**Job Sequencing with Deadlines** is a **Greedy Algorithm** used to schedule jobs in such a way that the **maximum total profit** is obtained. Each job has a **deadline** and a **profit**, and every job requires **one unit of time** to complete. A job must be completed **on or before its deadline** to earn its profit.

---

## Algorithm

```text
Algorithm: Job Sequencing with Deadlines

Input :
    n jobs, where each job has
    - Job ID
    - Deadline
    - Profit

Output :
    Sequence of scheduled jobs and the maximum profit.

1. Sort all jobs in descending order of their profits.
2. Find the maximum deadline among all jobs.
3. Create a schedule array slot[] of size (maximum deadline).
4. Initialize all slots as EMPTY.
5. Initialize TotalProfit = 0.
6. For each job in the sorted order:
      a) Find the latest available slot on or before its deadline.
      b) If an empty slot is found:
            i) Assign the job to that slot.
           ii) Mark the slot as occupied.
          iii) TotalProfit = TotalProfit + Profit of the job.
7. Return the scheduled jobs and TotalProfit.
```

---

## Explanation

**Step 1:** Sort all jobs according to their profits in **descending order**.

**Step 2:** Find the maximum deadline to determine the number of available time slots.

**Step 3:** Create a `slot[]` array to represent the available time slots.

**Step 4:** Initialize every slot as **EMPTY**, indicating that no job has been assigned yet.

**Step 5:** Process each job one by one.
- Start with the highest-profit job.
- Check the latest free slot on or before its deadline.
- If a free slot exists, schedule the job there.
- Otherwise, discard the job.

**Step 6:** After processing all jobs, return the scheduled jobs and the total profit.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Sorting all jobs according to profit takes

**O(n log n)**

2. For every job, we may have to check up to `d` slots (where `d` is the maximum deadline).

In the worst case,

- Scheduling each job = **O(n)**
- For all jobs = **O(n²)**

Therefore,

**Overall Time Complexity = O(n log n + n²)**

Since **n²** dominates,

**Overall Time Complexity = O(n²)**

> **Note:** Using a **Disjoint Set (Union-Find)** data structure, the scheduling step can be optimized, reducing the overall complexity to approximately **O(n log n)**.

---

### Best Case

- Sorting: **O(n log n)**
- Every job immediately finds an empty slot.

Overall:

**O(n log n)**

---

### Average Case

**O(n²)**

---

### Worst Case

**O(n²)**

---

## Space Complexity (Detailed)

Extra memory used:

- Schedule array `slot[]` → **O(n)**
- Array to store selected jobs (optional) → **O(n)**

Therefore,

**Auxiliary Space Complexity = O(n)**

> **Note:** The input array of jobs is not included in the auxiliary space complexity.

---

## Key Points

- It is a **Greedy Algorithm**.
- Each job requires **one unit of time**.
- Every job has a **deadline** and a **profit**.
- Jobs are scheduled in **descending order of profit**.
- A job is placed in the **latest available slot before or on its deadline**.
- The objective is to **maximize the total profit**.
- If no free slot is available before the deadline, the job is discarded.

---

## Applications

- CPU Job Scheduling
- Task Scheduling
- Manufacturing Process Scheduling
- Project Planning
- Resource Allocation