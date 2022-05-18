## Complexity

```
Time and space complexity analysis is an important part of problem solving. All programming problems have a time limit and a 
memory limit.If your solution is logically 'correct', it may not meet these requirements.
- Time complexity is the number of steps/operations your algorithm takes to finish executing a given input. 
- Space complexity is the amount of space your algorithm can occupy when it runs on a given input.

- Time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the
  input.
- Similarly, Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function
  of the length of the input.
```

```
The Big-O notation is used to describe how an algorithm scales with the size of the input.
```
![image](https://user-images.githubusercontent.com/59710234/157398014-98fb33d3-0115-40b1-9dbc-b1347fc7a996.png)

## Simple Example

```
Q :  Suppose you are given an array A and an integer x and you have to find if x exists in array A.

A : Simple solution to this problem is traverse the whole array A and check if the any element is equal x to.
```

![image](https://user-images.githubusercontent.com/59710234/157399230-a6a602ca-6ca6-48de-8389-877774202944.png)

```
- Each of the operation in computer take approximately constant time, takes c time.
- The number of lines of code executed is actually depends on the value of x.
- We will consider worst case scenario i.e., when is not present in the array A. the if condition will run N times
  where A is the length of the array A.
- So in the worst case, total execution time will be (N * c ) + c. N*c for the if condition and c for the return statement. 
- As we can see that the total time depends on the length of the array A. If the length of the array will increase the time of 
  execution will also increase.
```
## Different Notation of a Function
```
- O-notation: To denote asymptotic upper bound. ( O(f(n) ) pronounced “big-oh of f of n”) 
- Ω-notation: To denote asymptotic lower bound. ( Ω(f(n) ) pronounced “big-omega of f of n”) 
- Θ-notation: To denote asymptotic tight bound. ( Θ(f(n) ) pronounced “big-theta of f of n”)

We mostly consider O-notation because it will give us an upper limit of the execution time.
f(N) = 2*N^2 + 3*N + 5;
O(f(N)) = O(2*N^2 + 3*N + 5) = O(N^2)
```
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
