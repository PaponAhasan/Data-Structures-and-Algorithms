```
Given a positive integer, write a function to find if it is a power of two or not.
Examples : 

Input : n = 4
Output : Yes
2^2 = 4

Input : n = 7
Output : No

Input : n = 32
Output : Yes
2^5 = 32
```
```c++
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
```
```c++
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
}
```
```c++
bool powerOf2(int n)
{
    // base cases
    // '1' is the only odd number which is a power of 2(2^0)
    if (n == 1)
        return true;
 
    // all other odd numbers are not powers of 2
    else if (n % 2 != 0 || n == 0)
        return false;
 
    // recursive function call
    return powerOf2(n / 2);
}
```
```c++
Time complexity : O(N)

Space Complexity : O(1)

bool isPowerOfTwo(int n)
{
    /* First x in the below expression is for the case when
     * x is 0 */
    int cnt = 0;
    while (n > 0) {
        if ((n & 1) == 1) {
            cnt++;
        }
        n = n >> 1;// keep dividing n by 2 using right
                        // shift operator
    }
 
    if (cnt == 1) {// if cnt = 1 only then it is power of 2
        return true;
    }
    return false;
}
```
```c++
Time Complexity : O(1) 

Auxiliary Space: O(1)

bool isPowerofTwo(long long n)
{
    return (n != 0) && ((n & (n - 1)) == 0);
}
```
- [geeksforgeeks](https://www.geeksforgeeks.org/program-to-find-whether-a-given-number-is-power-of-2/)
- [Reverse digits](https://practice.geeksforgeeks.org/problems/reverse-digit0316/1)
