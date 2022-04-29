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
