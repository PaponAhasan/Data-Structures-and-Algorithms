```c
C

#include <stdio.h>
#include <stdlib.h>

struct LinkedList{
    int data;
    struct LinkedList *next;
 };
 
typedef struct LinkedList *node;

void printList(node n){
    while (n != NULL) {
        printf("%d ",n->data);
        n = n->next;
    }
}

node createNode(){
    node temp; 
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->next = NULL;
    return temp;
}

node addNode(node head, int value){
    node temp,p;
    temp = createNode();
    temp->data = value;
    if(head == NULL){
        head = temp;
    }
    else{
        p  = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;//Point the previous last node to the new node created.
    }
    return head;
}
  
int main(){
    node head = NULL;
    head = addNode(head, 10);
    addNode(head, 20);
    printList(head);
}
```
```c++
C++

#include <iostream>
using namespace std;

class LinkedList{
public:
    int data;
    LinkedList *next;
};

void printList(LinkedList* n){
    while (n != NULL) {
        printf("%d ",n->data);
        n = n->next;
    }
}

LinkedList* createNode(){
    LinkedList* temp; 
    temp = new LinkedList();
    temp->next = NULL;
    return temp;
}

void addNode(LinkedList** head, int value){
    LinkedList *temp = createNode();
    temp->data = value;
    
    if(*head == NULL){
        *head = temp;
    }
    else{
        LinkedList *p  = *head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;//Point the previous last node to the new node created.
    }
}
  
int main(){
    LinkedList* head = NULL;
    addNode(&head, 10);
    addNode(&head, 20);
    printList(head);
}
```
```
    struct LinkedList *head, *newnode;
    newnode = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    scanf("%d",&newnode->data);
```
- [Practice Problem 01](https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1)
