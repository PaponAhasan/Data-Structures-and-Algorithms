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
The complexity of enqueue and dequeue operations in a queue using an array is O(1). If you use pop(N) in python code, then the complexity might be O(n) depending on the position of the item to be popped.
```
### Queue variations
```
* Simple Queue
* Double-ended queue
* Circular queue
* Priority Queue
```
### Double-ended queue (Deque)
```
A double-ended queue, characters can be inserted and deleted from both the front and back of the queue. Thus, it does not follow FIFO rule (First In First Out).
```
![image](https://user-images.githubusercontent.com/59710234/154791143-282676d0-f29f-4a38-8c15-9cf9e9f301f5.png)
```c++
Insert at back

void insert_at_back(int queue[], int element, int &rear, int array_size){
    if(rear == array_size)
        printf("Overflow\n");
    else{
        queue[rear] = element;
        rear = rear + 1;
    }
}
```
```c++
Delete from back

void delete_from_back(int queue[], int &rear, int front){
    if(front == rear)
        printf("Underflow\n");
    else{
        rear = rear - 1;
        queue[rear] = 0;
    }
}
```
```c++
Insert at front

void insert_at_front(int queue[], int &rear, int &front, int element, int array_size){
    if(rear == array_size)
        printf("Overflow\n");
    else{
        for(int i=rear; i>front; i--)
            queue[i] = queue[i-1]; // switch element
            
            /*
            size = 4
            Before Queue :
            0->2 | 1->4 | 2->6 | 3->7
            
            After Queue :
            1->2 | 2->4 | 3->6 | 4->7
            
            0->new_element
            */
            
        queue[front] = element;
        rear = rear+1;
    }
}
```
```c++
Delete from front

void delete_front_front(int queue[], int &front, int &rear){
    if(front == rear)
        printf("Underflow\n");
    else{
        queue[front] = 0;
        front = front + 1;
    }
}
```
```c++
Get front element

int get_front(int queue[], int front){
    return queue[front];
}
```
```c++
Get rear element

int get_rear(int queue[], int rear){
    return queue[rear-1];
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
### Circular queues

```
Standard queue, when an element is deleted, the vacant space is not reutilized (খালি জায়গা পুনঃব্যবহার করা হয় না). But in a circular queue, vacant spaces are reutilized.The last element is connected to the first element.
```
![image](https://user-images.githubusercontent.com/59710234/154791296-008145d1-0185-4d24-bddb-3d3f52b69e05.png)

```
when you reach the end of an array and you need to insert another element, you must insert that element at the beginning (given that the first element has been deleted and the space is vacant).

front = 0, rear = 4;
0->2 | 1->4 | 2->6 | 3->7

delete front element: 0 -> null | 1->4 | 2->6 | 3->7
front = 1, rear = 4;
delete front element: 0 -> null | 1-> null | 2->6 | 3->7
front = 2, rear = 4;

insert element rear: 0 -> 9 | 1-> null | 2->6 | 3->7 //insert that element at the beginning
front = 2, rear = 0;
```
### How Circular Queue Works
```c++
Circular Queue works by the process of circular increment i.e. when we try to increment the pointer and we reach the end of the queue, we start from the 
beginning of the queue. Here, the circular increment is performed by modulo division with the queue size.

Circular Queue Operations Enqueue & Dequeue Operation same as normal queue. But full queue has a new additional case:
if REAR + 1 == 5 (overflow!), REAR = (REAR + 1)%5 = 0 (start of queue)
```
![image](https://user-images.githubusercontent.com/59710234/154790959-07b456f6-bb04-4545-a1b9-1d5379d79df0.png)

```c++
Enqueue

void enqueue(int queue[], int element, int& rear, int arraySize, int& count) {
    if(count == arraySize)            // Queue is full
            printf(“OverFlow\n”);
    else{
        queue[rear] = element;
        rear = (rear + 1)%arraySize;
        count = count + 1;
    }
}
```
```c++
Dequeue

void dequeue(int queue[], int& front, int rear, int& count) {
    if(count == 0)            // Queue is empty
        printf(“UnderFlow\n”);
    else {
        queue[front] = 0;        // Delete the front element
        front = (front + 1)%arraySize;
        count = count - 1;
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

int size(int count) {
    return count;
}
```
```c++
IsEmpty

bool isEmpty(int count) {
    return (count == 0);
}
```
### Priority Queue

An ascending order priority queue gives the highest priority to the lower number in that queue. A priority queue is an abstract data-type similar to a regular queue or stack data structure in which each element additionally has a "priority" associated with it. In a priority queue, an element with high priority is served before an element with low priority.

![image](https://user-images.githubusercontent.com/59710234/154791249-40368350-16b2-4ddb-b584-87364c9a3bac.png)

Reference : https://www.programiz.com/dsa/queue
