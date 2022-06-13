```
A Greedy algorithm is one of the problem-solving methods which takes optimal solution in each step.

- The Greedy algorithm attempts to take the best in each step and it doesn't care about the overall result.

- Greedy Approach - "Living in the present. Don't overthink about the future".

- Greedy algorithm has only one shot to compute the optimal solution so that it never goes back and reverses the decision.

- This is not an algorithm, it is a technique.

- There would be only one optimal solution.
```

![image](https://user-images.githubusercontent.com/59710234/173228187-8a71a544-4787-4c38-95ac-6d79fee2bf16.png)

[Ref image](https://www.simplilearn.com/ice9/free_resources_article_thumb/Source_to_Destination_Greedy_Algorithm_Solution.gif)

```
How paths will be picked up in order to reach the destination city.

- Start from the source vertex.
- Pick one vertex at a time with a minimum edge weight (distance) from the source vertex.
```
```
- The greedy method is one of the strategies like Divide and conquer used to solve the problems. 

- This method is used for solving optimization problems.
  [ An optimization problem is a problem that demands either maximum or minimum results. ]
```
### Example
```
Suppose there is a problem 'P'. I want to travel from A to B shown as below:
P : A → B

The problem is that we have to travel this journey from A to B. There are various solutions to go from A to B. We can go from A to
B by walk, car, bike, train, aeroplane, etc. Here is a constraint in the journey that we have to travel this journey within 12 hrs. 

1. If I go by train or aeroplane travel this journey within 12 hrs (distance as minimum as possible).

2. If travelling by train will lead to the minimum cost so it is an optimal solution (minimum cost).

So , Travelling by train by optimal solution.
```
```
For Example 01: You are given an array A of integers, where each element indicates the time a thing takes for completion. You want 
to calculate the maximum number of things that you can do in the limited time that you have.

This is a simple Greedy-algorithm problem.

In each iteration,
you have to greedily select two variables currentTime and numberOfThings and Sort the array A in a non-decreasing order.
```
![image](https://user-images.githubusercontent.com/59710234/173217224-46b01651-835b-4f74-b7f6-9fe8ac286ebf.png)

```
For Example 02: The Scheduling problem

 - List of all the tasks that you need to complete today (Integer N)
 - Time that is required to complete each task (List T)
 - Priority (or weight ) to each work. (Lists P)
 
 You need to determine in what order you should complete the tasks to get the most optimum result.
```
```
1. you must determine the total time that is required to complete each task.
   [ C(j) = T[1] + T[2] + .... + T[j] where 1 <= j <= N ] 
   This is because jth work has to wait till the first (j-1) tasks are completed after which it requires T[j] time for completion.
   You obviously want completion times to be as short as possible.
   
   In a given sequence, the jobs that are queued up at the beginning have a shorter completion time and jobs that are queued up 
   towards the end have longer completion times.
   
2. F = P[1] * C(1) + P[2] * C(2) + ...... + P[N] * C(N)
   [ F is the weighted sum of the completion times ]
   This F function must be minimized.
```
```
For Special cases;

1. If the time required to complete different tasks is the same i.e. T[i] = T[j] where 1 <= i, j <= N

2. If the priorities of different tasks are the same i.e. P[i] = P[j] where 1 <= i, j <= N

If the time required to complete different tasks is the same, then you should give preference to the task with the higher priority.
```
### Advantages
```
- The Greedy algorithm attempts to take the best in each step; simpler, more efficient algorithm than other techniques
  like Dynamic Programming.

- It is quite easy to come up with a greedy algorithm.

- Analyzing the run time for greedy algorithms will generally be much easier than for other techniques (like Divide and conquer). 
```
### Disadvantages
```
- The difficult part is that for greedy algorithms you have to work much harder to understand correctness issues.
  Most greedy algorithms are not correct.
  
- The Greedy algorithm attempts to take the best in each step, Don't overthink about the future. So, there might be a possibility 
  that the greedy solution does not give the best solution for every problem. 
  
- Greedy algorithms cannot always be applied. For example, the Fractional Knapsack problem can be solved using Greedy, 
  but 0-1 Knapsack cannot be solved using Greedy. Because Greedy approach does not ensure an optimal solution.
  It's take the best in each step.
  
  why fractional knapsack be solved by Greedy approach ?
  
  Ans : An efficient solution is to use the Greedy approach. The basic idea of the greedy approach is to calculate the ratio value/weight 
  for each item and sort the item on basis of this ratio. Then take the item with the highest ratio and add them until we can’t add 
  the next item.
```
![image](https://user-images.githubusercontent.com/59710234/173249810-35c27bc9-7844-4a3a-abb9-820471204c36.png)
```
In the above graph, We have to travel from the source to the destination at the minimum cost. Since we have two feasible solutions 
having cost paths as 7 and 9. In the greedy approach 20 is the minimum cost path But the optimal solution is 18.
```
### Greedy Algorithms Uses
```
1. Optimization problems (Dijkstra’s Algorithm) with negative graph edges cannot be solved using a greedy algorithm.

2. Used for Constructing Minimum Spanning Trees: Prim’s and Kruskal’s Algorithms used to construct minimum spanning trees are 
   greedy algorithms.

3. Solve Optimization Problems: Graph - Map Coloring, Graph - Vertex Cover, Knapsack Problem, Job Scheduling Problem, and activity 
   selection problem are classic optimization problems solved using a greedy algorithmic paradigm.
   
   huffman coding
```

- [Greedy Algorithms Explained with Examples](https://www.freecodecamp.org/news/what-is-a-greedy-algorithm/)
- [programiz](https://www.programiz.com/dsa/greedy-algorithm#:~:text=A%20greedy%20algorithm%20is%20an,if%20the%20choice%20is%20wrong.)
