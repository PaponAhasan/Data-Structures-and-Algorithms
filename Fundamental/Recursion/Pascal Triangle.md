```c++
void pascal(vector<vector<ll>>&vec,int n){
    if(n==1){
        vec[n-1].push_back(1);
        return;
    }
    pascal(vec,n-1);
    for(int i=0;i<n;i++){
        if(i==0 or i==n-1){
            vec[n-1].push_back(1);
            continue;
        }
        vec[n-1].push_back((vec[n-2][i]+vec[n-2][i-1])%1000000007);
    }
    return;
}

void solve(){
    int n;
    cin>>n;
    vector<vector<ll>>vec(n);
    pascal(vec,n);
    for(int i=0;i<n;++i){
        if(i==n-1) cout<<vec[n-1][i]<<"\n";
        else cout<<vec[n-1][i]<<" ";
    }
}
```
