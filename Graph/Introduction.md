```
Graphs are mathematical structures that represent pairwise relationships between objects. It can be visualized by using the 
following two basic components:

- Nodes/Vertex/Point/Junction: One of the points on which the graph is defined and which may be connected by lines/edges is 
  called a vertex. In bellow example graph, A, B, C, D & E are known as vertices.
  
- Edges/Lines: Edge is the connection between two vertices. Each edge connects one vertex to another vertex in the graph. 
  Edge can either be directed or undirected. There are 7 edges (i.e., (A,B), (A,C), (A,D), (B,D), (B,E), (C,D), (D,E)).
```
![image](https://user-images.githubusercontent.com/59710234/163689505-1cc5fd8e-5744-4c2c-8ddc-9caf7996d078.png)
```
The following is a graph with 5 vertices and 6 edges.
This graph G can be defined as G = ( V , E )
Where V = {A,B,C,D,E} and E = {(A,B),(A,C)(A,D),(B,D),(C,D),(B,E),(E,D)}.
```

```
Types of nodes :

- Root node:

- Leaf nodes:
```
```
Types of graphs:

- Null Graph : A null graph is a graph in which there are no edges between its vertices. A null graph is also called empty graph.

- Trivial Graph : A trivial graph is the graph which has only one vertex.

- Undirected:  A directed edge is the edge which points from one vertex to another.

- Directed: An undirected edge has no direction from one vertex to another.

- Complete Graph : A graph in which every pair of vertices is joined by exactly one edge is called complete graph.

- Weighted: A weighted graph is a graph whose edges have been labeled with some weights or numbers.

- Cyclic: A graph containing at least one cycle in it is known as a cyclic graph. In the cycle graph, degree of each vertex is 2.

- Acyclic Graph : A graph which does not contain any cycle in it is called as an acyclic graph.

- Connected Graph : A connected graph is a graph in which we can visit from any one vertex to any other vertex.

- Disconnected Graph : A disconnected graph is a graph in which any path does not exist between every pair of vertices.

- Regular Graph : A Regular graph is a graph in which degree of all the vertices is same.

- Bipartite Graph : 
```
![image](https://user-images.githubusercontent.com/59710234/163694813-33228ff7-9bd5-4ba7-bfc4-7d02b7c679a9.png)
![image](https://user-images.githubusercontent.com/59710234/163694821-7c94cb1d-4873-44af-bba3-0bb55671de3d.png)

```
Adjacent : If there is an edge between vertices A and B then both A and B are said to be adjacent. In other words, vertices
A and B are said to be adjacent if there is an edge between them.

Degree : Total number of edges connected to a vertex is said to be degree of that vertex.

Indegree : Total number of incoming edges connected to a vertex is said to be indegree of that vertex.

Outdegree : Total number of outgoing edges connected to a vertex is said to be outdegree of that vertex.

Outgoing Edge : A directed edge is said to be outgoing edge on its "origin vertex".

Incoming Edge : A directed edge is said to be incoming edge on its "destination vertex".
```
### Graph Traversal
```
Graph traversal is a technique used for a searching vertex in a graph. Using graph traversal we visit all the vertices of the 
graph without getting into looping path.

There are two graph traversal techniques and they are as follows...

1. DFS (Depth First Search) : DFS traversal of a graph produces a spanning tree as final result. Spanning Tree is a graph without
loops. We use Stack data structure with maximum size of total number of vertices in the graph to implement DFS traversal.

2. BFS (Breadth First Search) : BFS traversal of a graph produces a spanning tree as final result. Spanning Tree is a graph without 
loops. We use Queue data structure with maximum size of total number of vertices in the graph to implement BFS traversal.
```

REFERENCE :
- [btechsmartclass](http://www.btechsmartclass.com/data_structures/graph-traversal-dfs.html)
- [hackerearth](https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/tutorial/)
- [javatpoint](https://www.javatpoint.com/depth-first-search-algorithm)
- [geeksforgeeks](https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/)
- [hackerearth](https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/tutorial/)
- [programiz](https://www.programiz.com/dsa/graph-dfs)
