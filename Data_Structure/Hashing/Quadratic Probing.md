```
Hashing in data structure results in an array index that is already occupied to store a value. In such a case, hashing performs
a search operation and probes linearly for the next empty cell.
```
```
Example : 

K : 3, 2, 9, 6, 11, 13, 7, 12
m : 10

```
```
ki insert this location = (u+i^2)%m [ i = 0 to m-1 ]

k = 11, location = (1+0^2)%10 = 1 ; "that's free hash table"

k = 13, location = (3+0^2)%10 = 3 ; "not free table"
        location = (3+1^2)%10 = 4 ; "not free table"

k = 12, location = (2+0^2)%10 = 2 ; "not free table"
        location = (2+1^2)%10 = 3 ; not free table
        location = (2+2^2)%10 = 6 ; not free table
        location = (2+3^2)%10 = 1 ; not free table
        location = (2+4^2)%10 = 8 ; "that's free hash table"
        
Probes : this exactly place to ith place(next empty cell) free (total move count)
```

|Key(k) |Location(u)| Probes |
|-------| -------   | ------ |
|  3    | 3%10 = 3  |   1    |
|  2    | 2%10 = 2  |   1    |
|  9    | 9%10 = 9  |   1    |
|  6    | 6%10 = 6  |   1    |
|  11   | 11%10 = 1 |   1    |
|  13   | 13%10 = 3 |   2    |
|  7    | 7%10 = 7  |   1    |
|  12   | 12%10 = 2 |   5    |

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
|  5     |           |
|  6     |    6      |
|  7     |    7      |
|  8     |    12`    |
|  9     |    9      |

