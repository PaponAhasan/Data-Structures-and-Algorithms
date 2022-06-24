```
Hashing in data structure results in an array index that is already occupied to store a value. In such a case, hashing performs
a search operation and probes linearly for the next empty cell.
```
```
Example : 

A : 3, 2, 9, 6, 11, 13, 7, 12
```

| Key   |Location  | Probes |
|-------| -------  | ------ |
|  3    | 3%10 = 3 |   1    |
|  2    | 2%10 = 2 |   1    |
|  9    | 9%10 = 9 |   1    |
|  6    | 6%10 = 6 |   1    |
|  11   | 11%10 = 1|   1    |
|  13   | 13%10 = 3|   2    |
|  7    | 7%10 = 7 |   1    |
|  12   | 12%10 = 2|   4    |

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
|  8     |           |
|  9     |    9      |

