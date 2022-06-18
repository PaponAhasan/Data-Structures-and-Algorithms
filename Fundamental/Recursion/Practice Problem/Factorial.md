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

