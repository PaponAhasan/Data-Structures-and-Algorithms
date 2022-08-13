```
Ford-Fulkerson algorithm is a greedy approach for calculating the maximum possible flow in a network or a graph.

flow network, is used to describe a network of vertices and edges with a source (S) and a sink (T). Each vertex, except S and T,
can receive and send an equal amount of stuff through it. S can only send and T can only receive stuff.
```

### Example of Max Flow Ford Fulkerson algorithm


![image](https://user-images.githubusercontent.com/59710234/184473733-4a7f24d8-5cea-4704-b5b7-d0abd1fff96b.png)

![image](https://user-images.githubusercontent.com/59710234/184473758-48dd1aa1-c88b-43b8-bee7-dece45d9869f.png)

![image](https://user-images.githubusercontent.com/59710234/184473889-e1b909c2-ebe1-48aa-a84d-22abc4284d86.png)

![image](https://user-images.githubusercontent.com/59710234/184473981-8ed92ef2-ddf9-4b09-98b5-1450ede98a16.png)

![image](https://user-images.githubusercontent.com/59710234/184474008-11ea0902-c53f-4669-8baa-a5d227dc5adb.png)
```
Adding all the flows = 2 + 3 + 1 = 6, which is the maximum possible flow on the flow network.

if the capacity for any edge is full, then that path cannot be used.
```
### Max Flow Ford-Fulkerson Applications

```
  - Water distribution pipeline
  - Bipartite matching problem
```

### Time Complexity Max Flow Ford Fulkerson algorithm
```
Therefore the time complexity becomes O(max_flow * E).
```
- https://www.youtube.com/watch?v=NwenwITjMys&ab_channel=StartPracticing
- https://www.youtube.com/results?search_query=Maximum+Flow+Problem
