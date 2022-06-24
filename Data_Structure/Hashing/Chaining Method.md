```
Chaining Method made of array of linked list.
```
```
1. Insert 
2. Search
3. Analysis
4. Delete
```

### Example 

```
X : 16, 12, 25, 39, 6, 112, 5, 68, 75
m : 10

X(i) insert this location = X % m [ i = 0 to n-1 ]

H(X) = (X/10)%10
```

|H(X) = X%10|
| --------- |
|    6      |
|    2      |
|    5      |
|    9      |
|    6      |
|    2      |
|    5      |
|    8      |
|    5      |

### Insert
```
Insert as of array of linked list.
```
![image](https://user-images.githubusercontent.com/59710234/175662829-ddbe8e22-e00d-4288-a1e8-df84d15ac9d8.png)

### Search
```
Key = 12 ,
Use hash function h(x) = 12%10 = 2, go to index 2 and search in this sort linked list.
If key is greater then or found stop otherwise searching this list.
```
### Analysis
```
Assume,
   n     = 100
   size  = 10
   
   Loading factor : 
       lamda = n / size = 100 / 10 = 10
       
   Search time :
       t = 1 + lamda = 1 + 10
```
### Delete
```
Assume,
   n     = 100
   size  = 10
   
   Loading factor : 
       lamda = n / size = 100 / 10 = 10
       
   Delete time :
       t = 1 + lamda = 1 + 10
```
