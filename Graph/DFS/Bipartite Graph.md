### Bipartite Graph

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
