### DP
```
Dynamic programming is a problem-solving technique for solving a problem by **breaking it into similar subproblems**. But we will 
never solve the same subproblem twice. 

Dynamic programming, like the divide-and-conquer method, solves problems by combining the solutions to subproblems.

A dynamic-programming algorithm solves each subsubproblem just once and then saves its answer in a table, thereby avoiding 
the work of recomputing the answer every time it solves each subsubproblem.

Such problems can have many possible solutions. Each solution has a value, and we wish to find a solution with the optimal 
(minimum or maximum) value.
```
```
Imagine you are given a box of coins and you have to count the total number of coins in it. Once you have done this, you are
provided with another box and now you have to calculate the total number of coins in both boxes. Obviously, you are not going 
to count the number of coins in the first box again. Instead, you would just count the total number of coins in the second box 
and add it to the number of coins in the first box you have already counted and stored in your mind. This is the exact idea behind 
dynamic programming.
```
<img src="https://user-images.githubusercontent.com/59710234/171965065-58de49d4-14f3-4b72-8e47-98ce50a4f7b2.png" width="500" height="300" />

```
Dynamic programming, or DP, is an approach to solving problems through 'clever bruteforce'.
It is a technique that combines the 

- Correctness of complete search and (if at least one solution exists then the algorithm is guaranteed find a solution in a finite 
  amount of time.)
  
- The efficiency of greedy algorithms (Greedy algorithms try to find a localized optimum solution)

- efficiently solve 

- overlapping subproblems

- optimal substructure

N.T : Dynamic programming can be applied if the problem can be divided into overlapping subproblems that can be solved 
      independently.
```
```
So we can solve a problem using dynamic programming if the problem has the following attributes:

- Optimal subproblems: We can break a larger problem into similar subproblems. If we can solve the subproblems optimally we can 
  use them to solve the main problem.
  
- Overlapping subproblems: The recursive solution to the problem contains subproblems that are repeated multiple times.
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
```
Dynamic Programming Approaches :

  1. Bottom-Up approach

  2. Top-Down approach
```
```
Top-Down approach : Top-Down breaks the large problem into multiple subproblems.The idea here is similar to the recursive 
approach. 

if the subproblem solved already just reuse the answer.
Otherwise, Solve the subproblem and store the result.
```
[Top-Down solution for Fibonacci Series](https://gist.github.com/thmain/2210823f41c8b236f4db)
```
Bottom-Up approach : Start computing result for the subproblem. Using the subproblem result store it for future and solve another 
subproblem. 
```
[Bottom-Up solution for Fibonacci Series](https://gist.github.com/thmain/c258434e3a6830ff4ca0)
