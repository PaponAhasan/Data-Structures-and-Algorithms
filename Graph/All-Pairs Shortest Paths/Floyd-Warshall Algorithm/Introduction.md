```
Floyd-Warshall Algorithm is an algorithm for finding the shortest path between all the pairs of vertices in a weighted graph. This 
algorithm works for both the directed and undirected weighted graphs. But, it does not work for the graphs with negative cycles.

This algorithm follows the dynamic programming approach to find the shortest paths.
```

### How Floyd-Warshall Algorithm Works?

```
Create a matrix A^0 of dimension n*n where n is the number of vertices. Each cell A[i][j] is filled with the distance from the ith 
vertex to the jth vertex. If there is no path from ith vertex to jth vertex, the cell is left as infinity. And the value of the 
diagonal  is 0 because there is no distance to go own edge!

matrix[i][j] = min(matrix[i][j] , matrix[i][k] + matrix[k][j])
```
![image](https://user-images.githubusercontent.com/59710234/184427225-67046951-3665-4665-9196-f4dcd568c5b2.png)

![image](https://user-images.githubusercontent.com/59710234/184427493-57b4c8e0-b62c-48ed-a464-1a882df48bc1.png)

![image](https://user-images.githubusercontent.com/59710234/184427522-d0fcfb32-bd1e-4a57-91d2-ccb1d4e94e9a.png)

![image](https://user-images.githubusercontent.com/59710234/184427555-001892b5-1180-4a03-bbe1-be0301569aba.png)
