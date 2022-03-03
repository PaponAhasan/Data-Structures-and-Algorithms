### Standard queue (Simple)

```
Standard queue, a character is inserted at the back and deleted in the front.

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

### Queues support the following fundamental functions

```c++
Enqueue

void enqueue(int queue[], int element, int& rear, int arraySize) {
    if(rear == arraySize)            // Queue is full
            printf(“OverFlow\n”);
    else{
         queue[rear] = element;    // Add the element to the back
         rear++;
    }
}
```

```c++
Dequeue

void dequeue(int queue[], int& front, int rear) {
    if(front == rear)            // Queue is empty
        printf(“UnderFlow\n”);
    else {
        queue[front] = 0;        // Delete the front element
        front++;
    }
}
```
```c++
Front

int Front(int queue[], int front) {
    return queue[front];
}
```
```c++
Size

int size(int front, int rear) {
    return (rear - front);
}
```
```c++
IsEmpty

bool isEmpty(int front, int rear) {
    return (front == rear);
}
```
### Working of Queue

![image](https://user-images.githubusercontent.com/59710234/154790836-7a30a278-a061-42a9-a8e7-69b7044eb622.png)

```
Queue operations work as follows:

* two pointers FRONT and REAR
* FRONT track the first element of the queue
* REAR track the last element of the queue
* initially, set value of FRONT and REAR to -1

Enqueue Operation

* check if the queue is full
* for the first element, set the value of FRONT to 0
* increase the REAR index by 1
* add the new element in the position pointed to by REAR

Dequeue Operation

* check if the queue is empty
* return the value pointed by FRONT
* increase the FRONT index by 1
* for the last element, reset the values of FRONT and REAR to -1

```
![image](https://user-images.githubusercontent.com/59710234/154790910-c835d3b4-af3c-4da1-b812-369818b5eb16.png)

### Full Code

https://ideone.com/4a1x7z

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
