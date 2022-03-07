###  Binary Heaps
```
A Heap is a complete binary tree-based data structure with a specific ordering property.

There are two types: 
  * Max-Heap: The key present at any node is greater than the keys present at both of its children. The largest key is at the
    root node.
  * Min-Heap: The key present at any node is smaller than the keys present at both of its children. The smallest key is at the
    root node.
```
<details> <summary> Max-Heap Example </summary>
 <img src="https://user-images.githubusercontent.com/59710234/157077980-1e4f4440-e4eb-4641-b493-502c36fa8cd8.png" alt="image" border="0">
</details>

<details> <summary> Min-Heap Example </summary>
 <a href="https://ibb.co/xfYv6Tk"><img src="https://user-images.githubusercontent.com/59710234/157078004-d99e0626-2d36-4b8e-925a-9df365504291.png" alt="image" border="0"></a>
</details>

[Complete Binary Tree](https://github.com/PaponAhasan/Data-Structures-and-Algorithms/blob/main/Data_Structure/Tree/Binary%20Trees.md#types-of-binary-tree)
```
Heaps are used when the highest or lowest order/priority element needs to be removed. They allow quick access to this item in
O(1) time. One use of a heap is to implement a priority queue.

A priority queue is a data structure, usually implemented using heaps, that supports finding max (or min) element in O(1) along 
with insertions and deletions in O(logn).
```
### Heap Operations
<details> <summary> Heapify </summary>
 
 <br/>
 
 ```
  Heapify is the process of creating a heap data structure from a binary tree. It is used to create a Min-Heap or a Max-Heap.
 ```
 <details> <summary> 1. Let the input array be </summary>
  <img src="https://user-images.githubusercontent.com/59710234/157094802-7e8d3c8e-dd8a-4c20-bbbd-9bd2e72414c4.png" alt="image" border="0">
 </details>
 <details> <summary> 2. Create a complete binary tree from the array
 </summary>
  <img src="https://user-images.githubusercontent.com/59710234/157095063-13caf008-9538-426e-a287-ced530896fb1.png" alt="image" border="0">
 </details>
 <details> <summary> 3. Start from the first index of non-leaf node whose index is given by n/2 - 1 </summary>
  <img src="https://user-images.githubusercontent.com/59710234/157095249-ee345163-6976-40d9-a4f9-62eb95e7bfa5.png" alt="image" border="0">
 </details>
 
 ```
 4. Set current element i as largest.
 ```
 ```
 5. The index of left child is given by 2i + 1 and the right child is given by 2i + 2.
    If leftChild is greater than currentElement (i.e. element at ith index), set leftChildIndex as largest.
    If rightChild is greater than element in largest, set rightChildIndex as largest.
 ```
 
 <details> <summary> 6. Swap largest with currentElement </summary>
  <img src="https://user-images.githubusercontent.com/59710234/157102042-2c7cc49e-bb5d-4833-8ed0-ca19e8b654b6.png" alt="image" border="0">
 </details>
 
 ```
 7. Repeat steps 3-7 until the subtrees are also heapified.
 ```
 
</details>

 <details> <summary> Algorithm </summary>
  
   <br/>
  
  ```c++
  Heapify(array, size, i)
    set i as largest
    leftChild = 2i + 1
    rightChild = 2i + 2

    if leftChild > array[largest]
      set leftChildIndex as largest
    if rightChild > array[largest]
      set rightChildIndex as largest

    swap array[i] and array[largest]
  ```
  ```c++
  MaxHeap(array, size)
    loop from the first index of non-leaf node down to zero
      call heapify
  ```
  ```
  For Min-Heap, both leftChild and rightChild must be larger than the parent for all nodes.
  ```
  
 </details>
   
### Problem

* [Hackerearth](https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/)
* [Interviewbit - k largest elements](https://www.interviewbit.com/problems/k-largest-elements/)
* [Leetcode 703](https://leetcode.com/problems/kth-largest-element-in-a-stream/)
* [Leetcode 1046](https://leetcode.com/problems/last-stone-weight/)
* [Leetcode 1673](https://leetcode.com/problems/find-the-most-competitive-subsequence/)
* [Atcoder ABC 141D](https://atcoder.jp/contests/abc141/tasks/abc141_d)

Good luck <a href="https://emoji.gg/emoji/8771_blobheart"><img src="https://emoji.gg/assets/emoji/8771_blobheart.png" width="16px" height="16px" alt="blobheart"></a>.
