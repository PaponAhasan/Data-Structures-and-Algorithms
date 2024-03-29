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

<details> <summary> DFS Code </summary>
 
<br/>
	
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

</details>

<details> <summary> How many Find connected components using DFS </summary>
 
<br/>
	
```c++
vector<int>adj[10000];
vector<int>vis(10000,0);

void DFS(int node){
     vis[node] = 1;
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
            DFS(i);
            connectedComponents++;
         }
     }
     cout<<"\nNumber of connected components: "<<connectedComponents<<'\n';
}
```
</details>
	
<details> <summary> Problem 01</summary>
 
 <br/>
 
![image](https://user-images.githubusercontent.com/59710234/163706685-bfa1b8da-081d-4276-b886-31063712f9cf.png)
 ```c++
vector<int>adj[10000];
vector<int>vis(10000,0);

void DFS(int node){
     vis[node] = 1;
     for(int i=0;i<adj[node].size();i++){
         int child = adj[node][i];
         if(vis[child] == 0){
            DFS(child);
         }
     }
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

<details> <summary> Single Source Sortest Path (On Tree ) </summary>
 
 <br/>
 
```c++
vector<int>adj[10000];
vector<int>vis(10000,0);
vector<int>dis(10000,0);

void DFS(int node,int cost){
     vis[node] = 1;
     dis[node] = cost;
     for(int i=0;i<adj[node].size();i++){
         int child = adj[node][i];
         if(vis[child] == 0){
            DFS(child,cost+1);
         }
     }
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
     
     int source;
     cin>>source;
     DFS(source,0);
        
     for(int i=1;i<=n;i++){
        if(dis[i] or source==i)
           cout<<source<<" --> "<<i<<" = "<<dis[i]<<'\n';
           else cout<<source<<" --> "<<i<<" = "<<"can't connected components"<<'\n';
     }
     return 0;
}
```

</details>

<details> <summary> Problem 02 </summary>
 
<br/>
 
![image](https://user-images.githubusercontent.com/59710234/163873918-2fe257ff-8fa7-4112-8814-a27a4ea64833.png)

```c++ 
vector<int>adj[10000];
vector<int>vis(10000,0);
vector<int>dis(10000,0);
 
void DFS(int node,int cost){
     vis[node] = 1;
     dis[node] = cost;
     for(int i=0;i<adj[node].size();i++){
         int child = adj[node][i];
         if(vis[child] == 0){
            DFS(child,cost+1);
         }
     }
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
     
     int source;
     cin>>source;
     DFS(source,0);
	
     int q;
     cin>>q;
     int mn = 1e6,Ans = 0,x;
     for(int i=0;i<q;i++){
	cin>>x;
	  if(dis[x]<mn) mn = dis[x],Ans = x;
	else 
	  if(dis[x]==mn and x<Ans) Ans = x; 
     }
     cout<<Ans<<"\n";
}	
```
	
</details>

<details> <summary> Bipartite Graph  </summary>
 
<br/>

```c++ 
vector<int>adj[10000];
vector<int>vis(10000,0);
vector<int>color(10000,0);
    
void DFS(int node,int c){
     vis[node] = 1;
     color[node] = c;
     //c?c=0:c=1;
     for(int i=0;i<adj[node].size();i++){
          int child = adj[node][i];
          if(vis[child] == 0){
             DFS(child,c^1); // c = color(1 or 0)
         }
     }
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
         
     DFS(1,0);
     bool f = true;
     for(int i=1;i<=n;i++){
        for(int j=0;j<adj[i].size();j++){
           if(color[i]==color[adj[i][j]]){
               f = false; // check Bipartite or not
           }
        }
     }
	
     if(f) cout<<"Bipartite ";
     else cout<<"Not Bipartite ";
}	
```
https://ideone.com/vdGJWR
	
</details>

<details> <summary> Problem 03</summary>
 
 <br/>
 
![image](https://user-images.githubusercontent.com/59710234/164339334-5b9c25a0-6bed-406b-a023-745f3bfe27e4.png)

 ```c++
vector<int>adj[100001];
vector<int>vis(100001,0);
vector<int>color(100001,0);
    
bool DFS(int node,int c){
    vis[node] = 1;
    color[node] = c;

    for(int i=0;i<adj[node].size();i++){
       int child = adj[node][i];
       if(vis[child] == 0){
          if(DFS(child,c^1)==false)
              return false;
       }
       else{
           if(color[node]==color[child])
              return false;
           }
    }
    return true;
}

int main(){
    LL n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++) 
       adj[i].clear(),vis[i] = 0; 

    while(m--){
       int x,y;
       cin>>x>>y;
       adj[x].push_back(y);
       adj[y].push_back(x);
     }

     for(int i=1;i<=n;i++){
       if(vis[i]==0){
         if(DFS(i,0)==false){
             cout<<"Suspicious bugs found!\n";
             return;
         }
       }
     }

     cout<<"No suspicious bugs found!\n"; 
     return 0;
}
 ```
	  
</details>

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
