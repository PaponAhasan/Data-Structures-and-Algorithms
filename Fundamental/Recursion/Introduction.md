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

```
The recursive program has greater space requirements than iterative program as all functions will remain in the stack until the
base case is reached. It also has greater time requirements because of function calls and returns overhead.
```
### Why recursion is not always good
```
```
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
