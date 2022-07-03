### Lower_Bound

```
1. lower_bound() method return iterator pointing to the first element in the range [first, last) which has a value not less than 
   target val.
2. lower_bound() method returns an iterator pointing to the next smallest number just greater than or equal to that number.
3. If there are multiple values that are equal to val, lower_bound() returns the iterator of the first such value.

Input: 10 20 30 40 50
Output: lower_bound for element 30 at index 2

Input: 10 20 30 40 50
Output: lower_bound for element 35 at index 3

Input: 10 20 30 40 50
Output: lower_bound for element 55 at index 5 (Basically, 55 is not present, so it returns end() iterator)

Input: 10 20 30 30 30 40 50
Output: lower_bound for element 30 at index 2

Time Complexity:  O(logN)
```

### Upper_Bound
```
1. upper_nound iterator pointing to the first element in the range [first, last) that is greater than value

Input : 10 20 30 30 40 50
Output : upper_bound for element 30 is at index 4

Input : 10 20 30 40 50
Output : upper_bound for element 45 is at index 4

Input : 10 20 30 40 50
Output : upper_bound for element 60 is at index 5

Time Complexity:  O(logN)
```
```
[ 5 5 5 6 6 6 8 8 ]

1. Find 4; lower = 1 , upper = 1
2. Find 5; lower = 1 , upper = 4
3. Find 7; lower = 7 , upper = 7
4. Find 8; lower = 7 , upper = 9
5. Find 9; lower = 9 , upper = 9
```

```c++
    int gfg[] = { 5, 5, 5, 6, 6, 6, 8, 8 };
    lower = lower_bound(v.begin(), v.end(), 6);
    upper = upper_bound(v.begin(), v.end(), 6);
    cout << (lower - v.begin() + 1) << '\n';
    cout << (upper - v.begin() + 1) << '\n';
```

```c++
// Function to implement lower_bound
int lower_bound(int arr[], int N, int X)
{
    int mid;
 
    // Initialise starting index and
    // ending index
    int low = 0;
    int high = N;
 
    // Till low is less than high
    while (low < high) {
        mid = low + (high - low) / 2;
 
        // If X is less than or equal
        // to arr[mid], then find in
        // left subarray
        if (X <= arr[mid]) {
            high = mid;
        }
 
        // If X is greater arr[mid]
        // then find in right subarray
        else {
            low = mid + 1;
        }
    }
   
    // if X is greater than arr[n-1]
    if(low < N && arr[low] < X) {
       low++;
    }
       
    // Return the lower_bound index
    return low;
}
```
```c++
// Function to implement upper_bound
int upper_bound(int arr[], int N, int X)
{
    int mid;
 
    // Initialise starting index and
    // ending index
    int low = 0;
    int high = N;
 
    // Till low is less than high
    while (low < high) {
        // Find the middle index
        mid = low + (high - low) / 2;
 
        // If X is greater than or equal
        // to arr[mid] then find
        // in right subarray
        if (X >= arr[mid]) {
            low = mid + 1;
        }
 
        // If X is less than arr[mid]
        // then find in left subarray
        else {
            high = mid;
        }
    }
   
    // if X is greater than arr[n-1]
    if(low < N && arr[low] <= X) {
       low++;
    }
 
    // Return the upper_bound index
    return low;
}
```
