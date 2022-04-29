```c++
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	// Stop condition
	if (n == 0)
		return 0;

	// Stop condition
	if (n == 1 || n == 2)
		return 1;

	// Recursion function
	else
		return (fib(n - 1) + fib(n - 2));
}

int main()
{
	int n = 5;
	cout<<"Fibonacci series of 5 numbers is: ";
	for (int i = 0; i < n; i++){
		cout<<fib(i)<<" ";
	}
	return 0;
}
Output :
  Fibonacci series of 5 numbers is: 0 1 1 2 3 
```
![image](https://user-images.githubusercontent.com/59710234/165957799-02b9abac-3d6f-432e-9893-c778dbb93f16.png)

```
The time complexity of the given program can depend on the function call.
```
