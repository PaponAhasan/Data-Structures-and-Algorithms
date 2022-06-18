```
The process in which a function calls itself directly or indirectly is called recursion.

All recursive algorithms must have the following:
  - Base Case (i.e., when to stop)
  - Work toward Base Case (Return statement)
  - Recursive Call (i.e., call ourselves)
```
#### Sum of Natural Numbers using Recursion
```c++
int add(int n){
    if(n==1) return 1;
    return n + add(n-1);
}
```
####  How recursion works by taking a simple function
```c++
void printFun(int test)
{
    if (test < 1)
        return;
    else {
        cout << test << " ";
        printFun(test - 1); // statement 2
        cout << test << " ";
        return;
    }
}
```
```
Output : 3 2 1 1 2 3
```
![image](https://user-images.githubusercontent.com/59710234/165937627-f6d15a2b-6088-4f42-8dd7-b347a99b3b1d.png)

### Why recursion is not always good
```
In fibnacci sequence 0, 1, 1 , 2, 3, 5, 8, .....
So , f[n] = f[n-1] + f[n-2]

Karim and Rahim are two student. They both have written to find out nth element in the sequence and they have
both written two different solution and let us see what these two different solution are:
```
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
We run two this program and this time for an input 40 and output is 102334155 which 9 digit number.
We observe that Rahim code takes a couple of seconds to executing code. And is it so.

Karim write Iterative program and Rahim write Recursively program , So happens

Karim is that to calculate F(0), F(1), F(2) ...F(n). So he calculate each of these exactly once.

On the other hand, Rahim calculate Recursively call and he calculate F() function twice. We can See bellow pic the
value F(2) and F(3) call thrice and twice. It is unnecessary overhead or redundancy.

N   F(2)
5    3 times
6    5 times
7    13 times
.
.
40   63245986 times

The recursive program has greater space requirements than iterative program as all functions will remain in the stack until the
base case is reached. It also has greater time requirements because of function calls and returns overhead.

So the running time of Recursively program is growing exponentially as the input increases.So it's code be 
expensive in terms of the time and space that it takes.
```
![image](https://user-images.githubusercontent.com/59710234/174422393-ceebce83-6f51-48e3-b1b5-58896ca12984.png)

### Recursion VS Iteration
|NO  |Recursion                                                                                 |Iteration                                                            |
| -  | ---------------------------------------------------------------------------------------  | --------------------------------------------------------------------|
| 1. |The process in which a function calls itself directly or indirectly is called recursion.| Iteration is the repetition of a process in order to generate a sequence of outcomes. Each repetition of the process is a single iteration, and the outcome of each iteration is then the starting point of the next iteration.|
| 2. |Terminates when the base case becomes true.                 |Terminates when the condition becomes false.|
| 3. |`Used with functions.`                                        |`Used with loops.`         |
| 4. |Every recursive call needs extra space in the stack memory. |Every iteration does not require any extra space.         |
| 5. |Smaller code size.                                          |Larger code size. |

Problem :
- [Print 1 To N](https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1/?category)
