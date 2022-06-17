```
Given an array of integers arr, the task is to find the minimum and maximum element of that array using recursion.

Examples : 

Input: arr = {1, 4, 3, -5, -4, 8, 6};
Output: min = -5, max = 8
```
```c++
int find_max(int a[],int n){
    if(n==1) return a[0];
    
    if ( a[n-1] < find_max(a,n-1) ) 
        return find_max(a,n-1);
    else 
        return a[n-1];
}
```
```c++
int findMaxRec(int A[], int n)
{
    // if n = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return max(A[n-1], findMaxRec(A, n-1));
}
 
```
