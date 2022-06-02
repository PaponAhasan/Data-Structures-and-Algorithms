```
Dynamic programming is a problem-solving technique for solving a problem by breaking it into similar subproblems. But 
we will never solve the same subproblem twice. 

Dynamic programming, like the divide-and-conquer method, solves problems by combining the solutions to subproblems.

A dynamic-programming algorithm solves each subsubproblem just once and then saves its answer in a table, thereby avoiding the
work of recomputing the answer every time it solves each subsubproblem.

Such problems can have many possible solutions. Each solution has a value, and we wish to find a solution with the optimal (minimum 
or maximum) value.

A fibonacci series is the sequence 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …….. Here, each number is the sum of the two 
preceding numbers.

Values are : F0 = 0 and F1 = 1
So, Recurrence relation : Fn = Fn-1 + Fn-2 [ n > 1 ]
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
