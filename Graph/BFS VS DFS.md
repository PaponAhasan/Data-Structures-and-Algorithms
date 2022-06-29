```
- If you know a solution is not far from the root of the tree, a breadth first search (BFS) might be better.

- If the tree is very deep and solutions are rare, depth first search (DFS) might take an extremely long time, but BFS could be 
  faster.
  
- If the tree is very wide, a BFS might need too much memory.

- BFS can be used to find a single source shortest path in an unweighted graph 

- BFS should typically be faster if the searched element is typically higher up in the search tree because it goes level by level.

- DFS might be faster if the searched element is typically relatively deep and finding one of many is sufficient
```

### Breadth-First Search(BFS)

```
- BFS stands for Breadth-First Search...

- It is a vertex-based technique for finding the shortest path in the graph...

- It uses a Queue data structure that follows first in first out.

- In BFS, one vertex is selected at a time when it is visited and marked then its adjacent are visited and stored in the queue.

- It is slower than DFS...

- BFS builds the tree level by level...

- It works on the concept of FIFO (First In First Out).

- BFS is more suitable when searching vertices are closer from source.

- When the target is close to the source, BFS performs better...

- The Time complexity of BFS is O(V + E)...

- In BFS there is no concept of backtracking. 

- BFS requires more memory.... 

- BFS is optimal for finding the shortest path.

- Example :

  Input :
   
        A
       / \
      B   C
     /   / \
    D   E   F
    
Output: A, B, C, D, E, F

```

### Depth First Search(DFS)

```
- DFS stands for Depth First Search

- It uses the Stack data structure 

- It uses a stack data structure that follows last in first out.

- In DFS, performs two stages, first visited vertices are pushed into the stack, and second if there are no vertices then visited 
  vertices are popped. 
  
- It is faster than BFS.

- DFS builds the tree sub-tree by sub-tree.

- It works on the concept of LIFO (Last In First Out).

- DFS is more suitable when searching vertices are away from source.

- When the target is far from the source, DFS is preferable.

- The Time complexity of DFS is also O(V + E) 

- DFS algorithm is a recursive algorithm and In there is concept of uses backtracking. 

- DFS requires less memory. 

- DFS is not optimal for finding the shortest path.

- Example :

Input :
        A
       / \
      B   C
     /   / \
    D   E   F
    
Output: A, B, D, C, E, F

  In DFS, the traverse begins at the root node and proceeds through the nodes until we reach, if there are no unvisited vertices 
  then visited vertices are popped
```

|  No    |   BFS      |    DFS     |
| -----  | -------    | -------    |
|    1   | BFS stands for Breadth-First Search | DFS stands for Depth First Search |
|    2   | It uses a Queue data structure that follows first in first out        |  It uses a stack data structure that follows last in first out.       |
|    3   | It is slower than DFS.        | It is faster than BFS.        |
|    4   | BFS builds the tree level by level        | DFS builds the tree sub-tree by sub-tree.        |
|    5   | When the target is close to the source, BFS performs better.        |  When the target is far from the source, DFS is better.       |
|    6   | In BFS there is no concept of backtracking.        | DFS algorithm is a recursive algorithm and In there is concept of uses backtracking.         |
|    7   | The Time complexity of BFS is O(V + E)        | The Time complexity of DFS is also O(V + E)        |
|    8   | BFS requires more memory        | DFS requires less memory        |
|    9   | BFS is optimal for finding the shortest path        | DFS is not optimal for finding the shortest path        |
|    10  | Example : Input -
   
        A
       / \
      B   C
     /   / \
    D   E   F
    
Output: A, B, C, D, E, F |  Example : Input :
        A
       / \
      B   C
     /   / \
    D   E   F
    
Output: A, B, D, C, E, F  |

- https://www.baeldung.com/cs/dfs-vs-bfs
- https://www.techiedelight.com/depth-first-search-dfs-vs-breadth-first-search-bfs/
- https://iq.opengenus.org/dfs-vs-bfs/
