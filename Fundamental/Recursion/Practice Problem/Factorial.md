```
n! = n * (n-1) * (n-2) *....* 2 * 1
    -------------------------------
            (n-1)!
 
0 factorial spacial case, the factorial 1
 
 So,
      { 1        n == 0
 n! = {
      { n*(n-1)  n > 0
```
```c++
int F(int n){
    if(n==1) return 1;
    
    //recursive call
    return n*F(n-1);
}
```
![image](https://user-images.githubusercontent.com/59710234/165887621-1c6aed24-ec89-4950-9626-bcbdc9d83613.png)

```
Time complexity : T(n) = T(n-1) + 3
=> T(n) = T(n-2) + 6
=> T(n) = T(n-3) + 9
=> T(n) = T(n-k) + 3*k

Assume n-k = 0 
 => k = n
 
 T(n) = T(n-n) + 3*n
      = T(0) + 3n
      = 3n + 1
      O(n)
      
Space complexity : In Recursion store data in stack. So max-depth n.
O(n)
```
