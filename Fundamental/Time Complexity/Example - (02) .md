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
```
