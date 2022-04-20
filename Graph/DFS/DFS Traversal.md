<details> <summary> How DFS Traversal </summary>

<br/>
 
![image](https://user-images.githubusercontent.com/59710234/163703902-70ad7691-a11d-4efa-a2a8-82d941e1d673.png)

</details>

## DFS Code
	
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
