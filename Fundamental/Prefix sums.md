
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
PreSumN  = PreSumN - 1 + aN

For example: A[] = {1,3,4,5,2,7,8,11}
The prefix sums corresponding to A will be: PreSum[] = {1,4,8,13,15,22,30,41}
```
```
Prefix sum operations can be generalized to any binary operator ⊕. Prefix sum operation takes a sequence of n elements [a0, a1,..
..., an] and returns a sequence [a0, (a0 ⊕ a1) , ... , (a0 ⊕ a1 ⊕ a2 ... ⊕ an) ] containing the prefix sums.
```
#### Pseudocode
```c++
A is a sequence containing n elements

prefix[0] = A[0]

for i=1 to n-1
    PreSum[i] = PreSum[i-1] + A[i]
```
```
Prefix sums can be used to calculate the sum of elements in a given range.
If we wish to find out the sum of values between [L...R]. We can obtain the sum by subtracting the prefix sum PreSum[R] 
by PreSum[L-1].
```
```c++
Sum[L..R] = PreSum[R] - PreSum[L-1] { If L!=0 }
Sum[L..R] = PreSum[R] { If L=0 }
```
#### Code
https://pastebin.com/7JsvrzrB <br/>
https://pastebin.com/a09xCDGw (Prefix Sums 2D from 1D) <br/>
https://pastebin.com/Yezy0Lkb (Prefix Sums 2D recurrent) <br/>
### Analysis of Algorithm
```
- To calculate prefix sum array of n size array -  Time Complexity: O(n)
- Time take to perform range sum query is - Time Complexity: O(1)
```
- [JAVAAID - Coding Interview Preparation 01](https://www.youtube.com/watch?v=scD312I7kkE&list=RDCMUCx1hbK753l3WhwXP5r93eYA&index=2)
- [JAVAAID - Coding Interview Preparation 02](https://www.youtube.com/watch?v=pVS3yhlzrlQ)

#### Problem
* [codeforces](https://codeforces.com/blog/entry/59915)
* [usaco.guide](https://usaco.guide/silver/prefix-sums/#1d-prefix-sums)
* [codechef](https://www.codechef.com/problems/UNQEQ)
* [Spoj CSUM](https://www.spoj.com/problems/CSUMQ/)
* [Leetcode 560](https://leetcode.com/problems/subarray-sum-equals-k/)
* [Leetcode 523](https://leetcode.com/problems/continuous-subarray-sum/)
* [Leetcode 1248](https://leetcode.com/problems/count-number-of-nice-subarrays/)
* [Leetcode 1477](https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/)
* [CF 1118B](https://codeforces.com/contest/1118/problem/B)

https://www.geeksforgeeks.org/calculate-sum-of-bitwise-and-of-all-pairs/ </br>
https://www.geeksforgeeks.org/sum-of-xor-of-all-subarrays/
