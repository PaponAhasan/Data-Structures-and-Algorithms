![image](https://user-images.githubusercontent.com/59710234/166085655-4f75705b-7225-4b16-b8e6-bd1583bc64d0.png)

```
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 

The formula to find nCr is n! / r! * (n – r)! which is also the formula for a cell of Pascal’s triangle.
n = 5, r = 0 - 4
n! / r! * (n - r)! = 5! / 0! * (5!) = 120 / 120 = 1
n! / r! * (n - r)! = 5! / 1! * (4!) = 120 / 24 = 5
n! / r! * (n - r)! = 5! / 2! * (3!) = 120 / 12 = 10
n! / r! * (n - r)! = 5! / 3! * (2!) = 120 / 12 = 10
n! / r! * (n - r)! = 5! / 4! * (1!) = 120 / 24 = 5
n! / r! * (n - r)! = 5! / 5! * (0!) = 120 / 120 = 1
```
#### Problem :
- [Pascal-Triangle](https://practice.geeksforgeeks.org/problems/pascal-triangle0652/1#)
  ([Code](https://ideone.com/heWSFk))
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
