```c++
01.

int i,j,k;
for(int i=n/2;i<=n;i++)
    for(j=1;j<=n/2;j++)
        for(int k=1;k<=n;k=k*2)
           printf("Hello")
```
```
First Loop = n+1/2 times  [n/2.....n]
Second Loop = n+1/2 times [1......n/2]
Third Loop = log n times [we know k*=2 or k/=2 --> log n times]

Total Times = n/2 * n/2 * log2
            = n^2/2 * log2
So, time Complexity is : O(n^2 log2)
```

```c++
02.

int i,j,k;
for(int i=1;i<=n;i++)
    for(j=1;j<=i;j++)
        for(int k=1;k<=100;k++)
           printf("Hello")
```
```
i | 1     | 2     | 3 ... | n times
------------------------------
j | 1     | 2     | 3 ... | n times
------------------------------
k | 1*100 | 2*100 | 3*100 |... n*100 times
------------------------------

Total Times = 1*100 + 2*100 + 3*100 + ... + n*100
            = 100(1 + 2 + 3 + ... + n)
            = 100 * n*(n+1)/2
So, time Complexity is : O(n^2)
```
```c++
03.

int fib(int n){
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
```
![image](https://user-images.githubusercontent.com/59710234/171729062-245d743f-df43-45f6-991c-a9d26f98a4e3.png)

<img src="https://user-images.githubusercontent.com/59710234/230775201-bf0a3e26-ff2d-4b8f-acc9-9b2a6304fb6d.png" height="300">

![image](https://user-images.githubusercontent.com/59710234/230775201-bf0a3e26-ff2d-4b8f-acc9-9b2a6304fb6d.png)

```
for n > 1:
T(n) = T(n-1) + T(n-2) + 4 (1 comparison, 2 subtractions, 1 addition)

Let’s say c = 4; T(n) = T(n-1) + T(n-2) + c

In the recursive approach or every value from 0 to n two functions are called (except the base cases). 
For example, fib(6) is calling fib(5) and fib(4). So the time complexity of the recursive approach is O(2^n). 
```
[Fibonacci Time Complexity](https://syedtousifahmed.medium.com/fibonacci-iterative-vs-recursive-5182d7783055#:~:text=Time%20Complexity%3A&text=Hence%20the%20time%20taken%20by,2%5En)
