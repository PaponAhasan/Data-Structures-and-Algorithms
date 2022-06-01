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
Code : https://ideone.com/gJwIcf

### Time complexity analysis
```
Binary Search that whenever we divide a number into half in every step, it can be represented using a logarithmic function,
which is log n and the number of steps can be represented by log n + 1(at most) And to merge the subarrays, made by dividing 
the original array of n elements, a running time of O(n) will be required.

                n           ---> 1(n-1) = 2^0 (n/(2^0) -1)
             /     \
           n/2     n/2      ---> 2(n/2-1) = 2^1 (n/(2^1) -1)
          /  \     /  \ 
        n/4  n/4  n/4 n/4   ---> 4(n/4-1) = 2^2 (n/(2^2) -1)
        /  \ / \ / \  /  \
       .   . . . . . .   .  
       .   . . . . . .   .  ---> base case = 2^i (n/(2^i) -1)
               
                8
             /     \
            4       4
          /  \     /  \ 
         2    2   2    2
        /  \ / \ / \  /  \
        1  1 1 1 1  1 1  1  ---> base case
        
Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.
       
split = left     right    mearging
 T(n) = T(n/2) + T(n/2) + O(n - 1)
 T(n) = 2T(n/2) + O(n)
```
```
- Worst Case Complexity: O(n*log n)

- Best Case Complexity: O(n*log n)
  
- Average Case Complexity: O(n*log n) 
  
- Space Complexity : O(n)
  The merge phase, elements from two subarrays are copied into a newly created target array. In the very last merge step, the 
  target array is exactly as large as the    array to be sorted. Thus, we have a linear space requirement: The space complexity
  of Merge Sort is: O(n).
```
```
if the number of elements n, we only need one additional step of divisions d. if n is four elements, two division steps are 
needed, and for n is eight elements, three division steps are needed: So the number of division stages is log2 n.
```
![image](https://user-images.githubusercontent.com/59710234/171356687-b9b702f9-8123-4d75-8a71-7d9dca67861f.png)

```
On each merge stage, we have to merge a total of n elements (on the first stage n × 1, on the second stage n/2 × 2, on the 
third stage n/4 × 4, etc.): So The merge process linear complexity O(n)
```
![image](https://user-images.githubusercontent.com/59710234/171356888-ab575043-869f-4b19-a11a-ed85ddc81452.png)

```
So we have n elements times log2 n division and merge stages. Therefore: The time complexity of Merge Sort is: O(n log n)
```

<img src="https://user-images.githubusercontent.com/59710234/171300770-8f4e643f-4f28-4c2f-b8b7-706089805e8d.png" width="800" height="300" />
<img src="https://user-images.githubusercontent.com/59710234/171300783-b5042917-6f9d-4520-bc1b-8168913359f9.png" width="800" height="300" />

### Divide and Conquer Strategy
```
 We had to sort an array A. This array starting at index p and ending at index r, denoted as A[p..r].
 
 Divide : If q is the half-way point between p and r, then we can split the subarray A[p..r] into two arrays A[p..q] and A[q+1, r].
 
 Conquer : We try to sort both the subarrays A[p..q] and A[q+1, r]. If we haven't yet reached the base case(the base case of array 
           with 1 element), we again divide both these subarrays.
 
 Combine : The conquer step reaches the base step and we get two sorted subarrays A[p..q] and A[q+1, r] for array A[p..r].
 
```
