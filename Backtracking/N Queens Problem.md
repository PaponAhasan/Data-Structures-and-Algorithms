```
1 + 4 + 4*3 + 4*3*2 + 4*3*2*1

Lebel 00 : 1                1 nodes
Lebel 01 :  4               4 nodes
Lebel 02 : 4*3 nodes =     12 nodes
Lebel 03 : 4*3*2 nodes =   24 nodes
Lebel 04 : 4*3*2*1 nodes = 24 nodes
                           --------
                           65 nodes
```
`Number of nodes :` $$ 1+\sum_{i=0}^n[\pi_{j=0}^i(4-j)] $$


![image](https://user-images.githubusercontent.com/59710234/174467693-687f2ffd-7eee-43ad-aefb-d82173724e3d.png)

![image](https://user-images.githubusercontent.com/59710234/174467684-9bdf4887-a3bd-4f1e-9d90-d2602ce08eea.png)

![image](https://user-images.githubusercontent.com/59710234/174467668-ba660289-db5b-413e-a7db-f41ba41a7c80.png)

![image](https://user-images.githubusercontent.com/59710234/174467655-9681d5d2-180b-4e3f-bb25-fd1ebaaf9d36.png)

![image](https://user-images.githubusercontent.com/59710234/174467632-92e4f6a8-c398-45cb-abb2-0a4b25580864.png)

![image](https://user-images.githubusercontent.com/59710234/174467618-24de1530-d4b3-47b1-b190-076b0e917bed.png)

![image](https://user-images.githubusercontent.com/59710234/174467597-afc327e8-42a6-4879-bcfb-24b014363de0.png)

![image](https://user-images.githubusercontent.com/59710234/174467590-8b882359-4df6-493f-a5a2-fbcc8b81e656.png)

- [Abdul Bari](https://www.youtube.com/watch?v=xFv_Hl4B83A&list=PLDN4rrl48XKpZkf03iYFl-O29szjTrs_O&index=65)
- [geeksforgeeks](https://www.geeksforgeeks.org/n-queen-problem-backtracking-3/#:~:text=Backtracking%20Algorithm&text=When%20we%20place%20a%20queen,we%20backtrack%20and%20return%20false.)
- [codesdope](https://www.codesdope.com/course/algorithms-backtracking/)
- 
```c++
/* C++ program to solve N Queen Problem using
backtracking */

#include <bits/stdc++.h>
#define N 4
using namespace std;

/* A utility function to print solution */
void printSolution(int board[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << " " << board[i][j] << " ";
		printf("\n");
	}
}

/* A utility function to check if a queen can
be placed on board[row][col]. Note that this
function is called when "col" queens are
already placed in columns from 0 to col -1.
So we need to check only left side for
attacking queens */
bool isSafe(int board[N][N], int row, int col)
{
	int i, j;

	/* Check this row on left side */
	for (i = 0; i < col; i++)
		if (board[row][i])
			return false;

	/* Check upper diagonal on left side */
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j])
			return false;

	/* Check lower diagonal on left side */
	for (i = row, j = col; j >= 0 && i < N; i++, j--)
		if (board[i][j])
			return false;

	return true;
}

/* A recursive utility function to solve N
Queen problem */
bool solveNQUtil(int board[N][N], int col)
{
	/* base case: If all queens are placed
	then return true */
	if (col >= N)
		return true;

	/* Consider this column and try placing
	this queen in all rows one by one */
	for (int i = 0; i < N; i++) {
		/* Check if the queen can be placed on
		board[i][col] */
		if (isSafe(board, i, col)) {
			/* Place this queen in board[i][col] */
			board[i][col] = 1;

			/* recur to place rest of the queens */
			if (solveNQUtil(board, col + 1))
				return true;

			/* If placing queen in board[i][col]
			doesn't lead to a solution, then
			remove queen from board[i][col] */
			board[i][col] = 0; // BACKTRACK
		}
	}

	/* If the queen cannot be placed in any row in
		this column col then return false */
	return false;
}

/* This function solves the N Queen problem using
Backtracking. It mainly uses solveNQUtil() to
solve the problem. It returns false if queens
cannot be placed, otherwise, return true and
prints placement of queens in the form of 1s.
Please note that there may be more than one
solutions, this function prints one of the
feasible solutions.*/
bool solveNQ()
{
	int board[N][N] = { { 0, 0, 0, 0 },
						{ 0, 0, 0, 0 },
						{ 0, 0, 0, 0 },
						{ 0, 0, 0, 0 } };

	if (solveNQUtil(board, 0) == false) {
		cout << "Solution does not exist";
		return false;
	}

	printSolution(board);
	return true;
}

// driver program to test above function
int main()
{
	solveNQ();
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
```

#### Solution to the N-Queens Problem

![image](https://user-images.githubusercontent.com/59710234/174482923-0efab63b-3499-4cf5-9e5c-b0ddf8f5c305.png)

```
```

![image](https://user-images.githubusercontent.com/59710234/174482933-5ce7a01c-84f6-4976-b329-ffa34a0116f5.png)

```
```

![image](https://user-images.githubusercontent.com/59710234/174482984-5c1368b2-ef24-4e01-9fdd-4c0db5fe3d9a.png)

```
```
![image](https://user-images.githubusercontent.com/59710234/174483001-a51646af-9c19-4fc1-aaaa-a2766956ecba.png)
