```
The 0/1 knapsack problem is a classical dynamic programming problem.

We have a bag of given capacity C. We need to pack n items in the bag. Each item has a value v and weight w. The objective is to 
maximize the profit.

- The capacity of the bag is C.

- We have n items.

- The ith item has value vi and weight wi.

- Our target is to maximize the profit by taking the most valuable items but we can not exceed the bag capacity C.

- We can either carry an item or can not carry it. 

- We can not take an item more than once.

Example : 
  Suppose we have a bag of maximum capacity C = 8units.
  We have a total of n = 4 items to choose from.
  The values of each item are given as a list v = [1, 2, 5, 6] and 
  Their corresponding weights are given as a list w = [2, 3, 4, 5].
  Since this is a 0/1 knapsack problem, we can either include an item in the bag or can not include it.
  We need to take the items in such a way so that the total profit is maximized and 
  The total weight of items taken is less than or equal to the capacity C.
```
```
The time complexity of the solution is O(n.w) and requires O(n.w) extra space.
```


- [geekculture](https://medium.com/geekculture/how-to-solve-the-0-1-knapsack-problem-using-dynamic-programming-9f22e38f9916)
- [techiedelight](https://www.techiedelight.com/0-1-knapsack-problem/)
