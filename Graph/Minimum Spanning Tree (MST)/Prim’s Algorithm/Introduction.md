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

![image](https://user-images.githubusercontent.com/59710234/184237299-0cffb734-0117-41f3-be47-73539968d187.png)
![image](https://user-images.githubusercontent.com/59710234/184237399-720b32a1-9e7f-4ff9-8264-495d510eeef1.png)
![image](https://user-images.githubusercontent.com/59710234/184237468-6c5a886a-8bc8-4c18-919d-47060ca8fe07.png)
![image](https://user-images.githubusercontent.com/59710234/184237584-f3a9a685-0b80-4af0-88d9-c4e00d63a81f.png)
![image](https://user-images.githubusercontent.com/59710234/184237730-803bee56-dc12-43ae-a252-b095f37fb3d3.png)
![image](https://user-images.githubusercontent.com/59710234/184237799-e6a2fc5e-09ea-4aac-a83d-e20f39cc901d.png)

