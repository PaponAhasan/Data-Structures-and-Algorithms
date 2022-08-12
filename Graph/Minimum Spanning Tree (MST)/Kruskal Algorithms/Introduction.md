```
Kruskal's algorithm is a minimum spanning tree algorithm that takes a graph as input and finds the subset of the edges of that 
graph which :
  - form a tree that includes every vertex
  - has the minimum sum of weights among all the trees that can be formed from the graph
```

### How Kruskal's algorithm works
```
Kruskal's algorithm follow  greedy approach , that find the local optimum in the hopes of finding a global optimum. We start 
from one edges with the lowest weight and keep adding edges with the lowest weight until we reach our goal.

The steps for implementing Prim's algorithm are as follows:

  1. Sort all the edges from low weight to high
  2. Take the edge with the lowest weight and add it to the spanning tree. If adding the edge created a cycle, then reject this 
     edge.
  3. Keep adding edges until we reach (V-1) all vertices.
```
> uses the Union-Find algorithm to detect cycles
> greedy approach

### Example of Kruskal's algorithm

![image](https://user-images.githubusercontent.com/59710234/184292173-5eafa170-b845-450d-a9fe-8991f8d50cc0.png)

|Weight|Src|Dest|
|------|---|----|
|   1  | 7 | 6  |
|   2  | 8 | 2  |  
|   2  | 6 | 5  |
|   4  | 0 | 1  |
|   4  | 2 | 5  |
|   6  | 8 | 6  |
|   7  | 2 | 3  |
|   7  | 7 | 8  |
|   8  | 0 | 7  |
|   8  | 1 | 2  |
|   9  | 3 | 4  |
|  10  | 5 | 4  |
|  11  | 1 | 7  |
|  14  | 3 | 5  |


### Kruskal's Algorithm Complexity
