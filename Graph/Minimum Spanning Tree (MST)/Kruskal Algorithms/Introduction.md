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

![image](https://user-images.githubusercontent.com/59710234/184293366-62d1bf59-2e6e-4021-bf02-4ca9ff8fccc1.png)
![image](https://user-images.githubusercontent.com/59710234/184293563-f113f124-8da4-46d3-987c-4a627f7be5ee.png)
![image](https://user-images.githubusercontent.com/59710234/184293733-ef63ed66-6546-4050-967a-7814a6716d7a.png)
![image](https://user-images.githubusercontent.com/59710234/184293830-56918e20-290e-4fc4-8f3a-54dc76f91ad6.png)
![image](https://user-images.githubusercontent.com/59710234/184293919-92c94a12-fff4-498a-8124-c61c1808524f.png)
![image](https://user-images.githubusercontent.com/59710234/184294213-1d0427c6-f99c-43ab-840a-444caa01ed7c.png)
![image](https://user-images.githubusercontent.com/59710234/184294340-db1b17e1-fa6d-4825-8022-948160f37e00.png)
![image](https://user-images.githubusercontent.com/59710234/184294479-67be5edb-b90a-46d0-a13b-46b1259eedd1.png)

### Kruskal's Algorithm Complexity
```
O(ElogE) or O(ElogV).
Sorting of edges takes O(ELogE) time. After sorting, we iterate through all edges and apply the find-union algorithm. The find
and union operations can take at most O(LogV) time.  So overall complexity is O(ELogE + ELogV) time. 

The value of E can be at most O(V2), so O(LogV) is O(LogE) the same. Therefore, the overall time complexity is O(ElogE) or O(ElogV)
```
