```
Hashing in data structure results in an array index that is already occupied to store a value. In such a case, hashing performs
a search operation and probes linearly for the next empty cell.

1. Insert 
2. Search
3. Analysis
4. Delete
```

###

```
X : 26, 30, 45, 23, 25, 43, 74
m : 10

X(i) insert this location = X % m [ i = 0 to n-1 ]

H(X) = X%10

```

|H(X) = X%10|
| --------- |
|    6      |
|    0      |
|    5      |
|    3      |
|    5      |
|    3      |
|    4      |

### Insert
```
H(X) = [ h(x) + f(i) ] % 10
f(i) = i [ i = 0 to n-1 ]

X = 26, location = [ h(26)+0 ]%10 = 6 ; "that's free hash table"

k = 74, location = [ h(74)+0 ]%10 = 4 ; not free table
        location = [ h(74)+1 ]%10 = 5 ; not free table
        location = [ h(74)+2 ]%10 = 6 ; not free table
        location = [ h(74)+3 ]%10 = 7 ; not free table
        location = [ h(74)+4 ]%10 = 8 ; "that's free hash table"
```

![image](https://user-images.githubusercontent.com/59710234/176481937-d8e8d723-55f1-46b4-bd97-5ee539dd7d89.png)


### Example

```
Example : 

K : 3, 2, 9, 6, 11, 13, 7, 12, 22
m : 10

```
```
ki insert this location = (u+i)%m [ i = 0 to m-1 ]

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
|  3    | 3%10 = 3  |   1    |
|  2    | 2%10 = 2  |   1    |
|  9    | 9%10 = 9  |   1    |
|  6    | 6%10 = 6  |   1    |
|  11   | 11%10 = 1 |   1    |
|  13   | 13%10 = 3 |   2    |
|  7    | 7%10 = 7  |   1    |
|  12   | 12%10 = 2 |   4    |
|  22   | 22%10 = 2 |   7    |

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


- [Abdul Bari](https://www.youtube.com/watch?v=mg-F96ORO_M&list=PLXDNeDo_io_qc0OnD2MG5FWUe4AijgAZM&index=4&ab_channel=RakibulAhasanPapon)
