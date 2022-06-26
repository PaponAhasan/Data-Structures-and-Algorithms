```c++
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void SortedInsert(struct Node** head, int x){
    
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

int Hash(int key){
    return key%10;
}

void Insert(struct Node *HT[],int key){
    int hash_item = Hash(key);
    SortedInsert(&HT[hash_item],key);
}

void printList(struct Node *node){
	while (node != NULL)
	{
	    printf("%d ",node->data);
		node = node->next;
	}
}

int main(){
    // struct Node* head = NULL, *item;
    // SortedInsert(&head,10);
    // SortedInsert(&head,12);
    // SortedInsert(&head,67);
    // SortedInsert(&head,7);
    // SortedInsert(&head,68);
    
    // item = Search(head,23);
    
    // if(item!=NULL) printf("%d ",item->data);
    // printList(head);
    
    struct Node *HT[10],*temp;
    
    for(int i=0;i<10;i++){
        HT[i] = NULL;
    }
    
    Insert(HT,10);
    Insert(HT,12);
    Insert(HT,67);
    Insert(HT,7);
    Insert(HT,68);
    
    //printList(HT[7]);
    
    int search_item = 67;
    temp = Search(HT[Hash(search_item)],search_item);
    if(temp!=NULL) printf("Found : %d",temp->data);
    
}
```
