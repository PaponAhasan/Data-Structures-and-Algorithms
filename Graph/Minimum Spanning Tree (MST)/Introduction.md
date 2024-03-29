### Spanning Tree

```
A spanning tree is a sub-graph of an undirected connected graph, which includes all the vertices of the graph with a minimum 
possible number of edges. If a vertex is missed, then it is not a spanning tree.

- Prim’s and Kruskal’s Algorithm are the famous greedy algorithms.
- They are used for finding the Minimum Spanning Tree (MST) of a given graph.
- To apply these algorithms, the given graph must be weighted, connected and undirected.

|V| = N Vertices
|E| = |V| - 1 = N - 1 Edges

The total number of spanning trees with n vertices that can be created from a complete graph is equal to n^(n-2).
```

> N.T : An undirected graph is a graph in which the edges do not point in any direction (ie. edges are bidirectional).
> 
> If we have n = 4, the maximum number of possible spanning trees is equal to 44-2 = 16
  
```
We have a weighted graph. Assume that each node in the graph is a house. We need to install telephone lines between our houses.
We want to install the line at the lowest cost. 

It does n't need to be every edge direct every edge, only visit other houses and available should be a only path. After that,except
to the other edge. we found subgraph, this is called spanning tree.
```

![image](https://user-images.githubusercontent.com/59710234/184219636-ab7548b0-0fb3-49fd-a9a3-bcfef6f14e88.png)

<details> <summary> Example Spanning Tree </summary>
    
<br/>
 
#### Normal graph :
  
  ```mermaid
graph TD;
    A-->B;
    A-->D;
    B-->C;
    D-->C; 
```
 
#### A spanning tree :
  
  ```mermaid
graph TD;
    A-->B;
    A-->D;
    D-->C; 
```
   
#### A spanning tree :
  
  ```mermaid
graph TD;
    A-->B;
    B-->C;
    D-->C; 
```
   
#### A spanning tree :
  
  ```mermaid
graph TD;
    A-->D;
    B-->C;
    D-->C; 
```
   
#### A spanning tree :
  
  ```mermaid
graph TD;
    A-->B;
    A-->D;
    B-->C; 
```
   
#### A spanning tree :
  
  ```mermaid
graph TD;
    A-->B;
    A-->D;
    A-->C; 
```
   
#### A spanning tree :
  
  ```mermaid
graph TD;
    A-->D;
    D-->B
    B-->C; 
```
    
</details>

---

### Minimum Spanning Tree

```
A minimum spanning tree is a spanning tree in which the sum of the weight of the edges is as minimum as possible.
```
![image](https://user-images.githubusercontent.com/59710234/184220554-57b002dd-cf75-4497-a8e9-1981054afe2e.png)

<details> <summary> Minimum Spanning Tree </summary>

<br/>
 
#### Weighted Normal graph :
  
![image](https://user-images.githubusercontent.com/59710234/184213945-738c500d-334a-449e-8d57-8d3ba716be3e.png)
 
#### A spanning tree :
  
![image](https://user-images.githubusercontent.com/59710234/184214000-83981e7f-53e8-4127-a26e-1b8e6524c9db.png)
   
#### A spanning tree :
  
![image](https://user-images.githubusercontent.com/59710234/184214035-32cb6b59-7a8b-4ad0-aee9-64053299fe0a.png)
   
#### A spanning tree :
  
![image](https://user-images.githubusercontent.com/59710234/184214073-d7694fbb-61ed-49d9-9e92-9cbdb0d61bb8.png)
   
#### A spanning tree :
  
![image](https://user-images.githubusercontent.com/59710234/184214091-9beb6c56-f987-4559-b372-c26fe050438f.png)
   
#### A spanning tree :
  
![image](https://user-images.githubusercontent.com/59710234/184214116-5c92bdbb-4672-482e-b9f2-61fde655c8ce.png)
   
#### The minimum spanning tree (7 cost) :
  
![image](https://user-images.githubusercontent.com/59710234/184214145-8b780ccc-5eda-4762-a11e-bf1c864b3d43.png)
  
</details>

---

### Spanning Tree Applications
- Computer Network Routing Protocol
- Cluster Analysis
- Civil Network Planning

---

### Minimum Spanning tree Applications
- To find paths in the map
- To design networks like telecommunication networks, water supply networks, and electrical grids.
