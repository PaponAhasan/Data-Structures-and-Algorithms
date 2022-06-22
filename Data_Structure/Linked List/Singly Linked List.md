### Singly Linked List

![image](https://user-images.githubusercontent.com/59710234/174945064-a7190779-b54a-4300-a85c-5eff6be7dbb7.png)

```
Which every node contains some data and a pointer to the next node of the same data type. The node contains a pointer to the next 
node means that the node stores the address of the next node in the sequence. A single linked list allows traversal of data only 
in one way.
```
```
Traversal - access each element of the linked list
Insertion - adds a new element to the linked list
Deletion - removes the existing elements
Search - find a node in the linked list
Sort - sort the nodes of the linked list
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
        Node *p;
        p = head;
        while(p != NULL){
           p = p->next;
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
bool searchNode(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
    if (current->data == key) return true;
      current = current->next;
  }
  return false;
}
```
	
</details>	


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

  Similar steps should be taken if the node is being inserted at the (beginning) of the list. While inserting it at the (end),
  the second last node of the list should point to the new node and the new node will point to NULL.
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
  The new node is always added before the head of the given Linked List. And newly added node becomes the new head of the 
  Linked List. For example, if the given Linked List is 10->15->20->25 and we add an item 5 at the front, then the Linked 
  List becomes 5->10->15->20->25.
  ```
	
  ```c++

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
 Time complexity of insertAfter() is O(1) 
 ```
	
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
	
<details> <summary> Code </summary>
	
```c++

```
	
</details>
	
Full Code : https://ideone.com/9ZuJ6x

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
```
	
### Sorting
	
```c++

```
	
Stack using Linked List
