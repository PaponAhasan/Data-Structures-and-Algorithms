```
A Greedy algorithm is one of the problem-solving methods which takes optimal solution in each step.

- The Greedy algorithm attempts to take the best in each step and it doesn't care about the overall result.

- Greedy Approach - "Living in the present. Don't overthink about the future".

- Greedy algorithm has only one shot to compute the optimal solution so that it never goes back and reverses the decision.

- This is not an algorithm, it is a technique.
```
```
- It is quite easy to come up with a greedy algorithm.

- Analyzing the run time for greedy algorithms will generally be much easier than for other techniques (like Divide and conquer).

- The difficult part is that for greedy algorithms you have to work much harder to understand correctness issues.
  Most greedy algorithms are not correct.
```
![image](https://user-images.githubusercontent.com/59710234/173228187-8a71a544-4787-4c38-95ac-6d79fee2bf16.png)

[Ref image](https://www.simplilearn.com/ice9/free_resources_article_thumb/Source_to_Destination_Greedy_Algorithm_Solution.gif)

```
- Start from the source vertex.
- Pick one vertex at a time with a minimum edge weight (distance) from the source vertex.
- 
```
### Example
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
