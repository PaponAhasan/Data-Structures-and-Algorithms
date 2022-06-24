```
1. Insert 
2. Search
3. Analysis
4. Delete
```
```
Example : 

K : 16, 12, 25, 39, 6, 112, 5, 68, 75
m : 10

```
```
ki insert this location = k % m [ i = 0 to m-1 ]

k = 11, location = (1+0)%10 = 1 ; "that's free hash table"

k = 22, location = (2+0)%10 = 2 ; not free table
        location = (2+1)%10 = 3 ; not free table
        location = (2+2)%10 = 4 ; not free table
        location = (2+3)%10 = 5 ; not free table
        location = (2+4)%10 = 6 ; not free table
        location = (2+5)%10 = 7 ; not free table
        location = (2+6)%10 = 8 ; "that's free hash table"
        
Probes : this exactly place to ith place(next empty cell) free (total move count)
```

|Key(k) |Location(u)| Probes |
|-------| -------   | ------ |
|  16   | 3%10 = 3  |   1    |
|  12   | 2%10 = 2  |   1    |
|  25   | 9%10 = 9  |   1    |
|  39   | 6%10 = 6  |   1    |
|  6    | 11%10 = 1 |   1    |- |
|  22   | 13%10 = 3 |   2    |
|  5    | 7%10 = 7  |   1    |
|  68   | 12%10 = 2 |   4    |
|  75   | 22%10 = 2 |   7    |

```
Hash Table
```
|  Index | Hash Table|
| ------ | --------- |
|  0     |           |
|  1     |    11     |
|  2     |    2      |
|  3     |    3      |
|  4     |    13`    |
|  5     |    12`    |
|  6     |    6      |
|  7     |    7      |
|  8     |    22`    |
|  9     |    9      |

