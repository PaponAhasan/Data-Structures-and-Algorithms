### Basic Queue

```
Queues are data structures that follow the First In First Out (FIFO) i.e. the first element that is added to the queue is the first one to be removed.

Elements are always added to the back and removed from the front. Think of it as a line of people waiting for a bus. The person who is at the beginning of the line is 
the first one to enter the bus.

* queue[] : Array in which queue is simulated
* arraySize : Maximum number of elements that can be stored in a queue
* front : Points at the index where the next deletion will be performed
* rear : Points at the index where the next insertion will be performed

* Enqueue: Add an element to the end of the queue
* Dequeue: Remove an element from the front of the queue
* IsEmpty: Check if the queue is empty
* IsFull: Check if the queue is full
* Peek: Get the value of the front of the queue without removing it

```
![image](https://user-images.githubusercontent.com/59710234/154791157-664cd4f2-cc5c-4f85-8c75-ee5291dd2e58.png)

### Queue variations
```
* Simple Queue
* Double-ended queue
* Circular queue
* Priority Queue
```

### Limitation
```
A normal queue, after a bit of insertion and deletion, there will be non-usable empty space. This reduces the actual size of the queue. Here, indexes 0 and 1 non-usable empty space.
The circular queue solves the major limitation of the normal queue.
```

![image](https://user-images.githubusercontent.com/59710234/154794725-c0b26263-fd2a-4394-b043-45ce91c50cff.png)

### Complexity Analysis
```
The complexity of enqueue and dequeue operations in a queue using an array is O(1). If you use pop(N) in python code, then the 
complexity might be O(n) depending on the position of the item to be popped.
```
