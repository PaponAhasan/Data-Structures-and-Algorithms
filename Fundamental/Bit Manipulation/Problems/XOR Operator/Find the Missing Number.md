```
You are given a list of n-1 integers and these integers are in the range of 1 to n.There are no duplicates in the list. One of the 
integers is missing in the list. Write an efficient code to find the missing integer.

Example: 

Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
Output: 5
Explanation: The missing number from 1 to 8 is 5
```
#### Method 1:
```
sum of numbers from 1 to n can be calculated using the formula n*(n+1)/2. 
int arr[] = { 1, 2, 4, 5, 6 };

int getMissingNo(int a[], int n)
{
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
Time Complexity: O(n). 
Space Complexity: O(1). 
```
#### Method 2:
```
int getMissingNo(int a[], int n)
{
    // For xor of all the elements in array
    int x1 = a[0];
 
    // For xor of all the elements from 1 to n+1
    int x2 = 1;
 
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
 
    return (x1 ^ x2);
}
```
