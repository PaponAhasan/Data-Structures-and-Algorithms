### Example

```c++
01.

int count = 0;
for (int i = 0; i < N; i++) 
    for (int j = 0; j < i; j++) 
        count++;
```
```
Lets see how many times count++ will run. 
   When i = 0, it will run 0 times.
   When i = 1, it will run 1 times. 
   When i = 2, it will run 2 times and so on.
```
![image](https://user-images.githubusercontent.com/59710234/157404103-35e2c191-c831-4481-b4b0-1978046e09da.png)


```c++
02.

int count = 0;
for (int i = N; i > 0; i /= 2) 
    for (int j = 0; j < i; j++) 
        count++;
```
```
This is a tricky case. In the first look, it seems like the complexity is O(N*logN). N for the j loop and logN for i loop. But its 
wrong. Lets see why.
```
![image](https://user-images.githubusercontent.com/59710234/157404239-706efd09-3ff7-49be-9190-bbb9bdd17372.png)

```
= a/1-r (a = first term, r = comman ratio)
= 1/1-½
= 1/½
= 2

N + N/2 + N/4 + N/8 + ......
= N ( 1 + 1/2 + 1/4 + 1/8 + .....)
= N * 2

```
```c++
03.

int p = 0;
for (int i = 1; p < n; i ++) 
    p = p + i;
```
```    
i    p
------
1   0 + 1 = 1
2   1 + 2 = 3
3   1 + 2 + 3 = 6
:
:
k   1 + 2 + 3 + ... + k

Assume p > n the loop stop;

p > n
= k*(k+1)/2 > n [ p = k*(k+1) / 2 ]
= k^2 + k > 2*n
= k^2 > n
= k > root(n)

So, Time complexity O( root(n) )
```
