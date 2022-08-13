```
The bipartite matching is a set of edges in a graph is chosen in such a way, that no two edges in that set will share an 
endpoint. The maximum matching is matching the maximum number of edges.
```
![image](https://user-images.githubusercontent.com/59710234/184479593-e1393e75-e3e4-4d33-aaa7-8237c31a818e.png)

```
“There are M member job applicants and N jobs. Each applicant has a subset of jobs that he/she is interested in. Each job opening 
can only accept one applicant and a job applicant can be appointed for only one job. Find an assignment of jobs to applicants in
such that as many applicants as possible get jobs.”
```
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
