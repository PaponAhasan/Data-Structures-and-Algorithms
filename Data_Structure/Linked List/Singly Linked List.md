### Singly Linked List

![image](https://user-images.githubusercontent.com/59710234/174945064-a7190779-b54a-4300-a85c-5eff6be7dbb7.png)

```
Which every node contains some data and a pointer to the next node of the same data type. The node contains a pointer to the next 
node means that the node stores the address of the next node in the sequence. A single linked list allows traversal of data only 
in one way.
```
```
Traversal: To traverse all the nodes one after another.
Insertion: To add a node at the given position.
Deletion: To removes the existing elements.
Searching: To search an element(s) by value.
Updating: To update a node.
Sorting: To arrange nodes in a linked list in a specific order.
Merging: To merge two linked lists into one.
```
### Declaring

```
In C, we can represent a node using structures. Below is an example of a linked list node with integer data. 

In C++, LinkedList can be represented as a class and a Node as a separate class. The LinkedList class contains a reference of Node 
class type.

- A data item
- An address of another node
```

<details> <summary> Code </summary>
 
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
	
</details>

### Creating

```
Let us create a simple linked list 

- Create a new struct node and allocate memory to it.
- Add its data value
- Point its next pointer to the struct node
```

<details> <summary> Code </summary>

```c
C
  int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
  }
 ``` 
 ```c++
 C++
  int main() {
      Node * head = NULL;
      Node * second = NULL;
      Node * third = NULL;

      head = new Node();
      second = new Node();
      third = new Node();
  }
```

</details>

### Traversing

```
Traverse the created list and print the data of each node. 

- We keep moving the temp node to the next one and display its contents.
- When temp is NULL, we know that we have reached the end of the linked list so we get out of the while loop.
```

<details> <summary> Code </summary>

  ```c++
    void traversList(Node *head)
    {
        Node *temp;
        temp = head;
        while(temp != NULL){
           temp = temp->next;
        }
    }
  ```
  ```c++
    void printList(Node *n)
    {
        while (n != NULL) {
            cout << n->data << " ";
            n = n->next;
        }
    }
```

</details>

Code : </br>
  https://ideone.com/E1zDQQ </br>
  https://pastebin.com/UgqVu5KN </br>
  
### Searching
```
You can search an element on a linked list using a loop using the following steps. We are finding item on a linked list.

- Make head as the current node.
- Run a loop until the current node is NULL because the last element points to NULL.
- In each iteration, check if the key of the node is equal to item. If it the key matches the item, return true otherwise 
  return false.
```

<details> <summary> Code </summary>
 
```c++
// Search a node
bool searchNode(struct Node** head_ref, int item) {
  struct Node* current = *head_ref;

  while (current != NULL) {
    if (current->data == item) return true;
      current = current->next;
  }
  return false;
}
```
	
</details>	

### Reverse Operation

```
The head node of the linked list will be the last node of the linked list and the last one will be the head node.

Example : 
 Before Reverse: 9 -> 32 -> 65 -> 10 -> 85 -> NULL
 After Reverse: 85 -> 10 -> 65 -> 32 -> 9 -> NULL
 
 To reverse the given linked list we will use three extra pointers that will be in the process. The pointers will be previous, 
 after, current. We will initialize previous and after to 'NULL' and current to 'head' of the linked list.
 
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
gbg
```
	
### Sorting Operation
	
```c++
ghdg
```

### Updation Operation

```c++
gfsdfg
```

### Insertion Operation

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
  The new node is always added before the head of the given Linked List. And newly added node becomes the new head of the 
  Linked List. For example, if the given Linked List is 10->15->20->25 and we add an item 5 at the front, then the Linked 
  List becomes 5->10->15->20->25.
  ```
  
  ```c++
  new_node->next = head
  head = new_node
  
  Time complexity of push() is O(1)
  ```
  
  ![image](https://user-images.githubusercontent.com/59710234/175191350-1366b20a-d310-44f5-84dd-a29264e3ada5.png)
  
  <details> <summary> Code </summary>
	
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
  ```
	
  </details>
  
  ```
  * Add a node after a given node
  ```
  ![image](https://user-images.githubusercontent.com/59710234/155528153-27571720-3dfd-4abb-b3b9-15a74d83a0d8.png)
  
 ```
  Given a node prev_node, insert a new node after the given prev_node.
  
  N.T : If the address of the prevNode is not given, then you can traverse to that node by finding the data value.
 ```
	
 ```c++
 newNode.next = prevNode.next
 prevNode.next = newNode
 
 Time complexity of insertAfter() is O(1) 
 ```
 
 ![image](https://user-images.githubusercontent.com/59710234/175193508-d646e863-9313-46a0-9e9f-33e5c29169ab.png)
 
   <details> <summary> Code </summary>
	
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
  ```
	
  </details>
  
 ```
 * Add a node at the end
 ```
 ![image](https://user-images.githubusercontent.com/59710234/155528975-15e49d5e-037e-41f5-9bdc-ccaad30e2f88.png)
 ```
 A Linked List is typically represented by the head of it, we have to traverse the list till the end and then change the 
 next to last node to a new node.
 
 For example if the given Linked List is 5->10->15->20->25 and we add an item 30 at the end, then the Linked List becomes
 5->10->15->20->25->30.
 ```
	
 ```c++
 Node temp = head
 // traversing the list to get the last node
 while( temp.next != NULL )
 {
    temp = temp.next
 }
 temp.next = newNode
    
 Time complexity of append is O(n)
 ```
 ![image](https://user-images.githubusercontent.com/59710234/175194176-1894267e-f5c4-49b6-9e9e-a18e824d685e.png)
 
  <details> <summary> Code </summary>
	
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
  ```
	
  </details>
  
 Full Code : https://ideone.com/yWdm2t

### Deletion Operation

```
1.

First, locate the target node to be removed, by using searching algorithms.
```

![image](https://user-images.githubusercontent.com/59710234/155581947-61789bfa-7221-444d-af3a-ddd111d047d6.png)

```
2.

The left node of the 'target node' now should point to the next node(target node) of the
target node. Now, Change the next pointer of the left node. 

LeftNode.next −> TargetNode.next;

This will remove the link that was pointing to the target node.
```
![image](https://user-images.githubusercontent.com/59710234/155584435-3d4758d9-dc50-4f60-b607-803e9fdd7912.png)

```
3.

Now, we will Free the memory what the target node is pointing at the next node(right). Now, using the following code.

TargetNode.next −> NULL;
```
![image](https://user-images.githubusercontent.com/59710234/155585073-df363537-0b64-43d6-a607-d3464c627f8b.png)

```
4.

After deleted node
```
![image](https://user-images.githubusercontent.com/59710234/155585186-ae1efc62-da58-4e53-9bfd-025c2c4cd25f.png)
	
```c++
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
	
```
	
Full Code: https://ideone.com/FdPWJj

```
 * Delete a Linked List node at a given Node
```

![image](https://user-images.githubusercontent.com/59710234/175125032-041f458c-169d-4f08-b814-7e2e4a6784ab.png)

![image](https://user-images.githubusercontent.com/59710234/175125178-aaec451f-18ab-42f2-8e79-55d6cb32feb8.png)

![image](https://user-images.githubusercontent.com/59710234/175125260-823ef600-998d-4365-999a-553124605dbf.png)
	
Full Code : https://ideone.com/9ZuJ6x
	
- [Stack using Linked List](https://www.geeksforgeeks.org/implement-a-stack-using-singly-linked-list/)
