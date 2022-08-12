
undirected graph is a spanning tree
Kruskal’s algorithm, Prim’s algorithm is also a Greedy algorithm

### BFS VS DFS

|  No    |  Prim’s Algorithm      |    Kruskal’s Algorithm     |
| -----  | ---------------------- | -------------------------- |
|    1   | It starts to build the Minimum Spanning Tree from any vertex in the graph | It starts to build the Minimum Spanning Tree from the vertex minimum weight in the graph. |
|    2   | It traverses one node more than one time to get the minimum distance.   |  Kruskal’s algorithm runs faster in sparse graphs.      |
|    3   | Prim’s algorithm runs faster in dense graphs        | It is faster than BFS.        |
|    4   | It generates the minimum spanning tree starting from the root vertex.        | It generates the minimum spanning tree starting from the least weighted edge.      |
|    5   | When the target is close to the source, BFS performs better.        |  When the target is far from the source, DFS is better.       |
|    6   | Prim’s algorithm has a time complexity of O(V^2), can be improved up to O(E log V) using Fibonacci heaps. | Kruskal’s algorithm’s time complexity is O(E log V).        |
|    7   | Prim’s algorithm prefer list data structures.        | Kruskal’s algorithm prefer heap data structures.        |

- [Difference between Prim’s and Kruskal’s algorithm for MST - Geeksforgeeks](https://www.geeksforgeeks.org/difference-between-prims-and-kruskals-algorithm-for-mst/)
