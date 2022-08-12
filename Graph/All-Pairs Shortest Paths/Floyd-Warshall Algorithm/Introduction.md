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
![image](https://user-images.githubusercontent.com/59710234/184446526-3ddd2aaa-148e-4e7b-9119-79d8a5b477cb.png)

```
Now, create a matrix A^1 using matrix A^0

Now intermediate vertex is : 1

A0[2,3] < A0[2,1] + A0[1,3] => inf > 2 + inf

A0[2,4] < A0[2,1] + A0[1,4] => 4 > 2 + 5 = 7

A0[3,2] < A0[3,1] + A0[1,2] => 1 > inf + 3

A0[3,4] < A0[3,1] + A0[1,4] => inf > inf + 5

A0[4,2] < A0[4,1] + A0[1,2] => inf > inf + 3

A0[4,3] < A0[4,1] + A0[1,3] => 2 > inf + inf


```
![image](https://user-images.githubusercontent.com/59710234/184449959-3d6efa76-8f81-4245-b102-ce8d7f5ab6ec.png)

```
Now, create a matrix A^2 using matrix A^1

Now intermediate vertex is : 2

A1[1,3] < A1[1,2] + A1[2,3] => inf > 3 + 9 = 12 true

A1[1,4] < A1[1,2] + A1[2,4] => 5 > 3 + 4 = 7

A1[3,1] < A1[3,2] + A1[2,1] => inf > 1 + 2 = 3 true

A1[3,4] < A1[3,2] + A1[2,4] => inf > 1 + 4 = 5 true

A1[4,1] < A1[4,2] + A1[2,1] => inf > inf + 2

A1[4,3] < A1[4,2] + A1[1,3] => 2 < inf + inf
```
![image](https://user-images.githubusercontent.com/59710234/184446603-05e09104-c359-4d97-9c81-e29f19a587e8.png)

```
```
![image](https://user-images.githubusercontent.com/59710234/184446716-eb89182d-4967-453b-b5ce-d876cd962ff4.png)

```
```
![image](https://user-images.githubusercontent.com/59710234/184446778-97f4c16a-9941-4df9-b8b2-46caa34b5147.png)


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
