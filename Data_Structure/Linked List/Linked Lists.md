N.T : Before starting this tutorial, if you have less knowledge about your pointer, you can find out from the reference below :
[Fundamental Pointers](https://github.com/PaponAhasan/Data-Structures-and-Algorithms/blob/69c48649a4a7356c686925ee1751fedb2028df21/Fundamental/Pointers/Pointers.md)


### What is Linked List?

![image](https://user-images.githubusercontent.com/59710234/155120811-c06d17cc-7271-4cae-825e-d5b715a54496.png)

```
Linked lists are one of the most fundamental data structures. It is a chain of nodes with each node having data and a pointer to
the next node. The head pointer points to the first node and the last element of the list points to NULL.
Lists can be empty too. In that case, the head points to NULL.

A linked list is a way to store a collection of elements. Each element in a linked list is stored in the form of a node.
```

### Need of linked list 
```
In Arrays store elements in contiguous memory locations. And The size of the arrays is fixed. If we need new element store,we cannot 
be resized due to the risk of other data being overwritten or If we not use full size of array our memory wastage.

In this case, we need linked list. Linked list is collect similar data. But linked list aren’t in consecutive memory locations.
Linked list consists of nodes that are connected with one another using pointers. size is not fixed.
```
[Why Need Linked list](https://www.youtube.com/watch?v=dmb1i4oN5oE&list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU&index=7)

### Node

![image](https://user-images.githubusercontent.com/59710234/155120216-bdeecd3f-ba61-4064-bec9-012bf8c6511e.png)

```
A node is a collection of two sub-elements or parts. A data part that stores the element and a next part that stores the link to 
the next node.
```
### Basic Operations
```
  Declaring - 
  
  Creating - 
  
  Traversing/Display − Access each element of the linked list / 
                        Displays the complete list.
  
  Insertion − Adds an element at the beginning of the list.

  Deletion − Deletes an element at the beginning of the list.
  
  Delete − Deletes an element using the given key.

  Search − Searches an element using the given key.
  
  Reverse Operation - Reverse an element make the last node to be pointed by the head node.
  
  Sort - sort the nodes of the linked list
```
### Types of Linked List
```
  Simple Linked List − Item navigation is forward only.

  Doubly Linked List − Items can be navigated forward and backward.

  Circular Linked List − Last item contains link of the first element as next and the first element has a link to the last 
                         element as previous.
  Doubly Circular linked list - 
  
  Header Linked List - 
```

### Array vs Linked List
```
  Like arrays, Linked List is a linear data structure. Linked list elements are not stored at a contiguous location; the elements are linked 
  using pointers.

  Array Advantages :
  1. Arrays store elements in contiguous memory locations, resulting in easily calculable addresses for the elements stored and this allows 
  faster access to an element at a specific index.
  2.  Also, better cache locality in arrays (due to contiguous memory allocation) can significantly improve performance. 

  Arrays can be used to store linear data of similar types, but arrays have the following limitations :
  1) The size of the arrays is fixed
  2) Inserting a new element in an array of elements is expensive because ,
     the room has to be created for the new elements and to create room existing elements have to be shifted 
     |1|2|5| if 4 insert 2 index ; |1|2|4|?| -> |1|2|4|5| ; we have to move all the elements after 2
     but in Linked list if we have the head node then we can traverse to any node through it and insert new node at the required position.

  Linked List have the following limitations :

  1) Random access is not allowed. We have to access elements sequentially starting from the first node(head node). So we cannot do 
     binary search with linked lists efficiently but implementation O(n) possible.
  2) Extra memory space for a pointer is required with each element of the list. Linked lists use more memory as a reference to the 
     next node is also stored along with the data.
  3) Arrays have better cache locality that can make a pretty big difference in performance.
  4) It takes a lot of time in traversing and changing the pointers.

  Major differences :
  
  Size: Stored in contiguous blocks of memory in an array. It cannot be resized due to the risk of other data being overwritten.
        However, in a linked list allows for a dynamic size so that can change size.
  Memory allocation: For arrays at compile time and at runtime for linked lists.
  Memory efficiency: Linked lists use more memory as a reference to the next node is also stored along with the data.However, 
  size flexibility in linked lists may make them use less memory overall;
  Execution time: Any element in an array can be directly accessed with its index but all the previous elements must be traversed to reach any element.
```
