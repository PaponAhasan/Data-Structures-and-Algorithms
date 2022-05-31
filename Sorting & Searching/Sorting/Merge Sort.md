```
Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, 
and then it merges the two sorted halves.
```
```
Step 1 − if it is only one element in the list it is already sorted, return.
Step 2 − divide the list recursively into two halves until it can no more be divided.
Step 3 − merge the smaller lists into new list in sorted order.
```
[Merge Sort Implementation](https://www.youtube.com/watch?v=JSceec-wEyw)

### Implementation Merge Sort

<img src="https://user-images.githubusercontent.com/59710234/171281571-2fbe15ce-c6cb-4dcb-a6a7-e38dd771e74b.png" width="600" height="500" />

### Merge Sort in C/C++
```
MergeSort(A, p, r):
    if p > r 
        return
    q = (p+r)/2
    mergeSort(A, p, q)
    mergeSort(A, q+1, r)
    merge(A, p, q, r)

```

### Time complexity analysis
```
Binary Search that whenever we divide a number into half in every step, it can be represented using a logarithmic function,
which is log n and the number of steps can be represented by log n + 1(at most) And to merge the subarrays, made by dividing 
the original array of n elements, a running time of O(n) will be required.
```
```
- Worst Case Complexity: O(n*log n)
  An array is in ascending order, and you want to sort it in descending order. 
  
  Each element has to be compared with each of the other elements so, for every nth element, (n-1) number of comparisons are made.
  Thus, the total number of comparisons = n*(n-1) ~ n^2

- Best Case Complexity: O(n*log n)
  When the array is already sorted, the outer loop runs for n number of times whereas the inner loop does not run at all.

- Average Case Complexity: O(n*log n) 
  It occurs when the elements of an array are in jumbled order (neither ascending nor descending).

- Space Complexity : O(n)
```
### Divide and Conquer Strategy
```
 We had to sort an array A. This array starting at index p and ending at index r, denoted as A[p..r].
 
 Divide : If q is the half-way point between p and r, then we can split the subarray A[p..r] into two arrays A[p..q] and A[q+1, r].
 
 Conquer : We try to sort both the subarrays A[p..q] and A[q+1, r]. If we haven't yet reached the base case(the base case of array 
           with 1 element), we again divide both these subarrays.
 
 Combine : The conquer step reaches the base step and we get two sorted subarrays A[p..q] and A[q+1, r] for array A[p..r].
 
```

Code : https://ideone.com/gJwIcf
