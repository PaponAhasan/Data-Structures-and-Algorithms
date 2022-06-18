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
![image](https://user-images.githubusercontent.com/59710234/174422393-ceebce83-6f51-48e3-b1b5-58896ca12984.png)

```
Time complexity : T(n) = T(n-1) + T(n-2) + 4
=> T(n) = 2*T(n-1) + c  [T(n-1) ~ T(n-2)]
=> T(n) = 2*[ 2T(n-2) + c ] + c
=> T(n) = 4T(n-2) + 3c
        = 8T(n-3) + 7c
	= 2^k* T(n-k) + (2^k - 1)c
	
Assume n-k = 0 
 => k = n
 
 T(n) = 2^n * T(0) + (2^n - 1) c
      = 2^n * 1 + (2^n - 1) c
      = 2^n + c*2^n - c
      = 2^n (1+c) - c
      O(2^n)
```
```
The time complexity of the given program can depend on the function call.
```
Problem :

- [Geek-onacci-number](https://practice.geeksforgeeks.org/problems/geek-onacci-number/0/?category#) 
([Code](https://ideone.com/eA7HjG))
