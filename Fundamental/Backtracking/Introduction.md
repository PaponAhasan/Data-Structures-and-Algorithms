```
A backtracking algorithm is a problem-solving algorithm that uses a brute force approach for finding the desired output.

The term backtracking suggests that if the current solution is not suitable, then backtrack and try other solutions. Backtracking
is used when you have multiple solution and you want all those solution. Thus, recursion is used in this approach.
```
`[ A brute force approach is an approach that finds all the possible solutions to find a satisfactory solution to a given 
problem. ]`

![image](https://user-images.githubusercontent.com/59710234/174453147-8ccdda0d-497a-41c8-87f3-faf253aff1a4.png)

### Example Backtracking Approach
```
Example : If ther are three student two boys and girl (B1,B2,G1) and ther are three sits. We have to arrange them in those three 
sits. How many way we can arrange. Number are student are 3, arrange them 3! = 6 ways possibilities. 

Now we find out all possible arrangement. For finding all possible all possible arrangement solution can represent in the form of a
tree (state space tree). Constraint: Girl should not be on the middle bench.
```

`[A space state tree is a tree representing all the possible states (solution or nonsolution) of the problem from 
the root as an initial state to the leaf as a terminal state.]`

![image](https://user-images.githubusercontent.com/59710234/174454202-351d1a8a-5296-4c80-9898-25a515e408a7.png)

### Backtracking Algorithm
```c++
Backtrack(x)
    if x is not a solution
        return false
    if x is a new solution
        add to list of solutions
    backtrack(expand x)
```

### Backtracking Algorithm Applications
```
- To find all Hamiltonian Paths present in a graph.
- To solve the N Queen problem.
- Maze solving problem.
- The Knight's tour problem.
```
```
Branch Vs Bound Algorithm
```
