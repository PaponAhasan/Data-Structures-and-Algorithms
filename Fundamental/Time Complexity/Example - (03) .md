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
