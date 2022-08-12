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
![image](https://user-images.githubusercontent.com/59710234/184445893-9a57270c-ad6d-4c26-acf3-1d4916ea4376.png)
![image](https://user-images.githubusercontent.com/59710234/184445913-a684dcb1-d077-4893-86c4-9845d242fb95.png)


![image](https://user-images.githubusercontent.com/59710234/184445938-06b68941-a3f1-4c81-8893-45e95e50a5bf.png)
![image](https://user-images.githubusercontent.com/59710234/184445953-b8c518fd-bff0-4c1e-9f1e-41c4f55c2d05.png)
![image](https://user-images.githubusercontent.com/59710234/184445967-25726add-daf3-4639-9507-0af5b4cef143.png)
![image](https://user-images.githubusercontent.com/59710234/184445978-f4f00079-7ff0-4f60-8a22-ea178082b063.png)


```
![image](https://user-images.githubusercontent.com/59710234/184427225-67046951-3665-4665-9196-f4dcd568c5b2.png)

![image](https://user-images.githubusercontent.com/59710234/184427493-57b4c8e0-b62c-48ed-a464-1a882df48bc1.png)

![image](https://user-images.githubusercontent.com/59710234/184427522-d0fcfb32-bd1e-4a57-91d2-ccb1d4e94e9a.png)

![image](https://user-images.githubusercontent.com/59710234/184427555-001892b5-1180-4a03-bbe1-be0301569aba.png)
```

### Floyd Warshall Algorithm Complexity
```
3 nested loops running over the number of nodes, time complexity is O(n^3).

Space complexity is O(n^2) as 2D matrix is ​​used.
```
