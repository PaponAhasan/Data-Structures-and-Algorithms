### Double-Ended Queue (Deque)
```
A double-ended queue, characters can be inserted and deleted from both the front and back of the queue. Thus, it does not 
follow FIFO rule (First In First Out).
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

### Deque in C++ STL

```c++
#include <deque>
#include <iostream>

using namespace std;

void showdq(deque<int> g)
{
	deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{
	deque<int> gquiz;
	gquiz.push_back(10);
	gquiz.push_front(20);
	gquiz.push_back(30);
	gquiz.push_front(15);
    
	cout << "The deque gquiz is : ";
	showdq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.max_size() : " << gquiz.max_size();

	cout << "\ngquiz.at(2) : " << gquiz.at(2);
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop_front() : ";
	gquiz.pop_front();
	showdq(gquiz);

	cout << "\ngquiz.pop_back() : ";
	gquiz.pop_back();
	showdq(gquiz);

	return 0;
}

Output
------
The deque gquiz is :     15    20    10    30

gquiz.size() : 4
gquiz.max_size() : 4611686018427387903
gquiz.at(2) : 10
gquiz.front() : 15
gquiz.back() : 30
gquiz.pop_front() :     20    10    30

gquiz.pop_back() :     20    10
```
