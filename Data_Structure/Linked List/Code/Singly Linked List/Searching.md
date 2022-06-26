```c++
struct Node *Search(struct Node *p, int key){
    while(p!=NULL){
        if(p->data == key){
            return p;
        }
        p = p->next;
    }
    return NULL;
}
```
