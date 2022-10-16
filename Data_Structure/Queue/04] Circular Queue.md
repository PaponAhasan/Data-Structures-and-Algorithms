### Circular queues

```
Standard queue, when an element is deleted, the vacant space is not reutilized (খালি জায়গা পুনঃব্যবহার করা হয় না). But in a circular 
queue, vacant spaces are reutilized.The last element is connected to the first element.
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
```
enQueue(value) :
  This function is used to insert an element into the circular queue. In a circular queue, the new element is always inserted at Rear position.
  1. Check whether queue is Full – 
         Check ((rear == SIZE-1 && front == 0) || (rear == front-1))
  2. If it is full then display Queue is full. 
        If queue is not full then, check if (rear == SIZE – 1 && front != 0)
        if it is true then set rear=0 and insert element.
     
deQueue() :
   This function is used to delete an element from the circular queue. In a circular queue, the element is always deleted from front position.
   1. Check whether queue is Empty means check (front==-1).
   2. If it is empty then display Queue is empty. If queue is not empty then step 3
   3. Check if (front==rear) if it is true then set front=rear= -1 else check if (front==size-1), 
         if it is true then set front=0 and return the element.
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

https://ideone.com/f2VUZR
