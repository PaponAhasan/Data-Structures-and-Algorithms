#### Single Source Sortest Path (On Tree )
 
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
