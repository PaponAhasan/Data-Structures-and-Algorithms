```
An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type 
together.

- This makes it easier to calculate the position of each element.

- Array has a fixed size meaning once the size is given to it, it cannot be changed.
   i.e. you can’t shrink it neither can you expand it. 
- 
```
![image](https://user-images.githubusercontent.com/59710234/173143558-d222e582-8155-450a-9ff3-8f145718b8d2.png)

```
Advantages :

1. Arrays allow random access to elements. This makes accessing elements by position faster.

2. Arrays have better cache locality that makes a pretty big difference in performance.

3. Arrays represent multiple data items of the same type using a single name.

4. Traversal through the array becomes easy using a single loop.
```
```
Disadvantages :

1. You can’t change the size i.e. once you have declared the array you can’t change its size because of static memory allocation.

2. Here Insertion(s) and deletion(s) are difficult as the elements are stored in consecutive memory locations and the shifting 
   operation is costly too.
```
### Applications on Array / When we use array
```
1. Array stores data elements of the same data type.

2. Arrays are used when the size of the data set is known.

3. Used in solving matrices problem.

4. Applied as lookup table in computer.

5. Databases record are also implemented by array.

6. Helps in implementing sorting algorithm.

7. Different variable of same type can be saved under one name.

8. Arrays can be used for CPU scheduling.

9. Used to Implement other data structures like Stacks, Queues, Heaps, Hash tables, etc.
```
### What is vector 
```
A vector in C++ is a class in STL that represents an array.

1. We do not need pass size as an extra parameter when we declare a vector i.e, Vectors support dynamic sizes. We can also resize 
   a vector.
```
