```
1) At the front of the linked list
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
2) After a given node
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
3) At the end of the linked list
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
