```
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.The array is 
virtuallysplit into a sorted and an unsorted part.Values from the unsorted part are picked and placed at the correct position 
in the sorted part.Insertion sort is efficient for small data values.
```
<img src="https://user-images.githubusercontent.com/59710234/171119362-3f4e7e6e-9ce5-4489-bc6f-4d5869fc8c87.png" width="500" height="300" />

[Insertion Sort Implementation](https://youtu.be/OGzPmgsI-pQ)

# Implementation Insertion Sort

```
Initial array
```
<img src="https://user-images.githubusercontent.com/59710234/171121587-4cbe9648-6c98-49f2-a775-d92d1fb6ef3a.png" width="500" height="200" />

```
1.
```

<img src="https://user-images.githubusercontent.com/59710234/171119573-6a365939-71a6-4032-be25-fcdcaf028c21.png" width="500" height="300" />

```
2.
```

<img src="https://user-images.githubusercontent.com/59710234/171121608-b110a141-bb54-46a1-837b-c0dff9dfc909.png" width="500" height="300" />

```
3.
```

<img src="https://user-images.githubusercontent.com/59710234/171121630-1f80eaa3-6193-4d7f-8a7f-e3a956a02672.png" width="500" height="300" />

```
4.
```

<img src="https://user-images.githubusercontent.com/59710234/171121647-8223610b-433d-475d-ab30-7d1733bb9872.png" width="500" height="300" />

# Insertion Sort in C/C++
```c++
void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
```
# Time complexity analysis
```
- Insertion sort takes maximum time(Order of n*n) to sort if elements are sorted in reverse order.
- Insertion sort takes minimum time(Order of n) to sort if elements are already sorted.
- Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, only few 
  elements are misplaced.
- We can use binary search to reduce the number of comparisons in normal insertion sort. Binary Insertion Sort uses binary search 
  to find the proper location to insert the selected item at each iteration. Normal insertion, sorting takes O(i) (at ith iteration) in worst case.
  We can reduce it to O(logi) by using binary search.
```
[Binary Insertion Sort](https://www.geeksforgeeks.org/binary-insertion-sort/)
[Insertion Sort for Linked List](https://www.geeksforgeeks.org/insertion-sort-for-singly-linked-list/)
[Insertion Sort Practice Problem](https://practice.geeksforgeeks.org/problems/insertion-sort/1/)

[Coding practice for sorting](https://practice.geeksforgeeks.org/explore?page=3&category[]=Sorting&sortBy=submissions)
