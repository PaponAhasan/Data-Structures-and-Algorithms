### Spanning Tree

```
A spanning tree is a sub-graph of an undirected connected graph, which includes all the vertices of the graph with a minimum 
possible number of edges. If a vertex is missed, then it is not a spanning tree.

|V| = N Vertices
|E| = |V| - 1 = N - 1 Edges

The total number of spanning trees with n vertices that can be created from a complete graph is equal to n^(n-2).
```
> N.T : An undirected graph is a graph in which the edges do not point in any direction (ie. edges are bidirectional).
> 
> If we have n = 4, the maximum number of possible spanning trees is equal to 44-2 = 16

### Example of a Spanning Tree

<details> <summary> Spanning Tree </summary>

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

### Minimum Spanning Tree

```
A minimum spanning tree is a spanning tree in which the sum of the weight of the edges is as minimum as possible.
```

### Example of a Minimum Spanning Tree

<details> <summary> Minimum Spanning Tree </summary>

<br/>
 
#### Weighted Normal graph :
  
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


  flowchart LR
     A[Hard] -->|Text| B(Round)
     B --> C{Decision}
     C -->|One| D[Result 1]
     C -->|Two| E[Result 2]

