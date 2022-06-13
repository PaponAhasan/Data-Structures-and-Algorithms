```
- Activity selection problem is a problem in which a person has a list of works to do.
- Each of the activities has a starting time and ending time. 
- You need to schedule the activities in such a way the person can complete a maximum number of activities.

The problem statement for Activity Selection is that "Given a set of n activities with their start and finish times, we need to 
select maximum number of non-overlap activities, given that the person can handle only one activity at a time and complete maximum 
number of activities.
```
### Simulation

```We have 6 activities with corresponding start and end time.```

![image](https://user-images.githubusercontent.com/59710234/173254687-daf000b0-9076-43af-a5d7-91067c62a512.png)

#### Step 1: ```Sort the given activities in ascending order according to their finishing time.```

![image](https://user-images.githubusercontent.com/59710234/173254729-9c8a599e-f260-4aa3-a124-64e555bc4edc.png)

#### Step 2: 
```
A. Select the first activity from sorted array. 
   Thus soluation = {a2}.

If the start time of the currently selected activity is greater than or equal to the finish time of the previously selected activity, 
then add it to sol[].

B. Select activity a3. Since the start time of a3 is greater than the finish time of a2 [ s(a3) > f(a2) ].
   Thus soluation = {a2, a3}.

C. Select a4. Since s(a4) < f(a3), it is not added to the solution set.

D. Select a5. Since s(a5) > f(a3), a5 gets added to solution set. 
   Thus soluation = {a2, a3, a5}

E. Select a1. Since s(a1) < f(a5), a1 is not added to the solution set.

F. Select a6. a6 is added to the solution set since s(a6) > f(a5). 
   Thus solution = {a2, a3, a5, a6}.

Output
------
(1,2)
(3,4)
(5,7)
(8,9)

In the bellow diagram, the selected activities have been highlighted in grey.
```
![image](https://user-images.githubusercontent.com/59710234/173254968-f8a547f1-910a-465c-8a87-7ffbc5662baa.png)

### Time Complexity
```
Best Case : When a given set of activities are already sorted according to their finishing time. In such a case the complexity
of the algorithm will be O(n)

Worst Case : A given set of activities is unsorted, then we will have to use the sort() method. The time complexity of this method 
will be O(nlogn)
```
- [studytonight](https://www.studytonight.com/data-structures/activity-selection-problem)
- [javatpoint](https://www.javatpoint.com/activity-selection-problem)
- [geeksforgeeks](https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/)
