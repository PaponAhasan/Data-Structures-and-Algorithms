
### Priority Queue

An ascending order priority queue gives the highest priority to the lower number in that queue. A priority queue is an abstract data-type similar to a regular queue or stack data structure in which each element additionally has a "priority" associated with it. In a priority queue, an element with high priority is served before an element with low priority.

![image](https://user-images.githubusercontent.com/59710234/154791249-40368350-16b2-4ddb-b584-87364c9a3bac.png)

### Priority Queue implemented

```
Arrays
Linked list
Heap data structure
Binary search tree
```
### Priority Queue implemented Heap

[Using Heap](https://github.com/PaponAhasan/Data-Structures-and-Algorithms/blob/25120f2d405ae3ae974b6e6a897a8f8fe004f9a7/Data_Structure/Heap/Priority%20Queue.md)

### Priority Queue implemented STL

```c++
#include <iostream>
#include <queue>
using namespace std;

void showpq(priority_queue<int> gq){
	priority_queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.top();
		g.pop();
	}
	cout << '\n';
}

int main(){
	priority_queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(30);
	gquiz.push(20);
	gquiz.push(5);
	gquiz.push(1);

	cout << "The priority queue gquiz is : ";
	showpq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.top() : " << gquiz.top();

	cout << "\ngquiz.pop() : ";
	gquiz.pop();
	showpq(gquiz);

	return 0;
}

```
Reference :
* [Geeksforgeeks](https://www.geeksforgeeks.org/priority-queue-set-1-introduction/)
* [Programiz](https://www.programiz.com/dsa/priority-queue)
