```
we are provided with a long rod of length n units(smaller than n). We can cut the rod in different sizes and each size has a 
different cost associated. (i.e. a rod of i units length will have a cost of ci $). Determine the maximum value obtainable by
cutting up the rod and selling the pieces. 
```
```
# Problem: Find best way to cut a rod of length n

  * Given: rod of length n

  * Assume that each length rod has a price pi

  * Find best set of cuts to get maximum revenue (ie ri/sub>
       - Each cut is integer length
       - Can use any number of cuts, from 0 to n−1
       - No cost for a cut

  * Finding an optimal solution requires solutions to multiple subproblems
```
```
For a rod of n units long, for every i units, we have two choices - either make that cut or not.

Can cut rod in 2^(n−1) ways since each inch can have a cut or no cut
```
![image](https://user-images.githubusercontent.com/59710234/173338669-863075e7-5a78-4bca-9e6d-d4fd667bfd37.png)
```
For example, if the length of the rod is 8 then the maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6) 

length   | 1   2   3   4   5   6   7   8  
--------------------------------------------
price    | 1   5   8   9  10  17  17  20
```
```
A naive solution to this problem is to generate all configurations of different pieces and find the highest-priced configuration. 
This solution is exponential in terms of time complexity. So In this problem efficiently be solved using Dynamic Programming.

1) Optimal Substructure : We can get the best price by making a cut at different positions and comparing the values obtained after 
a cut. We can recursively call the same function for a piece obtained after a cut.

cutRod(n) = max(price[i] + cutRod(n-i-1)) for all i in {0, 1 .. n-1}
[ cutRod(n) be the required (best possible price) ]


2) Overlapping Subproblems :

cR() ---> cutRod() 

                            cR(4)
                         /   |   \  \   
                        /    |    \   \             
                   cR(3)  cR(2)    cR(1) cR(0)
                  /  | \      |  \      \ 
                 /   |  \     |   \      \ 
            cR(2) cR(1) cR(0) cR(1) cR(0) cR(0)
            / \     |          |
           /   \    |          |   
        cR(1) cR(0) cR(0)     cR(0)
        /
       /
      CR(0)
      
      
In the above partial recursion tree, cR(2) is solved twice. We can see that there are many subproblems that are solved again and a
gain. Since the same subproblems are called again, this problem has the Overlapping Subproblems property.

So, the same subproblems can be avoided by constructing a temporary array val[] in a bottom-up manner(dynamic programming). 
```

### Time Complexity
```
Time Complexity: O(n^2)

Space Complexity: O(n)
```

- [geeksforgeeks](https://www.geeksforgeeks.org/cutting-a-rod-dp-13/)
- [techiedelight](https://www.techiedelight.com/rod-cutting/)
- [codesdope](https://www.codesdope.com/course/algorithms-rod-cutting/)
- [techiedelight](https://www.techiedelight.com/rod-cutting/)
- [radford](https://sites.radford.edu/~nokie/classes/360/dp-rod-cutting.html)
- [interviewbit](https://www.interviewbit.com/blog/rod-cutting-problem/)
- [web.stanford.edu]([url](https://web.stanford.edu/class/archive/cs/cs161/cs161.1168/lecture12.pdf))

### Practice Problem

- [geeksforgeeks](https://practice.geeksforgeeks.org/problems/rod-cutting0840/1/)
- [interviewbit](https://www.interviewbit.com/problems/rod-cutting/)
