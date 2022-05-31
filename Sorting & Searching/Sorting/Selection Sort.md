```
Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that 
element at the beginning of the unsorted list.

The algorithm  two subarrays - 1. The subarray which is already sorted 2. Remaining subarray which is unsorted
In every iteration of selection sort, select the minimum element (considering ascending order) from the unsorted subarray is picked 
and moved to the sorted subarray. 
```
[Selection Sort Implementation](https://youtu.be/xWBP4lzkoyM)
### Selection sort processes
```
1. Select first element as minimum
```

<img src="https://user-images.githubusercontent.com/59710234/171263026-5f43268d-6de6-4bb6-b1f8-51762cab4c30.png" width="500" height="200" />

```
2. Compare minimum with the remaining elements. Compare minimum with the second element, third element and so on. The process 
goes on until the last element.
```

<img src="https://user-images.githubusercontent.com/59710234/171263233-fe4dca46-ecb4-4b35-9d84-688e74eddd2f.png" width="500" height="300" />

```
3. After each iteration, minimum is placed in the front of the unsorted list. Swap the first with minimum.
```

<img src="https://user-images.githubusercontent.com/59710234/171263710-cedcfc4f-5d33-47e7-8ede-9d807308dcc3.png" width="500" height="300" />

### Implementation Selection sort

```
1.
```

<img src="https://user-images.githubusercontent.com/59710234/171264538-e4e9c256-df40-4b51-889d-57eb35bb5d7e.png" width="500" height="500" />

```
2.
```

<img src="https://user-images.githubusercontent.com/59710234/171264554-b213d97f-3bc3-475c-a6f9-e02b87ebe503.png" width="500" height="500" />

```
3.
```

<img src="https://user-images.githubusercontent.com/59710234/171264577-465accf5-db09-43bc-a3a8-f414cad6e9a6.png" width="500" height="500" />

```
4.
```

<img src="https://user-images.githubusercontent.com/59710234/171264612-6d7a3afa-ffb4-4d72-8829-8c098e32c772.png" width="500" height="500" />

### Selection Sort in C/C++

```c++
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {
       
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
```
### Time complexity analysis
```
Cycle	Number of Comparison
1st	    (n-1)
2nd	    (n-2)
3rd	    (n-3)
...	    ...
last    1

Number of comparisons: (n - 1) + (n - 2) + (n - 3) + ..... + 1 = n(n - 1) / 2 nearly equals to n^2
```
```
The time complexity of Selection Sort is O(N^2) as there are two nested loops:

  - One loop to select an element of Array one by one = O(N)
  - Another loop to compare that element with every other Array element = O(N)
  
  Therefore overall complexity = O(N)*O(N) = O(N*N) = O(N^2)
```
```
At every step, you have to find the minimum element and put it in the right place. The minimum element is not known until 
the end of the array is not reached.

- Worst Case Complexity: O(n^2) 
  An array is in ascending order, and you want to sort it in descending order. 
  
  Each element has to be compared with each of the other elements so, for every nth element, (n-1) number of comparisons are made.
  Thus, the total number of comparisons = n*(n-1) ~ n^2

- Best Case Complexity: O(n^2)
  When the array is already sorted, the outer loop runs for n number of times whereas the inner loop n number of times.
  Thus, the total number of comparisons = n*(n-1) ~ n^2

- Average Case Complexity: O(n^2) 
  It occurs when the elements of an array are in jumbled order (neither ascending nor descending).

- Space Complexity : O(1)
```
- [Practice Problem](https://practice.geeksforgeeks.org/problems/selection-sort/1/)
