```
A rod of length n inches and an array of prices that includes prices of all pieces of size smaller than n. Determine the maximum 
value obtainable by cutting up the rod and selling the pieces. 
```
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
Time Complexity: O(n2)

Space Complexity: O(n)
```

- https://www.geeksforgeeks.org/cutting-a-rod-dp-13/
- https://www.techiedelight.com/rod-cutting/

### Practice Problem

[geeksforgeeks](https://practice.geeksforgeeks.org/problems/rod-cutting0840/1/)
