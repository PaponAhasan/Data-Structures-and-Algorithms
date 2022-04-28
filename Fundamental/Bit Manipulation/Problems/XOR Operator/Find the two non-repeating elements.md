```
Given an array in which all numbers except two are repeated once.
Example:
   arr[] = {2, 4, 7, 9, 2, 4}
Output:
   The non-repeating elements are 7 and 9
```
#### Method 1(Use Sorting) 
```
First, sort all the elements. In the sorted array, by comparing adjacent elements we can easily get the non-repeating elements. 
Time complexity of this method is O(nLogn)
```
#### Method 2(Use Maps)
```c++
void get2NonRepeatingNos(int arr[], int n)
{
    /*Create map and calculate frequency of array
       elements.*/
 
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }
 
    /*Traverse through the map and check if its second
      element that is the frequency is 1 or not. If this is
      1 than it is the non-repeating element print it.It is
      clearly mentioned in problem that all numbers except
      two are repeated once. So they will be printed*/
 
    cout << "The non-repeating elements are ";
    for (auto& x : m) {
        if (x.second == 1) {
            cout << x.first << " ";
        }
    }
}
```
```
Time Complexity: O(nlogn) 
Auxiliary Space: O(n)
```
#### Method 3(Use Sets)
```c++
void get2NonRepeatingNos(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        /*Iterate through the array and check if each
        element is present or not in the set. If the
        element is present, remove it from the array
        otherwise add it to the set*/
        if (s.find(arr[i]) != s.end())
            s.erase(arr[i]);
        else
            s.insert(arr[i]);
    }
    cout << "The 2 non repeating numbers are : ";
    for (auto it : s)
        cout << it << " ";
    cout << endl;
}
```
```
Time Complexity: O(nlogn) 
Auxiliary Space: O(n)
```
#### Method 4(Use XOR) 
```
arr[] = {2, 4, 7, 9, 2, 4}
1) Get the XOR of all the elements.
     xor = 2^4^7^9^2^4 = 14 (1110)
2) Get a number which has only one set bit of the xor.
   set_bit_no = xor & ~(xor-1) = (1110) & ~(1101) = 0010    
3) Now divide the elements in two sets and do xor of         
   elements in each set and we get the non-repeating 
   elements 7 and 9.   
```
```c++
void get2NonRepeatingNos(int arr[], int n, int* x, int* y)
{
    /* Will hold Xor of all elements */
    int Xor = arr[0];
 
    /* Will have only single set bit of Xor */
    int set_bit_no;
    int i;
    *x = 0;
    *y = 0;
 
    /* Get the Xor of all elements */
    for (i = 1; i < n; i++)
        Xor ^= arr[i];
 
    /* Get the rightmost set bit in set_bit_no */
    set_bit_no = Xor & ~(Xor - 1);
 
    /* Now divide elements in two sets by
    comparing rightmost set bit of Xor with bit
    at same position in each element. */
    for (i = 0; i < n; i++) {
 
        /*Xor of first set */
        if (arr[i] & set_bit_no)
            *x = *x ^ arr[i];
        /*Xor of second set*/
        else {
            *y = *y ^ arr[i];
        }
    }
}
```
```
Time Complexity: O(n) 
Auxiliary Space: O(1)
```
#### Problem
[Non Repeating Numbers](https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1/)
