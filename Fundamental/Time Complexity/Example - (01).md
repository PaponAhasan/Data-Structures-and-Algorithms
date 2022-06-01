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

Assume p > n
p = k*(k+1) / 2
k*(k+1)/2 > n
k^2 > n
k > root(n)
```
## N.T
```
- You can assume approximately 10^8 operations per second to run in time.
- You can use approximately 5*10^7 int worth of memory, 
- Single array of that size (say arr[10000000]), 
- Multidimensional arrays (say arr[10000][1000]), 
  Be wary that long long takes more space than int.
```

## Practice
* [GFG](https://www.geeksforgeeks.org/practice-questions-time-complexity-analysis/)
* [Time & Space GFG](https://www.geeksforgeeks.org/time-complexity-and-space-complexity/?ref=rp)
* [Space GFG](https://www.geeksforgeeks.org/g-fact-86/)
* [Codechef](https://discuss.codechef.com/t/multiple-choice-questions-related-to-testing-knowledge-about-time-and-space-complexity-of-a-program/17976)
* [InterviewBit](https://www.interviewbit.com/courses/programming/topics/time-complexity/#problems)
* [Scanftree](https://scanftree.com/Data_Structure/time-complexity-and-space-complexity-comparison-of-sorting-algorithms)
* [Bigocheatsheet](https://www.bigocheatsheet.com/?fbclid=IwAR3fLKNHE2eezeXu3rO7MA4dTK5lHSY7rPfSOYiU9_Zr6ExRK7Mjo_9MX8o)
* [Time Complexity [V]](https://www.youtube.com/watch?v=V42FBiohc6c&list=PL2_aWCzGMAwI9HK8YPVBjElbLbI3ufctn&fbclid=IwAR0kaAXKECS6iAP2kGUYf__X2j6_SS-c4yeq0dzjJvgBAyS8U-L4LBBwsPM)
* [Time complexity in recursion [V]](https://www.youtube.com/watch?v=ncpTxqK35PI&fbclid=IwAR2a_OraRdPheSV0tDNcp5p10jswXgAHpYeowuZIMUjmB0ad0DBDnABdxxE)
* [Abdul Bari](https://www.youtube.com/watch?v=9TlHvipP5yA&list=PLDN4rrl48XKpZkf03iYFl-O29szjTrs_O&index=7&ab_channel=AbdulBari)
