🔴Pattern 01 => Constant window (Consecutive maximum sum = size(k))   

```c++
arr[n] = [-1, 2, 3, 3, 4, 5, -1] K = 4
Find Max subarray summation consecutively?
-1,2,3,3 = 7
3,4,4,5 = 16
Ans: 16(max)
```
```c++
sum = 0, l = 0, r = k - 1, mx_sum = 0

for(i = l to i <= r){
   sum += arr[i]
   max_sum = sum
}

while(r < n - 1){
  sum = sum - arr[l]
  l++
  r++
  sum = sum + arr[r]
}
```

🔴 Pattern 02 => Longest sub-array/sub-string (Consecutive long subarray < k)   

```c++
arr[n] = [2, 5, 2, 3, 2] k = 9
Find the longest consecutively subarray length/summation where the summation is lesser than <= k

2 <= 9
2,5 = 7 <= 9
2,3,2 = 7 <= 9
Ans = [2,3,2] lenght = 3

- BurthForce
- Better Solution
- Optimize 
```

```c++
BurthForce
```




