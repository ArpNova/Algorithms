# Huffman Coding Algorithm

## Definition

**Huffman Coding** is a **Greedy Algorithm** used for **lossless data compression**. It assigns **variable-length binary codes** to characters based on their frequencies, where characters with higher frequencies receive shorter codes and characters with lower frequencies receive longer codes. This minimizes the total number of bits required to represent the data.

---

## Algorithm

```text
Algorithm: Huffman Coding

Input :
    A set of characters with their corresponding frequencies.

Output :
    Huffman Tree and Huffman codes for all characters.

1. Create a leaf node for each character with its frequency.
2. Insert all leaf nodes into a Min-Priority Queue (Min-Heap).
3. Repeat until only one node remains in the Min-Heap:
      a) Remove the two nodes having the minimum frequencies.
      b) Create a new internal node whose frequency is the sum of the two nodes.
      c) Make the two removed nodes the left and right children of the new node.
      d) Insert the new node back into the Min-Heap.
4. The remaining node is the root of the Huffman Tree.
5. Traverse the Huffman Tree:
      a) Assign '0' to every left edge.
      b) Assign '1' to every right edge.
6. The binary code obtained from the root to each leaf node is the Huffman code of that character.
7. Return the Huffman Tree and the Huffman codes.
```

---

## Explanation

**Step 1:** Create a separate leaf node for every character along with its frequency.

**Step 2:** Insert all the nodes into a **Min-Heap** so that the node with the smallest frequency can be removed efficiently.

**Step 3:** Repeat the following until only one node remains:
- Remove the two nodes having the smallest frequencies.
- Create a new parent node with frequency equal to the sum of the two frequencies.
- Attach the two removed nodes as the left and right children.
- Insert the new node back into the Min-Heap.

**Step 4:** The last remaining node becomes the **root of the Huffman Tree**.

**Step 5:** Traverse the tree.
- Assign **0** while moving to the left child.
- Assign **1** while moving to the right child.

**Step 6:** The sequence of 0s and 1s from the root to each leaf gives the **Huffman code** for that character.

**Step 7:** Return the Huffman Tree and the generated Huffman codes.

---

## Time Complexity (Detailed)

### Step-wise Analysis

1. Creating leaf nodes for all characters takes

**O(n)**

2. Inserting all nodes into the Min-Heap takes

**O(n)**

(Building a heap from `n` elements.)

3. The loop executes **(n − 1)** times because two nodes are merged into one during each iteration.

For each iteration:
- Remove minimum node → **O(log n)**
- Remove second minimum node → **O(log n)**
- Insert new node → **O(log n)**

Hence, each iteration takes

**O(log n)**

Therefore,

- Total merging cost = **O((n − 1) log n) = O(n log n)**

Overall,

**Time Complexity = O(n log n)**

where **n** is the number of characters.

---

### Best Case

**O(n log n)**

The algorithm always performs the same sequence of heap operations regardless of the input frequencies.

---

### Average Case

**O(n log n)**

---

### Worst Case

**O(n log n)**

---

## Space Complexity (Detailed)

Extra memory used:

- Min-Heap → **O(n)**
- Huffman Tree → **O(n)**

Therefore,

**Auxiliary Space Complexity = O(n)**

> **Note:** The input characters and their frequencies are not included in the auxiliary space complexity.

---

## Key Points

- It is a **Greedy Algorithm**.
- Used for **lossless data compression**.
- Frequently occurring characters receive **shorter binary codes**.
- Less frequent characters receive **longer binary codes**.
- Uses a **Min-Heap (Priority Queue)** to efficiently select the two minimum-frequency nodes.
- The generated Huffman codes are **prefix codes**, meaning **no code is the prefix of another code**.
- Produces an **optimal prefix code**, minimizing the total number of bits required for encoding.

---

## Applications

- ZIP Compression
- GZIP
- JPEG Image Compression (entropy coding stage)
- PNG Image Compression
- Data Transmission
- File Compression Utilities