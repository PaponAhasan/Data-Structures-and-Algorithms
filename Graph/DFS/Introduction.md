## DFS (Depth First Search) 
```
 DFS algorithm in the data structure. It is a recursive algorithm to search all the vertices of a tree data structure or a graph.
 
 The depth-first search (DFS) algorithm starts with the initial node of graph G and goes deeper until we find the goal node or the 
 node with no children.
 
 Stack data structure can be used to implement the DFS algorithm.
```
```
1. First, create a stack with the total number of vertices in the graph.
2. Now, choose any vertex as the starting point of traversal, and push that vertex into the stack.
3. After that, push a non-visited vertex (adjacent to the vertex on the top of the stack) to the top of the stack.
4. Now, repeat steps 3 and 4 until no vertices are left to visit from the vertex on the stack's top.
5. If no vertex is left, go back and pop a vertex from the stack.
6. Repeat steps 2, 3, and 4 until the stack is empty.
```
Example : [Visualize of DFS](https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/visualize/)

## The applications of using the DFS algorithm
```
- DFS algorithm can be used to implement the topological sorting.
- It can be used to find the paths between two vertices.
- It can also be used to detect cycles in the graph.
- DFS algorithm is also used for one solution puzzles.
- DFS is used to determine if a graph is bipartite or not.
```

## Time complexity 
```
O(V + E), when implemented using an adjacency list.

The time complexity of the DFS algorithm is O(V+E), where V is the number of vertices and E is the number of edges in the graph.
The space complexity of the DFS algorithm is O(V).
```
