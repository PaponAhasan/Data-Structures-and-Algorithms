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

<details> <summary> How DFS Traversal </summary>

<br/>
 
![image](https://user-images.githubusercontent.com/59710234/163703902-70ad7691-a11d-4efa-a2a8-82d941e1d673.png)

</details>

### Time complexity 
```
O(V + E), when implemented using an adjacency list.
```

```c++
vector<int>adj[10000];
vector<int>vis(10000,0);

void DFS(int node){
     vis[node] = 1;
     cout<<node<<" ";
     for(int i=0;i<adj[node].size();i++){
         int child = adj[node][i];
         if(vis[child] == 0){
            DFS(child);
         }
     }
     cout<<"\n";
}

int main(){
     int n,m;
     cin>>n>>m;
     while(m--){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
     }
     DFS(1);
}
```
### How to find connected components using DFS?
```c++
vector<int>adj[10000];
vector<int>vis(10000,0);

void DFS(int node){
     vis[node] = 1;
     cout<<node<<" ";
     for(int i=0;i<adj[node].size();i++){
         int child = adj[node][i];
         if(vis[child] == 0){
            DFS(child);
         }
     }
     cout<<"\n";
}

int main(){
     int n,m;
     cin>>n>>m;
     while(m--){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
     }
     int connectedComponents = 0;
     for(int i=1;i<=n;i++){
         if(vis[i]==0){
            DFS(1);
            connectedComponents++;
         }
     }
     cout<<"\nNumber of connected components: "<<connectedComponents<<'\n';
}
```
<details> <summary> Problem </summary>
 
 <br/>
 
![image](https://user-images.githubusercontent.com/59710234/163706685-bfa1b8da-081d-4276-b886-31063712f9cf.png)
 ```c++
 vector<int>adj[10000];
vector<int>vis(10000,0);

void DFS(int node){
     vis[node] = 1;
     cout<<node<<" ";
     for(int i=0;i<adj[node].size();i++){
         int child = adj[node][i];
         if(vis[child] == 0){
            DFS(child);
         }
     }
}

int main(){
     int unreachableNodes = 0;
	    int head;
	    cin>>head;
	    DFS(head);
     for(int i=1;i<=n;i++){
        if(vis[i]==0){
            unreachableNodes++;
        }
     }
     cout<<unreachableNodes<<'\n';
	    return 0;
}
 ```
</details>
