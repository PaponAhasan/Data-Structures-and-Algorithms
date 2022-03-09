```
Dynamic programming, or DP, is an approach to solving problems through 'clever bruteforce'.
It is a technique that combines the 
- Correctness of complete search and (if at least one solution exists then the algorithm is guaranteed find a solution in a finite amount of time.)
- The efficiency of greedy algorithms (Greedy algorithms try to find a localized optimum solution)
- efficiently solve 
- overlapping subproblems
- optimal substructure

N.T : Dynamic programming can be applied if the problem can be divided into overlapping subproblems that can be solved independently.
```

<details> <summary> Brute Force </summary>
 
 <br/>
 
  ```
  A brute force approach is an approach that finds all the possible solutions to find a satisfactory solution to a given problem.
  ```
  ###### Disadvantages
  ```
  - It is an inefficient algorithm 
  - It is a very slow algorithm to find the correct solution
  - The brute force algorithm is neither constructive nor creative
  ```
 
</details>

```
There are two uses for dynamic programming:
   * Yes/No Question (Greedy)
   * Finding an optimal solution : You want to find a solution that is as large as possible or as small as possible.(Greedy)
   * Counting the number of solutions : You want to calculate the total number of possible solutions. (Combination)
```

### Dynamic Programming Example
```
A fibonacci series is the sequence 0, 1, 1, 2, 3. Here, each number is the sum of the two preceding numbers.
```
```c++
 Let n be the number of terms.

 1. If n <= 1, return 1.
 2. Else, return the sum of two preceding numbers.
```
```
F(0) = 0
F(1) = 1
F(2) = F(1) + F(0)
F(3) = F(2) + F(1)
F(4) = F(3) + F(2)
```
```
Here, we have used the results of the previous steps as shown below. This is called a dynamic programming approach.
```
