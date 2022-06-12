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
```
For Example : You are given an array A of integers, where each element indicates the time a thing takes for completion. You want to 
calculate the maximum number of things that you can do in the limited time that you have.

This is a simple Greedy-algorithm problem.

In each iteration, you have to greedily select two variables currentTime and numberOfThings and Sort the array A in a non-decreasing 
order.
```
![image](https://user-images.githubusercontent.com/59710234/173217224-46b01651-835b-4f74-b7f6-9fe8ac286ebf.png)

