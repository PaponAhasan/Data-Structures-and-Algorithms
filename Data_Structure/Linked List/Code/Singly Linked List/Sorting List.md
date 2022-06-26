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
### Insert Element Sorting Order
```c++
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void SortedInsert(struct Node** head,int x){
    
    struct Node *t,*q = NULL,*p = *head;
    t = (struct Node*)malloc(sizeof(struct Node));
    t->next = NULL;
    t->data = x;
    
    if(*head==NULL){
        *head = t;
    }
    else{
        while(p!=NULL && p->data < x){
            q = p;
            p = p->next;
        }
        
        if(p==NULL){
            q->next = t;
        }
        else if(q!=NULL){
            t->next = q->next;
            q->next = t;
        }
        else {
            t->next = *head;
            *head = t;
        }
    }
    
}

void printList(struct Node *node)
{
	while (node != NULL)
	{
	    printf("%d ",node->data);
		node = node->next;
	}
}

int main(){
    struct Node* head = NULL;
    SortedInsert(&head,10);
    SortedInsert(&head,12);
    SortedInsert(&head,67);
    SortedInsert(&head,7);
    SortedInsert(&head,68);
    printList(head);
}
```
