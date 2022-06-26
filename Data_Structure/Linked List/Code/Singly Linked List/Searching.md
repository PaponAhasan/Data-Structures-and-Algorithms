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

struct Node *Search(struct Node *p, int key){
    while(p!=NULL){
        if(p->data == key){
            return p;
        }
        p = p->next;
    }
    return NULL;
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
    struct Node* head = NULL, *Item;
    SortedInsert(&head,10);
    SortedInsert(&head,12);
    SortedInsert(&head,67);
    SortedInsert(&head,7);
    SortedInsert(&head,68);
    printList(head);
    
    Item = Search(head,10);
    if(Item!=NULL) printf("%d\n",Item->data);
    else printf("Not Found\n");
}
```
