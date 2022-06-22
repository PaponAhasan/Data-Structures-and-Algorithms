### After deleted node

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
```
Delete a Linked List node at a given position
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
```
Delete a Linked List node at a given Node
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
```
Full Code
```
```c++
// C++ program to delete a given node
// in linked list under given constraints
#include <bits/stdc++.h>
using namespace std;

// Structure of a linked list
// node
class Node
{
	public:
	int data;
	Node *next;
};

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

/* Utility function to insert a
node at the beginning */
void push(Node **head_ref,
		int new_data)
{
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

/* Utility function to print a
linked list */
void printList(Node *head)
{
	while(head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

// Driver code
int main()
{
	Node *head = NULL;

	/* Create following linked list
	12->15->10->11->5->6->2->3 */
	push(&head,3);
	push(&head,2);
	push(&head,6);
	push(&head,5);
	push(&head,11);
	push(&head,10);
	push(&head,15);
	push(&head,12);

	cout << "Given Linked List: ";
	printList(head);

	/* Let us delete the node with
	value 10 */
	cout << "Deleting node " <<
			head->next->next->data << " ";
	deleteNode(head, head->next->next);

	cout << "Modified Linked List: ";
	printList(head);

	// Let us delete the first node
	cout << "Deleting first node ";
	deleteNode(head, head);

	cout << "Modified Linked List: ";
	printList(head);
	return 0;
}
// This code is contributed by rathbhupendra

```
