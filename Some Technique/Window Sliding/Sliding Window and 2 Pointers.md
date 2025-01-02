🔴Pattern 01 => Constant window (Consecutive maximum sum = size(k))   

```c++
arr[n] = [-1, 2, 3, 3, 4, 5, -1] K = 4
Find the max subarray summation consecutively for that length, k?
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
  max_sum = max(max_sum, sum)
}
```

- 1423] Maximum Points You Can Obtain from Cards
  
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
----------
maxlen = 0
for i = 0 to i = n - 1
  sum = 0
  for j = i to j < n - 1
    sum += arr[j]
    if sum <= k 
      maxlen = max(max_len, j - i + 1)
    else break
```

```c++
Better (expand -> r and shrink -> l)
----------------------------------
l = r = 0, sum = maxlen = 0
while(r < n){
  sum = sum + arr[r]
  while(sum > k)
    sum = sum - arr[l]
    l++
  if(sum <= k)
    maxlen = max(max_len, r - l + 1)
  r++;
}
```

```c++
Optimize 
---------
l = r = 0, sum = maxlen = 0
while(r < n){
  sum = sum + arr[r]
  if(sum > k)
    sum = sum - arr[l]
    l++
  if(sum <= k)
    maxlen = max(max_len, r - l + 1)
  r++;
}
```

🔴 Pattern 03 => Number of subarrays where [condition] -> subarrays sum with k

```
subarrays sum with <= k     ---> X
subarrays sum with <= k - 1 ---> Y
(X - Y) => subarrays sum with == k
```

- 1358] Number of Substrings Containing All Three Characters
        
🔴 Pattern 04 => Sorted sub-array/sub-string where [condition]
