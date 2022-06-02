```
Dynamic programming an ideal example can be solving the Fibonacci number sequence. As it is very easy to understand.

A fibonacci series is the sequence 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …….. Here, each number is the sum of the two 
preceding numbers except the first two numbers.
```
![image](https://user-images.githubusercontent.com/59710234/171693526-caebb745-859c-4e67-86f8-48a5906edf54.png)

```
Recursion vs Dynamic programming

- In DP and recursion, we also break a problem into similar subproblems.
- The difference is in recursion similar subproblems may be solved multiple times. But in dynamic programming, we keep track
  of already solved subproblems and don’t solve them more than once.
  
  [ The problems that appear multiple times are called overlapping subproblems.]
  
  In DP we save the solutions of overlapping subproblems. This is called as “Memoization”.
```
```c++
 Let n be the number of terms.

 1. If n <= 1, return 1.
 2. Else, return the sum of two preceding numbers.
```
```
F(0) = 0
F(1) = 1
F(2) = F(1) + F(0)
F(3) = F(2) + F(1)
F(4) = F(3) + F(2)
```
```
Here, we have used the results of the previous steps as shown below. This is called a dynamic programming approach.
```
### Method 1 (Use recursion) 
```c++
#include<bits/stdc++.h>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
 
int main ()
{
    int n = 9;
    cout << fib(n);
    getchar();
    return 0;
}
```
```
Time Complexity: T(n) = T(n) which is linear. 

Original tree for recursion : n times the recursion function is called

                          fib(5)   
                     /                \
               fib(4)                fib(3)   
             /        \              /       \ 
         fib(3)      fib(2)         fib(2)   fib(1)
        /    \       /    \        /      \
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /     \
fib(1) fib(0)
```
```
 Recursively we have to break the problem into similar subproblems. with the help of this formula — fib(n) = fib(n-1) + fib(n-2) if n > 1
 
 Base cases : fib(0) = 0 and fib(1) = 1
```
![image](https://user-images.githubusercontent.com/59710234/171721832-0bbeda51-9807-4938-8ecf-143d49b5bfa7.png)

```
Now let’s find the overlapping subproblems —
```
![image](https://user-images.githubusercontent.com/59710234/171722568-da5a5b1f-eec7-4a66-9554-5b0ccc75e9c1.png)

```
We can see from above fib(4) is being called 2 times, fib(3) is being called 3 times and fib(2) is being called 4 times. 
They are overlapping subproblem. The overlapping subproblems are solved only once using dynamic programming.
```
### Method 2 (Use Dynamic Programming) 
```
We can avoid the repeated work done in method 1 by storing value using DP
```
```c++
int fib(int n)
{
     
    // Declare an array to store
    // Fibonacci numbers.
    // 1 extra to handle
    // case, n = 0
    int f[n + 2];
    int i;
 
    // 0th and 1st number of the
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
         
       //Add the previous 2 numbers
       // in the series and store it
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    }
}
```
### Method 3 (Space Optimized Method 2) 
```c++
int fib(int n)
{
    int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}
```
- https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/?ref=lbp
- https://medium.com/geekculture/how-to-solve-fibonacci-sequence-using-dynamic-programming-b7cd784ee10d
