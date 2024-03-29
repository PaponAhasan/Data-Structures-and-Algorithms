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

---
```
Now, create a matrix A^1 using matrix A^0

Now intermediate vertex is : 1

A0[2,3] > A0[2,1] + A0[1,3] => inf > 2 + inf

A0[2,4] > A0[2,1] + A0[1,4] => 4 > 2 + 5 = 7

A0[3,2] > A0[3,1] + A0[1,2] => 1 > inf + 3

A0[3,4] > A0[3,1] + A0[1,4] => inf > inf + 5

A0[4,2] > A0[4,1] + A0[1,2] => inf > inf + 3

A0[4,3] > A0[4,1] + A0[1,3] => 2 > inf + inf

```

![image](https://user-images.githubusercontent.com/59710234/184449959-3d6efa76-8f81-4245-b102-ce8d7f5ab6ec.png)

---
```
Now, create a matrix A^2 using matrix A^1

Now intermediate vertex is : 2

A1[1,3] > A1[1,2] + A1[2,3] => inf > 3 + inf

A1[1,4] > A1[1,2] + A1[2,4] => 5 > 3 + 4 = 7

A1[3,1] > A1[3,2] + A1[2,1] => inf > 1 + 2 = 3 true

A1[3,4] > A1[3,2] + A1[2,4] => inf > 1 + 4 = 5 true

A1[4,1] > A1[4,2] + A1[2,1] => inf > inf + 2

A1[4,3] > A1[4,2] + A1[1,3] => 2 > inf + inf
```
![image](https://user-images.githubusercontent.com/59710234/184450833-ef067a67-7cb9-4512-99b9-061d6c50819c.png)

---

```
Now, create a matrix A^3 using matrix A^2

Now intermediate vertex is : 3

A2[1,2] > A2[1,3] + A2[3,2] => 3 > 12 + 1 = 13 

A2[1,4] > A2[1,3] + A2[3,4] => 5 > 12 + 5 = 17

A2[2,1] > A2[2,3] + A2[3,1] => 2 > inf + 3 

A2[2,4] > A2[2,3] + A2[3,4] => 4 > inf + 5

A2[4,1] > A2[4,3] + A2[3,1] => inf > 2 + 3 = 5 true

A2[4,2] > A2[4,3] + A2[3,2] => inf > 2 + 1 = 3 true
```
![image](https://user-images.githubusercontent.com/59710234/184452353-059bac63-d6b3-4ca1-9328-0592015ecf28.png)

---

```
Now, create a matrix A^4 using matrix A^3

Now intermediate vertex is : 4

A2[1,2] > A2[1,4] + A2[4,2] => 3 > 5 + 3 = 8 

A2[1,3] > A2[1,4] + A2[4,3] => 12 > 5 + 2 = 7 (true)

A2[2,1] > A2[2,4] + A2[4,1] => 2 > 4 + 5 =  9 

A2[2,3] > A2[2,4] + A2[4,3] => inf > 4 + 2 = 6 (true)

A2[3,1] > A2[3,4] + A2[4,1] => 3 > 5 + 5 = 10 

A2[3,2] > A2[3,4] + A2[4,2] => 1 > 5 + 3 = 8
```
![image](https://user-images.githubusercontent.com/59710234/184446778-97f4c16a-9941-4df9-b8b2-46caa34b5147.png)

### Floyd Warshall Algorithm Complexity
```
3 nested loops running over the number of nodes, time complexity is O(n^3).

Space complexity is O(n^2) as 2D matrix is ​​used.
```
