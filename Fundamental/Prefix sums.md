
#### Prefix sums
```Given an array``` `A` ```of``` `n` ```elements, prefix sums are a very powerful technique that allows you to calculate the sum of any range of elements``` `[l, r]` ```for``` `1 <= l <= r <= n` ```in``` `O(1)` ```constant time with the help of``` `O(n)` ```pre-processing.```

```The trick is to pre-calculate in another array``` `prefix` ```, of cumulative sums, such that for each``` `i` ```from``` `1 to n`, `prefix[i]` ```stores the sum``` `a[1] + a[2] + ... + a[i]` ```. Then, the sum of elements in the range``` `[l,r]` ```can be easily found out as``` `prefix[r] - prefix[l-1].`
```
PreSum0 = a0
PreSum1 = a0 + a1 = PreSum0 + a1
PreSum2 = a0 + a1 + a2 = PreSum1 + a2
. . .
. . .
. . .
PreSumN  =PreSumN -1 + aN

For example: A[] = {1,3,4,5,2,7,8,11}
The prefix sums corresponding to A will be: PreSum[] = {1,4,8,13,15,22,30,41}
```
```
Prefix sum operations can be generalized to any binary operator ⊕. Prefix sum operation takes a sequence of n elements [a0, a1, ..., an] and returns a sequence
[a0, (a0 ⊕ a1) , ... , (a0 ⊕ a1 ⊕ a2 ... ⊕ an) ] containing the prefix sums.
```
