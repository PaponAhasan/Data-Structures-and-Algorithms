```c++
01.

int a = 0;
for (i = 0; i < N; i++) {
    for (j = N; j > i; j--) {
        a = a + i + j;
    }
}
```
```
Lets see how many times count++ will run. 
   When i = 0, it will run N times.
   When i = 1, it will run N-1 times. 
   When i = 2, it will run N-2 times and so on.
   
The above code runs total no of times 
    = N + (N – 1) + (N – 2) + … 1 + 0 
    = N * (N + 1) / 2 
    = 1/2 * N^2 + 1/2 * N 
    O(N^2) times.
```
```c++
02.

int i, j, k = 0;
for (i = n / 2; i <= n; i++) {
    for (j = 2; j <= n; j = j * 2) {
        k = k + n / 2;
    }
}
```
```
Let’s take the examples here :
    for n = 16, j = 2, 4, 8, 16 
    for n = 32, j = 2, 4, 8, 16, 32 
    So, j would run for O(log n) steps.
    
    i runs for n/2 steps.
    
    So, total steps = O(n/ 2 * log (n)) = O(n*logn)
```
```c++
03.

int a = 0, i = N;
while (i > 0) {
    a += i;
    i /= 2;
}
```
```
We have to find the smallest x such that N / 2^x [ x = 0,1,2,3,...]
x = log(N)

for n = 16, i = 16, 8, 4, 2 , 1

So, total steps = O(log N)
```
