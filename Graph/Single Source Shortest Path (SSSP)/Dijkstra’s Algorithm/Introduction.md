```
Dijkstra's algorithm allows us to find the shortest path between any two vertices of a graph. It's solves the single-source 
shortest path problem with non-negative edge weight.

It differs from the minimum spanning tree because the shortest distance between two vertices might not include all the vertices of
the graph.

- Dijkstra's Algorithm finds the shortest path between a given node (which is called the "source node") and all other nodes in a 
  graph.
- This algorithm uses the weights of the edges to find the path that minimizes the total distance (weight) between the source node 
  and all other nodes.
```
### How Dijkstra's Algorithm works
```
1. The very first step is to mark all nodes as unvisited

2. Mark the picked starting node with a current distance of 0 and the rest nodes with infinity

3. Now, fix the starting node as the current node

4. For the current node, analyse all of its unvisited neighbours,
     if, current node distances and it's neighbour node cost, smaller then neighbouring node distance, 
     then make it as the new current distance of the neighbouring node. using bellow formula
     
   if d[u] + cost[u][v] < d[v]:
      d[v] = d[u] + cost[u][v]
      
5. After that, consider all of the unvisited neighbours of the current node, mark the current node as visited

6. And repeat the process again from step 4, 5

8. If the destination node has been marked visited then stop, an algorithm has ended
```

### Example of Dijkstra's algorithm
![image](https://user-images.githubusercontent.com/59710234/184418916-a5321816-46f4-4226-8580-936f107ccc4e.png)

![image](https://user-images.githubusercontent.com/59710234/184418975-589abb17-a1bb-45f0-885e-100a41b1e92d.png)

![image](https://user-images.githubusercontent.com/59710234/184419105-28452a01-83e5-4ccd-b0d0-fde4f90fe3ee.png)

![image](https://user-images.githubusercontent.com/59710234/184419238-006ff57f-82fe-435a-8b11-e103ab1d8155.png)

![image](https://user-images.githubusercontent.com/59710234/184419302-2d608da3-465c-4982-abee-068a5cee086f.png)

![image](https://user-images.githubusercontent.com/59710234/184419406-5800bb52-f0a1-46bf-8945-d38d34ff67a5.png)

![image](https://user-images.githubusercontent.com/59710234/184419539-22e46808-ef2d-40c1-bd08-1e3a3b420945.png)

![image](https://user-images.githubusercontent.com/59710234/184419601-437cfee3-a093-4509-9ecd-74862fedbcd2.png)


### Dijkstra's Algorithm Complexity
```
Time Complexity: O(E Log V)

where, E is the number of edges and V is the number of vertices.

Space Complexity: O(V)
```

### Dijkstra's Algorithm Applications
```
- To find the shortest path
- In social networking applications
- In a telephone network
- To find the locations in the map
```

### Advantages and Disadvantages of Dijkstra’s Algorithm

- [dijkstras-algorithm-shortest-path-algorithm](https://www.analyticssteps.com/blogs/dijkstras-algorithm-shortest-path-algorithm)
