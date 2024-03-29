```
In fibnacci sequence 0, 1, 1 , 2, 3, 5, 8, .....
So , f[n] = f[n-1] + f[n-2]
```
![image](https://user-images.githubusercontent.com/59710234/174422393-ceebce83-6f51-48e3-b1b5-58896ca12984.png)

```c++
// Karim Write Code (The Iterative (Bottom-Up) Approach)

int fib(int n)
{
    int F1 = 0, F2 = 1, F, i;
    if( n == 0)
        return F1;
    for(i = 2; i <= n; i++)
    {
       F = F1 + F2;
       F1 = F2;
       F2 = F;
    }
    return F;
}
```
```c++
// Rahim Write Code (A Recursively (Top-Down) Approach)

int Fib(int n)
{
    if (n <= 1)
        return n;
    return Fib(n-1) + Fib(n-2);
}
```
```
Time complexity : T(n) = T(n-1) + T(n-2) + 4
=> T(n) = 2*T(n-1) + c  [T(n-1) ~ T(n-2)]
=> T(n) = 2*[ 2T(n-2) + c ] + c
=> T(n) = 4T(n-2) + 3c
        = 8T(n-3) + 7c
	= 2^k* T(n-k) + (2^k - 1)c
	
Assume n-k = 0 
 => k = n
 
 T(n) = 2^n * T(0) + (2^n - 1) c
      = 2^n * 1 + (2^n - 1) c
      = 2^n + c*2^n - c
      = 2^n (1+c) - c
      O(2^n)
```
```
The time complexity of the given program can depend on the function call.

Iterative Time Complexity O(n)
Recursively Time Complexity O(2^n)
```
- [Recursively Code](https://pastebin.com/GKuEng6x)

Problem :

- [Geek-onacci-number](https://practice.geeksforgeeks.org/problems/geek-onacci-number/0/?category#) 
([Code](https://ideone.com/eA7HjG))
