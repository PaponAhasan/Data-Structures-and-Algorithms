```
The following two are the most commonly used representations of a graph. 
1. Adjacency Matrix 
2. Adjacency List 
There are other representations also like, Incidence Matrix and Incidence List. 
```
### Adjacency Matrix
```
Adjacency Matrix is a 2D array of size V x V where V is the number of vertices in a graph.
- Let the 2D array be adj[][], a slot adj[i][j] = 1 indicates that there is an edge from vertex i to vertex j. 
- Adjacency matrix for undirected graph is always symmetric. 
- If adj[i][j] = w, then there is an edge from vertex i to vertex j with weight w. 
```
![image](https://user-images.githubusercontent.com/59710234/163690145-84f23dc1-352c-481e-856c-35fcb6f5ced7.png)
```
- Removing an edge takes O(1) time. 
- Queries like whether there is an edge from vertex ‘u’ to vertex ‘v’ are efficient and can be done O(1).
- Adding a vertex is O(V^2) time. 
- Consumes more space O(V^2).

- The basic operations like adding an edge(inEdges), removing an edge(outEdges), and checking whether there is an edge from vertex i to vertex j are 
  extremely time efficient.
```
```c++
int main()
{
    int n, m;
    cin >> n >> m ;
    int adjMat[n + 1][m + 1];
    for(int i = 0; i < m; i++){
        int u , v ;
        cin >> u >> v ;
        adjMat[u][v] = 1 ;
          adjMat[v][u] = 1 ;
    } 
    return 0;
}
```
