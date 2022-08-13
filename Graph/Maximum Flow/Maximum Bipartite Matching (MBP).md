```
The bipartite matching is a set of edges in a graph is chosen in such a way, that no two edges in that set will share an 
endpoint. The maximum matching is matching the maximum number of edges.

- 2 disjoit set of vertices. not between the vertices of particular set.
- vertexs of the same set are not connected.
- 'subset a edges' that no two edges share a vertex
```
```
A bipartite graph is a graph whose vertices can be divided into two disjoint and independent sets and , that is every edge 
connects a vertex in to one in.

- The vertices of the graph can be decomposed into two sets.
- The two sets are X = {A, C} and Y = {B, D}.
- The vertices of set X join only with the vertices of set Y and vice-versa.
- The vertices within the same set do not join.
- Therefore, it is a bipartite graph.
```
![image](https://user-images.githubusercontent.com/59710234/184493199-8dded4f4-5215-414e-9164-1253ecb092c2.png)

### Example of Max Flow Ford Fulkerson algorithm
```
“There are M member job applicants and N jobs. Each applicant has a subset of jobs that he/she is interested in. Each job opening 
can only accept one applicant and a job applicant can be appointed for only one job. Find an assignment of jobs to applicants in
such that as many applicants as possible get jobs.”
```
![image](https://user-images.githubusercontent.com/59710234/184479593-e1393e75-e3e4-4d33-aaa7-8237c31a818e.png)

```
Maximum Bipartite Matching (MBP) problem can be solved by converting it into a flow network.

There must be a source and sink in a flow network. So we add a source and add edges from source to all applicants. Similarly, 
add edges from all jobs to sink. The capacity of every edge is marked as 1 unit.
```
![image](https://user-images.githubusercontent.com/59710234/184479779-e8e08fe2-c7dc-4550-b223-6c729f453a4f.png)

```
We use Ford-Fulkerson algorithm to find the maximum flow in the flow network built in step 1. Output is number maximum number of 
people that can get jobs. The maximum flow from source to sink is five units.
```

![image](https://user-images.githubusercontent.com/59710234/184479804-f990986c-a586-4cdf-b2f0-95aa08487879.png)

- https://www.geeksforgeeks.org/maximum-bipartite-matching/
- https://www.youtube.com/watch?v=sSOK9STyuBY&ab_channel=PeriCSE

![image](https://user-images.githubusercontent.com/59710234/184484269-c2edddfa-0c3c-4f02-a6fe-c4968a480e2e.png)
