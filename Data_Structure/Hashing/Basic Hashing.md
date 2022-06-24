```
Hash tables use a technique 

- To generate these unique index numbers for each value stored in an array format. This technique is called the hash technique.

- Mapping a large chunk of data into small tables using a hashing function.

- You only need to find the index of the desired item, rather than finding the data. With indexing, you can quickly scan the 
  entire list and retrieve the item you wish.
  
- Efficiently finding and storing data in an array.

[ Indexing also helps in inserting operations when you need to insert data at a specific location. No matter how big or small the 
table is, you can update and retrieve data within seconds. ]
```

### Examples
```
- In schools, the teacher assigns a unique roll number to each student. Later, the teacher uses that roll number to retrieve 
information about that student.

- A library has an infinite number of books. The librarian assigns a unique number to each book. This unique number helps in 
identifying the position of the books on the bookshelf.
```

### Advantage
```
- Hashing is usefull for searching. We have two non-search procedure -

     * Linear Search O(n)
     * Binary Search O(logn)
     
  But Hashing Search O(1)

- A good hash function is easy to compute.

- A good hash function avoids collision when two elements or items get assigned to the same hash value.

- Hashing uses this unique index to perform insert, update, and search operations.

- Efficiently finding and storing data in an array.
```

### Hashing in Works?
```
- Hashing in data structure uses hash tables to store the key-value pairs.

- The key acts as an input to the hashing function.

- Hashing function then generates a unique index number for each value stored.

- The index number keeps the value that corresponds to that key. 

- The hash function returns a small integer value as an output.
```

### Collision Resolution
```
- Hashing in data structure falls into a collision if two keys are assigned the same index number in the hash table.

- The collision creates a problem because each index in a hash table is supposed to store only one value.

A good hash function may not prevent the collisions completely however it can reduce the number of collisions. Different 
methods to find a good hash function :

1. Division Method : h(k) = k mod m [ k is a key and m is the size of the hash table ]

2. Multiplication Method

3. Universal Hashing

Hashing in data structure uses several collision resolution techniques :

  1. Open Hashing (Closed Addressing)
      (i) Chaining Method
      
  2. Closed Hashing (Open Addressing)
     (i) Linear Probing
     
     (ii) Quadratic Probing
     
     (iii) Double Hashing technique
```
### Chaining Method
```
Example : Use Division Method && Open Hashing to 
```

### Linear Probing
```
Hashing in data structure results in an array index that is already occupied to store a value. In such a case, hashing 
performs a search operation and probes linearly for the next empty cell.
```

### Quadratic Probing
```
```

### Double Hashing technique
```
The double hashing technique uses two hash functions. The second hash function comes into use when the first function causes 
a collision. It provides an offset index to store the value.

The formula for the double hashing technique : (firstHash(key) + i * secondHash(key)) % sizeOfTable
[ Where i is the offset value. This offset value keeps incremented until it finds an empty slot. ]
```
