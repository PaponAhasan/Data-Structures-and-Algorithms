[ N.T : Before starting this tutorial, if you have less knowledge about your pointer, you can find out from the reference below :
 https://www.geeksforgeeks.org/passing-reference-to-a-pointer-in-c/ 
]

### What is Linked List?

![image](https://user-images.githubusercontent.com/59710234/155120811-c06d17cc-7271-4cae-825e-d5b715a54496.png)

```
Linked lists are one of the most fundamental data structures. It is a chain of nodes with each node having data and a pointer to
the next node. The head pointer points to the first node and the last element of the list points to NULL.
Lists can be empty too. In that case, the head points to NULL.

A linked list is a way to store a collection of elements. Each element in a linked list is stored in the form of a node.
```
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

### Singly Linked List

![image](https://user-images.githubusercontent.com/59710234/155121977-ccbbfbd0-2e9f-472e-9fd2-18d24c412ddb.png)

```
Which every node contains some data and a pointer to the next node of the same data type. The node contains a pointer to the next node means that the node stores the address of the next node in the sequence. A single linked list allows traversal of data only in one way.
```
### Declaring a Linked list
```c
C
  // A linked list node
  struct Node {
      int data;
      struct Node* next;
  };
```
```c++
C++
  class Node {
  public:
    int data;
    Node* next;
  };
```
### Creating a Node
```c
C
  int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct
  }
 ``` 
 ```c++
 C++
  #include <cstddef>

  using namespace std;

  class Node {
      public:
          int data;
      Node * next;
  };

  int main() {
      Node * head = NULL;
      Node * second = NULL;
      Node * third = NULL;

      head = new Node();
      second = new Node();
      third = new Node();
  }
```
### Traversing/Display the List

  ```c
    node p;
    p = head;
    while(p != NULL){
        p = p->next;
    }
  ```
  ```c++
    void printList(Node* n)
    {
        while (n != NULL) {
            cout << n->data << " ";
            n = n->next;
        }
    }
```
Code : </br>
  https://ideone.com/E1zDQQ </br>
  https://ideone.com/zd8nKm </br>
  
### Search Operation
```c
pseudocode

//Checks whether the value x is present in linked list
public boolean search(int x)
{
    Node current = first;    //Initialize current
    while (current != null)
    {
        if (current.data == x)
            return true;    //data found
        current = current.next;
    }
    return false;    //data not found
}
```  
```c++
// Search a node
bool searchNode(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
    if (current->data == key) return true;
      current = current->next;
  }
  return false;
}
```

### Insertion Operation

  ```
  1.
  
  Adding a new node in linked list, First, create a node using the same structure and find the location where it has to be inserted.
  ```

  ![image](https://user-images.githubusercontent.com/59710234/155150453-7b830458-1f5d-40d5-a3fd-eb55336ecbf4.png)

  ```
  2.
  
  Inserting a node B (NewNode), between A (LeftNode) and C (RightNode). 
  ```

  ![image](https://user-images.githubusercontent.com/59710234/155150469-c118b7da-f20f-4f94-b1f0-41d5a90a03d7.png)

  ```
  3.
  
  Then point B.next to C -> NewNode.next −> RightNode;
  ```

  ![image](https://user-images.githubusercontent.com/59710234/155150486-3927f6ce-01e8-4555-9fe7-2b50874ac66c.png)

  ```
  4.
  
  Now, the next node at the left should point to the new node -> LeftNode.next −> NewNode;
  ```

  ![image](https://user-images.githubusercontent.com/59710234/155150512-cc31db43-b327-4831-8f44-5b817424b746.png)

  ```
  This will put the new node in the middle of the two.

  Similar steps should be taken if the node is being inserted at the (beginning) of the list. While inserting it at the (end), the second 
  last node of the list should point to the new node and the new node will point to NULL.
  ```
  ```
  A node can be added in three ways :
  
  1) At the front of the linked list 
  2) After a given node. 
  3) At the end of the linked list.
  ```
  ```
  * Add a node at the front
  ```
  ![image](https://user-images.githubusercontent.com/59710234/155290089-ae00ec08-0972-4f33-addd-d8c7d9b7ea92.png)
  ```
  The new node is always added before the head of the given Linked List. And newly added node becomes the new head of the Linked List. For
  example, if the given Linked List is 10->15->20->25 and we add an item 5 at the front, then the Linked List becomes 5->10->15->20->25.
  ```
  ```c++
  
  void push(Node** head_ref, int new_data)
  {
    /* 1. allocate node */
    Node* new_node = new Node();

    /* 2. put in the data */
    new_node->data = new_data;

    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);

    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
  }

  Time complexity of push() is O(1)
  ```
  ```
  * Add a node after a given node
  ```
  ![image](https://user-images.githubusercontent.com/59710234/155528153-27571720-3dfd-4abb-b3b9-15a74d83a0d8.png)
  
 ```
  Given a node prev_node, insert a new node after the given prev_node.
 ```
 ```c++
 
void insertAfter(Node* prev_node, int new_data)
{

	// 1. Check if the given prev_node is NULL
	if (prev_node == NULL)
	{
		cout << "The given previous node cannot be NULL";
		return;
	}

	// 2. Allocate new node
	Node* new_node = new Node();

	// 3. Put in the data
	new_node->data = new_data;

	// 4. Make next of new node as
	// next of prev_node
	new_node->next = prev_node->next;

	// 5. move the next of prev_node
	// as new_node
	prev_node->next = new_node;
}
 Time complexity of insertAfter() is O(1) 
 ```
 ```
 * Add a node at the end
 ```
 ![image](https://user-images.githubusercontent.com/59710234/155528975-15e49d5e-037e-41f5-9bdc-ccaad30e2f88.png)
 ```
 A Linked List is typically represented by the head of it, we have to traverse the list till the end and then change the next to last node to 
 a new node.
 For example if the given Linked List is 5->10->15->20->25 and we add an item 30 at the end, then the Linked List becomes 5->10->15->20->25->30.
 ```
 ```c++
void append(Node** head_ref, int new_data)
{

	// 1. allocate node
	Node* new_node = new Node();

	// Used in step 5
	Node *last = *head_ref;

	// 2. Put in the data
	new_node->data = new_data;

	// 3. This new node is going to be
	// the last node, so make next of
	// it as NULL
	new_node->next = NULL;

	// 4. If the Linked List is empty,
	// then make the new node as head
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	// 5. Else traverse till the last node
	while (last->next != NULL)
	{
		last = last->next;
	}

	// 6. Change the next of last node
	last->next = new_node;
	return;
}
Time complexity of append is O(n)
 ```
Full Code : https://ideone.com/yWdm2t


### Deletion Operation

```
1.

First, locate the target node to be removed, by using searching algorithms.
```

![image](https://user-images.githubusercontent.com/59710234/155581947-61789bfa-7221-444d-af3a-ddd111d047d6.png)

```
2.

The left (previous) node of the 'target node' now should point to the next node(right) of the
target node. Now, using the following code. 

LeftNode.next −> TargetNode.next;

This will remove the link that was pointing to the target node.
```
![image](https://user-images.githubusercontent.com/59710234/155584435-3d4758d9-dc50-4f60-b607-803e9fdd7912.png)

```
3.

Now, we will remove what the target node is pointing at the next node(right). Now, using the following code.

TargetNode.next −> NULL;
```
![image](https://user-images.githubusercontent.com/59710234/155585073-df363537-0b64-43d6-a607-d3464c627f8b.png)

```
4.

After deleted node
```
![image](https://user-images.githubusercontent.com/59710234/155585186-ae1efc62-da58-4e53-9bfd-025c2c4cd25f.png)

```c++
void deleteNode(Node** head_ref, int key)
{
     
    // Store head node
    Node* temp = *head_ref;
    Node* prev = NULL;
     
    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }
 
    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
      else
    {
	while (temp != NULL && temp->data != key){
	    prev = temp;
	    temp = temp->next;
	}

	// If key was not present in linked list
	if (temp == NULL)
	   return;

	// Unlink the node from linked list
	prev->next = temp->next;

	// Free memory
	delete temp;
    }
}
```
Full Code : https://ideone.com/FkuTk7

```
 * Delete a Linked List node at a given position
```
```
Given a singly linked list and a position, delete a linked list node at the given position.

Example:  

Input: position = 1, Linked List = 8->2->3->1->7
Output: Linked List =  8->3->1->7
```
```c++
void deleteNode(Node** head_ref, int position)
{
 
    // If linked list is empty
    if (*head_ref == NULL)
        return;
 
    // Store head node
    Node* temp = *head_ref;
 
    // If head needs to be removed
    if (position == 0) {
 
        // Change head
        *head_ref = temp->next;
 
        // Free old head
        free(temp);
        return;
    }
 
    // Find previous node of the node to be deleted
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;       // 8 2 3 `1 7 8
 
    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
        return;
 
    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    Node* next = temp->next->next; // 8 2 3 1 7 `8
 
    // Unlink the node from linked list
    free(temp->next); // Free memory // 8 2 3 '1 `8
 
    // Unlink the deleted node from list
    temp->next = next; // // 8 2 3 '1->`8
}
```
Full Code: https://ideone.com/FdPWJj

```
 * Delete a Linked List node at a given Node
```
```c++
void deleteNode(Node *head, 
                Node *n) 
{ 
    // When node to be deleted is 
    // head node 
    if(head == n) 
    { 
        if(head->next == NULL) 
        { 
            cout << "There is only one node." <<
                    " The list can't be made empty "; 
            return; 
        } 
  
        // Copy the data of next node 
        // to head 
        head->data = head->next->data; 
  
        // Store address of next node 
        n = head->next; 
  
        // Remove the link of next node 
        head->next = head->next->next; 
  
        // Free memory 
        free(n); 
  
        return; 
    } 
  
    // When not first node, follow 
    // the normal deletion process 
  
    // Find the previous node 
    Node *prev = head; 
    while(prev->next != NULL && 
          prev->next != n) 
        prev = prev->next; 
  
    // Check if node really exists in 
    // Linked List 
    if(prev->next == NULL) 
    { 
        cout << 
        "Given node is not present in Linked List"; 
        return; 
    } 
  
    // Remove node from Linked List 
    prev->next = prev->next->next; 
  
    // Free memory 
    free(n); 
  
    return; 
} 
```

Full Code : https://ideone.com/9ZuJ6x

### Reverse Operation

```
The head node of the linked list will be the last node of the linked list and the last one will be the head node.

Example : 
 Before Reverse: 9 -> 32 -> 65 -> 10 -> 85 -> NULL
 After Reverse: 85 -> 10 -> 65 -> 32 -> 9 -> NULL
 
 To reverse the given linked list we will use three extra pointers that will be in the process. The pointers will be previous, after, current.
 We will initialize previous and after to 'NULL' and current to 'head' of the linked list.
 
 After this, we will iterate until we reach the NULL of the initial - 
 after = current ->
 next current ->
 next = previous
 previous = current
 current = after
 
 There can be two ways to create the program(Reverse Operation), one is iterative and the other one is recursive.
```

https://media.geeksforgeeks.org/wp-content/cdn-uploads/RGIF2.gif

```c++
void reverse() {
     // Initialize current, previous and
     // next pointers
     Node* current = head;
     Node *prev = NULL, *next = NULL;
  
     while (current != NULL) {
        // Store next
        next = current->next;
  
        // Reverse current node's pointer
        current->next = prev;
  
         // Move pointers one position ahead.
         prev = current;
         current = next;
     }
     head = prev;
  }
 ```

### Sort Linked List

```c++
void sortLinkedList(struct Node** head_ref) {
  struct Node *current = *head_ref, *index = NULL;
  int temp;

   if (head_ref == NULL) {
      return;
   }
   else {
      while (current != NULL) {
         // index points to the node next to current
         index = current->next;
	  while (index != NULL) {
	     if (current->data > index->data) {
	        temp = current->data;
		current->data = index->data;
		index->data = temp;
	     }
	     index = index->next;
				
	  }

	current = current->next;
     }
   }
}

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

https://www.geeksforgeeks.org/data-structures/linked-list/?ref=ghm

https://www.geeksforgeeks.org/linked-list-set-1-introduction/?ref=lbp
