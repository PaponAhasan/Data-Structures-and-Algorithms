
### Priority Queue

An ascending order priority queue gives the highest priority to the lower number in that queue. A priority queue is an abstract data-type similar to a regular queue or stack data structure in which each element additionally has a "priority" associated with it. In a priority queue, an element with high priority is served before an element with low priority.

![image](https://user-images.githubusercontent.com/59710234/154791249-40368350-16b2-4ddb-b584-87364c9a3bac.png)

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
Reference : https://www.programiz.com/dsa/queue
