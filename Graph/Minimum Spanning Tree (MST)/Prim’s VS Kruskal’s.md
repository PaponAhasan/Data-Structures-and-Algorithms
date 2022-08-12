
### Prim’s Algorithm
```
- Prim’s starts to build the Minimum Spanning Tree from any vertex in the graph.
- Prim’s algorithm is also a Greedy algorithm.
- Undirected connected graph is a spanning tree.
```
### Kruskal’s Algorithm
```
- Kruskal’s starts to build the Minimum Spanning Tree from minimum weight vertex in the graph.
- Kruskal’s algorithm,  is also a Greedy algorithm.
- Undirected Disconnected graph is a spanning tree.
```

### BFS VS DFS

|  No    |  Prim’s Algorithm      |    Kruskal’s Algorithm     |
| -----  | ---------------------- | -------------------------- |
|    1   | Prim’s starts to build the Minimum Spanning Tree from any vertex in the graph. | Kruskal’s starts to build the Minimum Spanning Tree from the vertex minimum weight in the graph. |
|    2   | Prim’s traverses one node more than one time to get the minimum distance.   |  Kruskal’s traverses one node only once.      |
|    3   | Prim’s algorithm runs faster in dense graphs.        | Kruskal’s algorithm runs faster in sparse graphs.        |
|    4   | Prim’s generates the minimum spanning tree starting from the root vertex.        | Kruskal’s generates the minimum spanning tree starting from the least weighted edge.      |
|    5   | When the tree are growing always Prim’s works only on connected graph.        | When the tree are growing always Kruskal’s can work on disconnected components.       |
|    6   | Prim’s algorithm has a time complexity of O(V^2), can be improved up to O(E log V) using Fibonacci heaps. | Kruskal’s algorithm’s time complexity is O(E log V).        |
|    7   | Prim’s algorithm prefer list data structures.        | Kruskal’s algorithm prefer heap data structures.        |


- [Difference between Prim’s and Kruskal’s algorithm for MST - Geeksforgeeks](https://www.geeksforgeeks.org/difference-between-prims-and-kruskals-algorithm-for-mst/)
