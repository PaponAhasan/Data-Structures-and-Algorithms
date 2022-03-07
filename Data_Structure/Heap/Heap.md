### Heaps
```
A Heap is a complete binary tree-based data structure with a specific ordering property.

There are two types: 
  * Max-Heap: The key present at any node is greater than the keys present at both of its children. The largest key is at the
    root node.
  * Min-Heap: The key present at any node is smaller than the keys present at both of its children. The smallest key is at the
    root node.
```
<details> <summary> Max-Heap Example </summary>
 <a href="https://ibb.co/xfYv6Tk"><img src="https://user-images.githubusercontent.com/59710234/157077980-1e4f4440-e4eb-4641-b493-502c36fa8cd8.png" alt="image" border="0"></a>
</details>

![image](https://user-images.githubusercontent.com/59710234/157078004-d99e0626-2d36-4b8e-925a-9df365504291.png)

[Complete Binary Tree](https://github.com/PaponAhasan/Data-Structures-and-Algorithms/blob/main/Data_Structure/Tree/Binary%20Trees.md#types-of-binary-tree)
```
Heaps are used when the highest or lowest order/priority element needs to be removed. They allow quick access to this item in
O(1) time. One use of a heap is to implement a priority queue.

A priority queue is a data structure, usually implemented using heaps, that supports finding max (or min) element in O(1) along 
with insertions and deletions in O(logn).
```

### Problem

* [Hackerearth](https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/)
* [Interviewbit - k largest elements](https://www.interviewbit.com/problems/k-largest-elements/)
* [Leetcode 703](https://leetcode.com/problems/kth-largest-element-in-a-stream/)
* [Leetcode 1046](https://leetcode.com/problems/last-stone-weight/)
* [Leetcode 1673](https://leetcode.com/problems/find-the-most-competitive-subsequence/)
* [Atcoder ABC 141D](https://atcoder.jp/contests/abc141/tasks/abc141_d)
