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

- [dijkstras-algorithm-shortest-path-algorithm](https://www.analyticssteps.com/blogs/dijkstras-algorithm-shortest-path-algorithm)
