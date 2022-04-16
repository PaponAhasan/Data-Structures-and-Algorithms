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

- The basic operations like adding an edge(inEdges), removing an edge(outEdges), and checking whether there is an edge from vertex 
  i to vertex j are extremely time efficient.
  
- It takes a lot of space and time to visit all the neighbors of a vertex, we have to traverse all the vertices in the graph, 
  which takes quite some time. This is because using an adjacency matrix will take up a lot of space where most of the elements
  will be 0, anyway. 
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
### Adjacency Matrix
```
Adjacency list is a linked representation. In this representation, for each vertex in the graph, we maintain the list of its 
neighbors. 
```
![image](https://user-images.githubusercontent.com/59710234/163690589-11bcc87d-b886-4b91-9480-6088a2b86ae1.png)
```
- Adjacency list saves lot of space.
- We can easily insert or delete as we use linked list.
- Such kind of representation is easy (singly linked list).
- The space complexity of adjacency list is O(V + E), because in an adjacency list information is stored only for those edges 
  that actually exist in the graph.
  
- Finding the adjacent list is not quicker than the adjacency matrix because all the connected nodes must be first explored to 
  find them.  
```
```c++
vector <int> adj[10];
int main()
{
     int nodes, edges;
     cin >> nodes;       //Number of nodes
     cin >> edges;       //Number of edges
     for(int i = 0;i < edges; ++i)
     {
         int x, y;
         cin >> x >> y;
         adj[x].push_back(y);        //Insert y in adjacency list of x
     }
     for(int i = 1;i <= nodes;++i)
     {   
         cout << "Adjacency list of node " << i << ": ";
         for(int j = 0;j < adj[i].size();++j)
         {
            if(j == adj[i].size() - 1)
               cout << adj[i][j] << endl;
            else
               cout << adj[i][j] << " --> ";
         }
      }
      return 0;
}
```
### Problem 
![image](https://user-images.githubusercontent.com/59710234/163693388-d38e2404-94bd-4dd1-a3cc-00906133ad27.png)
```c++
#include <bits/stdc++.h>
using namespace std;

vector<int>adj[10000];

int main() {
	int n,m;
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        int f = 0;
        for(int i=0;i<adj[a].size();i++){
            if(adj[a][i]==b){
                f = 1;
                break;
            }
        }
        (f?cout<<"YES\n":cout<<"NO\n");
    }
}
```
