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
```
To create the pascal triangle use these two formula: 
1. nC0 = 1, number of ways to select 0 elements from a set of n elements is 0
2. nCr = (n-1)C(r-1) + (n-1)C(r), number of ways to select r elements from a set of n elements is summation of ways to select r-1 
elements from n-1 elements and ways to select r elements from n-1 elements.

For example, to calculate nCr, use the values of (n-1)C(r-1) and (n-1)C(r).
```
#### Method 01 : Way nCr
```c++
#include <bits/stdc++.h>
using namespace std;

int l[1001][1001] = { 0 };

void initialize()
{
    l[0][0] = 1; // 0C0 = 1
    for (int i = 1; i < 1001; i++) {
       l[i][0] = 1; // Set every nCr = 1 where r = 0
       for (int j = 1; j < i + 1; j++) {
           l[i][j] = (l[i - 1][j - 1] + l[i - 1][j]); // Value for the current cell of Pascal's triangle
       }
    }
}

int nCr(int n, int r)
{
    return l[n][r]; // Return nCr
}

int main()
{
    initialize();
    int n = 5;
    int r = n+1;
    for(int i=0;i<r;i++){
       cout << nCr(n, i)<<" ";
    }
}
```
#### Method 02 : Using Recursion
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
        vec[n-1].push_back(vec[n-2][i]+vec[n-2][i-1]);
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
#### Method 03 : Using Math Pattern
```c++
void printPascal(int n)
{
     
for (int line = 1; line <= n; line++)
{
    int C = 1; // used to represent C(line, i)
    for (int i = 1; i <= line; i++)
    {
         
        // The first value in a line is always 1
        cout<<C<<" ";
        C = C * (line - i) / i;
    }
    cout<<"\n";
}
```
#### Problem :
- [Pascal-Triangle](https://practice.geeksforgeeks.org/problems/pascal-triangle0652/1#)
  ([Code](https://ideone.com/heWSFk))
