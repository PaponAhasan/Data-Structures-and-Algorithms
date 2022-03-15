# Search Algorithms
```
Searching is a common problem asked in programming. The most naive way of performing searches would be linear search. Here, we 
introduce two faster searching algorithms :

  - Binary Search and
  - Ternary Search
```

## Binary Search
```
Binary search is an efficient algorithm for finding an item from a sorted list of items. Binary Search is used to search in sorted
values in logarithmic time. It works by repeatedly dividing in half the portion of the list. You may binary search the answer over 
the possible range [1,2e9]
```
Try Problem

[C. Maximum Median](https://codeforces.com/contest/1201/problem/C)

```Sort the array in non-decreasing order. In the new array b1,b2,…,bn you can make binary search with the maximum median value. For a given median value (x), it is required to make ```
![image](https://user-images.githubusercontent.com/59710234/158398223-1986dcd2-bbe3-4156-8c98-ffd338bf4c72.png)
```operations. If this value is more than k, x can't be median, otherwise it can. 
Time complexity: O((n/2)⋅log(10^9))```
