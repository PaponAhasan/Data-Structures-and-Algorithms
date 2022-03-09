### Complexity

```
Time and space complexity analysis is an important part of problem solving. All programming problems have a time limit and a 
memory limit.If your solution is logically 'correct', it may not meet these requirements.
- Time complexity is the number of steps/operations your algorithm takes to finish executing a given input. 
- Space complexity is the amount of space your algorithm can occupy when it runs on a given input.

- Time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the input. 
- Similarly, Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function of the 
length of the input.
```

```
The Big-O notation is used to describe how an algorithm scales with the size of the input.
```
![image](https://user-images.githubusercontent.com/59710234/157398014-98fb33d3-0115-40b1-9dbc-b1347fc7a996.png)

### Simple Example

```
Q :  Suppose you are given an array A and an integer x and you have to find if x exists in array A.

A : Simple solution to this problem is traverse the whole array A and check if the any element is equal x to.
```

![image](https://user-images.githubusercontent.com/59710234/157399230-a6a602ca-6ca6-48de-8389-877774202944.png)

```
- Each of the operation in computer take approximately constant time, takes c time.
- The number of lines of code executed is actually depends on the value of x.
- We will consider worst case scenario i.e., when is not present in the array A. the if condition will run N times
  where A is the length of the array A.
- So in the worst case, total execution time will be (N * c ) + c. N*c for the if condition and c for the return statement. 
- As we can see that the total time depends on the length of the array A. If the length of the array will increase the time of execution 
  will also increase.
```
