# Design and Analysis of Algorithms Lab

This repository contains a collection of programs implemented as part of the Design and Analysis of Algorithms Laboratory course in the 2nd year of my undergrad.

## Program List

1. **Tower of Hanoi**: This program demonstrates the classic Tower of Hanoi problem using a recursive approach. It showcases the steps required to solve the puzzle for a given number of disks.
   - File: [1_toh.c](1_toh.c)
   
2. **Binary Search**: This program showcases the binary search algorithm implemented recursively. Given a sorted array and a target element, it efficiently finds the index of the target element in the array.
   - File: [2_binary_search_recursive.c](2_binary&nbspsearch_recursive.c)
   
3. **Merge Sort**: This program implements the Merge Sort algorithm to efficiently sort an array of elements in non-decreasing order. It demonstrates the divide-and-conquer strategy of merge sorting.
   - File: [3_merge_sort.c](3_merge&nbspsort.c)
   
4. **Quick Sort**: This program implements the Quick Sort algorithm to sort an array of elements. It showcases the efficient in-place partitioning and sorting performed by the algorithm.
   - File: [4_quick_sort.c](4_quick&nbspsort.c)
   
5a. **Prim's Algorithm**: This program implements Prim's algorithm for finding the Minimum Spanning Tree (MST) of a weighted, connected graph. It showcases the greedy approach used by the algorithm.
   - File: [5a_prims_algorithm.c](5a_prims&nbspalgorithm.c)
   
5b. **Kruskal's Algorithm**: This program implements Kruskal's algorithm to find the Minimum Spanning Tree (MST) of a connected, weighted graph. It demonstrates the use of disjoint sets (Union-Find) to detect cycles.
   - File: [5b_kruskals_algorithm.c](5b_kruskals&nbspalgorithm.c)
   
6. **Dijkstra's Algorithm**: This program showcases Dijkstra's algorithm for finding the shortest path in a weighted graph with non-negative edge weights. It demonstrates the concept of dynamic programming and greedy choices.
   - File: [6_dijkstras_algorithm.c](6_dijkstras&nbspalgorithm.c)
   
7. **Integral Knapsack**: This program solves the 0/1 Knapsack problem using the Integral Knapsack dynamic programming approach. It efficiently selects items to maximize the total value within a given weight constraint.
   - File: [7_integral_knapsack.c](7_integral&nbspknapsack.c)
   
8. **Traveling Salesman Problem (Nearest Neighbour)**: This program addresses the Traveling Salesman Problem using the Nearest Neighbour algorithm. It aims to find the shortest possible route that visits all cities exactly once and returns to the starting city.
   - File: [8_traveling_salesman_problem_nearest_neighbour.c](8_traveling&nbspsalesman&nbspproblem_nearest&nbspneighbour.c)
   
9. **Floyd Warshall Algorithm**: This program implements the Floyd Warshall algorithm for all-pairs shortest path in a weighted graph. It showcases the dynamic programming approach to finding shortest paths.
    - File: [9_floyd_warshall_algorithm.c](9_floyd&nbspwarshall&nbspalgorithm.c)
   
10. **Longest Common Subsequence (Dynamic Programming)**: This program finds the Longest Common Subsequence (LCS) of two input sequences using dynamic programming. It demonstrates how to efficiently solve this problem using memoization.
    - File: [10_longest_common_subsequence_dynamic_programming.c](10_longest&nbspcommon&nbspsubsequence_dynamic&nbspprogramming.c)

## Instructions to Run

### Running on Ubuntu (gcc)

1. Make sure you have GCC (GNU Compiler Collection) installed on your system.

2. Open a terminal and navigate to the directory containing the program files.

3. Compile a program using the following command (replace `<program_file.c>` with the actual filename):

   ```
   gcc -o output <program_file.c>
   ```

4. Run the compiled program using:

   ```
   ./output
   ```

### Online Compilers

You can also run these programs on various online compilers and debuggers. Here are a few options:

1. **Online GDB**: An online debugger and compiler based on the GNU Debugger.
   - Link: [Online GDB](https://www.onlinegdb.com/online_c_compiler)
   - Copy and paste the code into the editor, then compile and run.

2. **Programiz**: An online code editor and compiler.
   - Link: [Programiz C Compiler](https://www.programiz.com/c-programming/online-compiler/)
   - Paste the code into the editor and hit the "Compile and Run" button.

3. **Ideone**: An online compiler and debugging tool.
   - Link: [Ideone](https://ideone.com/)
   - Paste the code into the editor and click the "Run" button.
