```
Prim's algorithm is a minimum spanning tree algorithm that takes a graph as input and finds the subset of the edges of that graph,
which :
  - form a tree
  - has the minimum sum of weights among all the trees
```

### How Prim's algorithm works
```
Prim's algorithm follow  greedy approach , that find the local optimum in the hopes of finding a global optimum. We start from one 
vertex and keep adding edges with the lowest weight until we reach our goal.

The steps for implementing Prim's algorithm are as follows:

  1. Initialize the minimum spanning tree with a vertex chosen at random.
  2. Find all the edges that connect the tree to new vertices, find the minimum and add it to the tree
  3. Keep repeating step 2 until we get a minimum spanning tree
```

### Example of Prim's algorithm

![image](https://user-images.githubusercontent.com/59710234/184238057-a9b53aa3-cc98-4453-b4ea-dc7e3a4ba161.png)
![image](https://user-images.githubusercontent.com/59710234/184238110-c7d6b420-693e-4148-9903-7748b81c39fa.png)
![image](https://user-images.githubusercontent.com/59710234/184238219-d475436a-8c9c-4ce7-932e-501c3ddda43a.png)
![image](https://user-images.githubusercontent.com/59710234/184238339-9a76fa46-86d1-4644-b8ed-c3a96c9ebdd2.png)
![image](https://user-images.githubusercontent.com/59710234/184238449-199d5ef6-938f-4040-ae38-402b2c401e45.png)
![image](https://user-images.githubusercontent.com/59710234/184238554-d2b0d8ca-7246-4340-8667-a10ba27784bf.png)

#### Prim's Algorithm Complexity
```
The Time Complexity of the program is O(V^2). 
If we can use priority queue to reduce runtime. Then, The time complexity of Prim's algorithm is O(E log E).
If we can use binary heap to reduce runtime. Then, The time complexity of Prim's algorithm is O(E log V).

You can use priority queue to reduce runtime. When adding a new node to V-new, all the adjacent edges of that node must be added to 
the priority queue. Now you can find the minimum weight edge from the priority queue in logarithm complexity.The total complexity will 
be O(E log E).

But nodes push to queue instead of edge O(ElogV) The complexity can be reduced to.
```
