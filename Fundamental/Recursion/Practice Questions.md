Problem 01:

```c++
int fun1(int x, int y)
{
    if (x == 0)
        return y;
    else
        return fun1(x - 1, x + y);
}
```
```
 if x is 5 and y is 2
 x = 5, y = 2
 x = 4, y = 5 + 2 = 7
 x = 3, y =  7 + 4 = 11
 x = 2, y = 3 + 11 = 14
 x = 1, y = 2 + 14 = 16
 x = 0, y = 1 + 16 = 17
 return 17
 
 x(x+1)/2 + y
```
Problem 02:
```c++
int minIndex(int arr[], int s, int e)
{
	int sml = INT32_MAX;
	int mindex;
	for (int i = s; i < e; i++) {
	   if (sml > arr[i]) {
		sml = arr[i];
		mindex = i;
	   }
	}
	return mindex;
}

void fun2(int arr[], int start_index, int end_index)
{
	if (start_index >= end_index)
		return;
	int min_index;
	int temp;

	// minIndex() returns index of minimum value in
	// array arr[start_index...end_index]
	min_index = minIndex(arr, start_index, end_index);

	// swap the element at start_index and min_index
	swap(arr[start_index], arr[min_index]);

	fun2(arr, start_index + 1, end_index);
}

implementation of Selection Sort.
```
