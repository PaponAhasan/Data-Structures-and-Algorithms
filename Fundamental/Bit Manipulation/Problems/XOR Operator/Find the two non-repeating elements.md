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
#### Method 4(Use XOR) 
```
1) Get the XOR of all the elements.
     xor = 2^4^7^9^2^4 = 14 (1110)
```
