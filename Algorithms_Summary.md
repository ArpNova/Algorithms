# Complete Algorithms Summary

This document provides a comprehensive summary of all the algorithms used across the `Programs` and `allAlgorithms` directories in this project. It details their solution approaches, time complexities (Best, Average, Worst), space complexities, brief explanations, and their categorizations within P and NP complexity classes.

| Problem / Algorithm | Solution Approach | Time Complexity (Best) | Time Complexity (Avg) | Time Complexity (Worst) | Space Complexity | Short Explanation | NP Category |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **0-1 Knapsack** | Dynamic Programming / Branch & Bound | $O(N \cdot W)$ | $O(N \cdot W)$ | $O(N \cdot W)$ | $O(N \cdot W)$ | Maximize value by either picking or not picking whole items without exceeding capacity limit $W$. | NP-Complete |
| **15-Puzzle** | Branch & Bound | $O(1)$ | $O(b^d)$ | $O(b^d)$ | $O(b^d)$ | Find the shortest sequence of moves to reach the goal state using a state space tree. | NP-Hard |
| **8-Queen / N-Queens** | Backtracking | $O(N)$ | $O(N!)$ | $O(N!)$ | $O(N)$ | Place N non-attacking queens on an $N \times N$ chessboard. | NP-Hard |
| **Bellman-Ford** | Dynamic Programming | $O(E)$ | $O(V \cdot E)$ | $O(V \cdot E)$ | $O(V)$ | Single-source shortest path that can handle graphs with negative weight edges. | P |
| **Breadth-First Search (BFS)** | Graph Traversal | $O(V+E)$ | $O(V+E)$ | $O(V+E)$ | $O(V)$ | Traverses a graph level by level using a Queue. | P |
| **Binary Search** | Divide & Conquer | $O(1)$ | $O(\log N)$ | $O(\log N)$ | $O(1)$ | Finds an element in a sorted array by repeatedly halving the search space. | P |
| **Depth-First Search (DFS)** | Graph Traversal | $O(V+E)$ | $O(V+E)$ | $O(V+E)$ | $O(V)$ | Traverses a graph by going as deep as possible before backtracking using a Stack/Recursion. | P |
| **Dijkstra's Algorithm** | Greedy | $O((V+E)\log V)$ | $O((V+E)\log V)$ | $O((V+E)\log V)$ | $O(V)$ | Single-source shortest path for graphs with non-negative edge weights (using Min-Heap). | P |
| **Edmonds-Karp** | Network Flow | $O(V \cdot E^2)$ | $O(V \cdot E^2)$ | $O(V \cdot E^2)$ | $O(V+E)$ | Implementation of Ford-Fulkerson using BFS to find shortest augmenting paths for maximum flow. | P |
| **Floyd-Warshall** | Dynamic Programming | $O(V^3)$ | $O(V^3)$ | $O(V^3)$ | $O(V^2)$ | Finds the shortest paths between all pairs of vertices in a weighted graph. | P |
| **Ford-Fulkerson** | Network Flow | $O(E \cdot f^*)$ | $O(E \cdot f^*)$ | $O(E \cdot f^*)$ | $O(V+E)$ | Computes the maximum flow in a flow network. $f^*$ is the maximum flow. | Pseudo-polynomial |
| **Fractional Knapsack** | Greedy | $O(N \log N)$ | $O(N \log N)$ | $O(N \log N)$ | $O(1)$ | Maximize value by greedily picking items with the highest value-to-weight ratio, allowing fractions. | P |
| **GCD (Euclidean Algorithm)**| Divide & Conquer / Math | $O(1)$ | $O(\log(\min(a,b)))$ | $O(\log(\min(a,b)))$ | $O(\log(\min(a,b)))$| Finds the greatest common divisor of two integers. | P |
| **Graph Coloring (m-Coloring)**| Backtracking | $O(V)$ | $O(m^V)$ | $O(m^V)$ | $O(V)$ | Assigns up to $m$ colors to vertices such that no two adjacent vertices have the same color. | NP-Complete |
| **Hamiltonian Cycle** | Backtracking | $O(V^2)$ | $O(V!)$ | $O(V!)$ | $O(V)$ | Finds a cycle in a graph that visits every vertex exactly once and returns to the start. | NP-Complete |
| **Heap Sort** | Data Structure (Sorting) | $O(N \log N)$ | $O(N \log N)$ | $O(N \log N)$ | $O(1)$ | Sorts an array by first building a Max/Min-Heap and repeatedly extracting the root. | P |
| **Huffman Coding** | Greedy | $O(N \log N)$ | $O(N \log N)$ | $O(N \log N)$ | $O(N)$ | Creates an optimal prefix code for lossless data compression based on character frequencies. | P |
| **Job Sequencing w/ Deadlines**| Greedy | $O(N \log N)$ | $O(N^2)$ | $O(N^2)$ | $O(N)$ | Schedules jobs to maximize profit such that each chosen job is completed within its deadline. | P |
| **Kruskal's MST** | Greedy | $O(E \log E)$ | $O(E \log E)$ | $O(E \log E)$ | $O(V+E)$ | Finds a Minimum Spanning Tree by sorting edges and picking them if they don't form a cycle. | P |
| **Linear Search** | Brute Force | $O(1)$ | $O(N)$ | $O(N)$ | $O(1)$ | Finds an element in an array by sequentially checking each element until a match is found. | P |
| **Matrix Chain Multiplication** | Dynamic Programming | $O(N^3)$ | $O(N^3)$ | $O(N^3)$ | $O(N^2)$ | Finds the most efficient way to parenthesize a sequence of matrices to minimize scalar multiplications. | P |
| **Matrix Multiplication** | Divide & Conquer (Strassen) | $O(N^2)$ | $O(N^{2.81})$ | $O(N^{2.81})$ | $O(N^2)$ | Multiplies two matrices efficiently using Strassen's algorithm over standard $O(N^3)$ approach. | P |
| **Max-Min** | Divide & Conquer | $O(N)$ | $O(N)$ | $O(N)$ | $O(\log N)$ | Finds the maximum and minimum elements in an array simultaneously with minimal comparisons. | P |
| **Merge Sort** | Divide & Conquer | $O(N \log N)$ | $O(N \log N)$ | $O(N \log N)$ | $O(N)$ | Sorts an array by dividing it into halves, sorting them recursively, and merging them. | P |
| **Power (Exponentiation)** | Divide & Conquer | $O(1)$ | $O(\log N)$ | $O(\log N)$ | $O(\log N)$ | Calculates $x^n$ efficiently by recursively calculating $(x^{n/2})^2$. | P |
| **Prim's MST** | Greedy | $O((V+E)\log V)$ | $O((V+E)\log V)$ | $O((V+E)\log V)$ | $O(V)$ | Finds a Minimum Spanning Tree by growing a single tree from a starting vertex (using Min-Heap). | P |
| **Quick Sort** | Divide & Conquer | $O(N \log N)$ | $O(N \log N)$ | $O(N^2)$ | $O(\log N)$ | Sorts by selecting a pivot, partitioning elements around it, and recursively sorting subarrays. | P |
| **Sum of Natural Numbers** | Recursion / Math | $O(1)$ | $O(N)$ | $O(N)$ | $O(N)$ | Calculates the sum of first $N$ natural numbers (recursive approach uses $O(N)$ time/space). | P |
| **Tower of Hanoi** | Recursion | $O(2^N)$ | $O(2^N)$ | $O(2^N)$ | $O(N)$ | Solves the mathematical puzzle of moving $N$ disks from a source to a destination rod. | EXPTIME |
| **Transitive Closure (Warshall)**| Dynamic Programming | $O(V^3)$ | $O(V^3)$ | $O(V^3)$ | $O(V^2)$ | Finds the reachability matrix determining if a path exists between any two vertices in a directed graph. | P |
| **Travelling Salesman (TSP)** | DP / Branch & Bound | $O(N^2 2^N)$ | $O(N^2 2^N)$ | $O(N!)$ | $O(N \cdot 2^N)$ | Finds the shortest possible route that visits every city exactly once and returns to the origin. | NP-Hard |
| **Vertex Cover** | Approximation / Backtracking| $O(V+E)$ | $O(2^V)$ | $O(2^V)$ | $O(V)$ | Finds a minimum set of vertices such that every edge is incident to at least one vertex in the set. | NP-Complete |

*Note: For graph algorithms, $V$ represents the number of vertices and $E$ represents the number of edges. For arrays/matrices/lists, $N$ represents the number of elements or matrix dimensions. $W$ is the capacity for Knapsack.*
