```
Examples:
  Input: {12, 23, 34, 12, 12, 23, 12, 45}
  Output: 34 and 45
```
#### Method 01
```
A naive method to solve this problem is to run two nested loops. The time complexity of this method is O(n^2).
```
#### Method 02
```
Use sorting to get the odd occurring numbers in O(nLogn) time.
```
#### Method 03
```
We can also use hashing. using map O(n) time and O(n) extra space 
```
```c++
void printTwoOdd(int arr[], int size)
{
    /*Create map and calculate frequency of array of
     * elements using array.*/
 
    unordered_map<int, int> m;
    for (int i = 0; i < size; i++) {
        m[arr[i]]++;
    }
 
    /*Traverse through the map and check if its second
      element that is the frequency is odd or not.Then this
      is the odd occurring element .Its is clearly mentioned
      in problem that there are only two odd occurring
      elements so this will print those two elements.*/
 
    cout << "The two ODD elements are ";
    for (auto& x : m) {
        if (x.second % 2 != 0)
            cout << x.first << ", ";
    }
}
```
#### Method 04
```
A O(n) time and O(1) extra space solution using XOR.
```
```c++
void printTwoOdd(int arr[], int size)
{
    int xor = arr[0]; /* Will hold XOR of two odd occurring elements */
    int set_bit_no; /* Will have only single set bit of xor2 */
    int i, x = 0, y = 0;
     
    /* Get the xor of all elements in arr[]. The xor will basically
        be xor of two odd occurring elements */
    for(i = 1; i < size; i++)
        xor = xor ^ arr[i];
     
    /* Get one set bit in the xor2. We get rightmost set bit
        in the following line as it is easy to get */
    set_bit_no = xor & ~(xor-1);
     
    /* Now divide elements in two sets:
        1) The elements having the corresponding bit as 1.
        2) The elements having the corresponding bit as 0. */
    for(i = 0; i < size; i++)
    {
        /* XOR of first set is finally going to hold one odd
        occurring number x */
        if(arr[i] & set_bit_no)
        x = x ^ arr[i];
     
        /* XOR of second set is finally going to hold the other
        odd occurring number y */
        else
        y = y ^ arr[i];
    }
 
    cout << "The two ODD elements are " << x << " & " << y;
}
```
