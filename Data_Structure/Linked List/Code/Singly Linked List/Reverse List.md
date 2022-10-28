```c++
#include <iostream>
using namespace std;

typedef struct node Node;

struct node{
    
    int data;
    Node *next;
};

Node *Create_Node(int data, Node *next){
    
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = next;
    return new_node;
}

Node *Insert_Node(Node *head, int data){
    
    Node *new_node = Create_Node(data, NULL);
    
    if(head == NULL){
        return new_node;
    }
    Node *current_node = head;
    while(current_node->next != NULL){
        
        current_node = current_node->next;
    }
    
    current_node->next = new_node;
    
    return head;
}

Node *Reverse_LinkedList(Node *head){
    
    Node *temp = NULL;
    Node *prev_data = NULL;
    Node *current_node = head;
    
    while(current_node != NULL){
        
        prev_data = current_node;
        current_node = current_node->next;
        prev_data->next = temp;
        temp = prev_data;
    }
    head = prev_data;
    return head;
}

void Print_LinkedList(Node *head){
    
    Node *current_node = head;
    while(current_node != NULL){
        printf("%d ",current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}

int main() {
	
	Node *head;
	
	head = Insert_Node(head, 10);
	head = Insert_Node(head, 20);
	head = Insert_Node(head, 30);
	
	Print_LinkedList(head);
		
	head = Reverse_LinkedList(head);
	
	Print_LinkedList(head);
	return 0;
}
```
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
- [Problem 01](https://www.interviewbit.com/problems/reverse-linked-list/)
