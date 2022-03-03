### Binary/ N-ary Trees

![image](https://user-images.githubusercontent.com/59710234/156151445-a827dfe2-c83b-4197-bb2d-76cca2108573.png)

```
A Binary Tree is a tree data structure in which each node has at most two children, which are referred to as the left child and 
the right child, and the topmost node in the tree is called the root.

Arrays, Linked Lists, Stack and queues, which are linear data structures, trees are hierarchical data structures.
```
```
Where each node has the following 3 components:

1. Data element: Stores any kind of data in the node
2. Left pointer: Points to the tree on the left side of node
3. Right pointer: Points to the tree on the right side of the node

If a tree is empty, it is represented by a null pointer.
```
![image](https://user-images.githubusercontent.com/59710234/155928150-9efb502c-7532-4145-a59c-d04e81b44ece.png)

```
* Root: Top node in a tree
* Child: Nodes that are next to each other and connected downwards
* Parent: Converse notion of child
* Siblings: Nodes with the same parent
* Descendant: Node reachable by repeated proceeding from parent to child
* Ancestor: Node reachable by repeated proceeding from child to parent.
* Leaf: Node with no children
* Internal node: Node with at least one child
* External node: Node with no children
```
### Why Trees?

```
1. Use trees when you want to store information that naturally forms a hierarchy.
2. Trees provide moderate access/search (quicker than Linked List and slower than arrays).
3. Trees provide moderate insertion/deletion (quicker than Arrays and slower than Unordered Linked Lists).
4. Trees don’t have an upper limit on number of nodes as nodes are linked using pointers.
```

### Trees are declared

 ```c++
  struct node
  {
       int data;                 //Data element
       struct node * left;       //Pointer to left node
       struct node * right;      //Pointer to right node
  };
 ```
### Simple Tree
```c++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

Node* CreateNode(int data)
{
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

int main()
{

   /*create root*/
   struct Node* root = new CreateNode(1);

   root->left = new CreateNode(2);
   root->right = new CreateNode(3);
 
   root->left->left = new CreateNode(4);

   return 0;
}

  
   /* following is the tree after above statement

	    1
	   / \
	NULL NULL
   */
   
   /* 2 and 3 become left and right children of 1
				 
           1
	 /   \
	2     3
       / \    / \
   NULL NULL NULL NULL
 
*/
	
	
/* 4 becomes left child of 2

         1
       /   \
      2     3
    / \    /  \
   4  NULL NULL NULL
  / \
NULL NULL

*/

```
### Binary Tree (Properties)

```
1) The maximum number of nodes at level 'l' of a binary tree is 2^l.
   For root, l = 0, number of nodes = 2^0 = 1 
   
2) The Maximum number of nodes in a binary tree of height 'h' is 2^h. (Perfect Binary Tree)
   The Maximum number of total nodes in a binary tree of height 'h' is 2^(h+1) -1. (Perfect Binary Tree)
 ```
 
 ![image](https://user-images.githubusercontent.com/59710234/156149791-6d839008-6f2a-482b-95c4-e1ef1a70e9df.png)
 
 ```
3) In a Binary Tree with N nodes, minimum possible height or the minimum number of levels is Log2(N+1).   
   log₂1 = 0; log₂2 = 1; log₂3 = 1.584963; log₂4 = 2

4) A Binary Tree with L leaves has at least log₂L levels.
   log₂8 = 3
```

```
5) For Perfect Binary Tree the number of leaf nodes is always one more than nodes with two children.;
   L = T + 1
   Where L = Number of leaf nodes
   T = Number of internal nodes with two children
```
![image](https://user-images.githubusercontent.com/59710234/156152465-ca2f82b0-1519-4781-98d8-b4fbbebaa87f.png)

### Types of Binary Tree

```
Full Binary Tree : Full Binary Tree A Binary Tree is a full binary tree if 
    1. Every node has 0 or 2 children.

               18                    
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40
      
      
              18
            /     \  
          40       30  
                   /  \
                 100   40
      
      
             18
           /    \   
         15     20    
        /  \       
      40    50   
    /   \
   30   50
```
```
Complete Binary Tree: A Binary Tree is a Complete Binary Tree if 
    1. All the levels are completely filled except possibly the last level and
    2. The last level has all keys as left as possible 
    
              18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40
      
      
              18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40
     /  \   /
    8   7  9 
    
   Complete Binary Tree is Binary Heap. 
```
```
Perfect Binary Tree : A Binary tree is a Perfect Binary Tree in which 
     1. All the internal nodes have two children and 
     2. All leaf nodes are at the same level. 
     
              18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40
      
      
              18
           /       \  
         15         30  

L = I + 1 Where L = Number of leaf nodes, I = Number of internal nodes.
A Perfect Binary Tree of height h has 2^(h+1) – 1 node. 
```
### Level Order Binary Tree Traversal

```c++
void printLevelOrder(Node* root)
{
    // Base Case
    if (root == NULL)
        return;
 
    // Create an empty queue for level order traversal
    queue<Node*> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false) {
        // Print front of queue and remove it from queue
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();
 
        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);
 
        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
    }
}
```
Full Code : https://ideone.com/HyX6l7

### Insertion in a Binary Tree

```
The idea is to do iterative level order traversal of the given tree using queue. If we find a node whose left child is empty, we
make new key as left child of the node. Else if we find a node whose right child is empty, we make the new key as right child. We 
keep traversing the tree until we find a node whose either left or right child is empty.
```
```c++
Node* InsertNode(Node* root, int data)
{
    // If the tree is empty, assign new node address to root
    if (root == NULL) {
        root = CreateNode(data);
        return root;
    }
 
    // Else, do level order traversal until we find an empty
    // place, i.e. either left child or right child of some
    // node is pointing to NULL.
    queue<Node*> q;
    q.push(root);
 
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
 
        if (temp->left != NULL)
            q.push(temp->left);
        else {
            temp->left = CreateNode(data);
            return root;
        }
 
        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = CreateNode(data);
            return root;
        }
    }
}
```
Full Code : https://ideone.com/1wWArS

### Deletion in a Binary Tree

```
1. Starting at the root, find the deepest and rightmost node in binary tree and node which we want to delete. 
2. Replace the deepest rightmost node’s data with the node to be deleted. 
3. Then delete the deepest rightmost node.
```

![deletion-in-binary-tree (1)](https://user-images.githubusercontent.com/59710234/156345230-c1a5579d-3786-4672-8b14-33e1a8beb667.jpg)

``` c++
/* function to delete the given deepest node
(d_node) in binary tree */
void deletDeepest(struct Node* root,
                  struct Node* d_node)
{
    queue<struct Node*> q;
    q.push(root);
 
    // Do level order traversal until last node
    struct Node* temp;
    while (!q.empty()) {
        temp = q.front();
        q.pop();
        if (temp == d_node) {
            temp = NULL;
            delete (d_node);
            return;
        }
        if (temp->right) {
            if (temp->right == d_node) {
                temp->right = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->right);
        }
 
        if (temp->left) {
            if (temp->left == d_node) {
                temp->left = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->left);
        }
    }
}
 
/* function to delete element in binary tree */
Node* deletion(struct Node* root, int key)
{
    if (root == NULL)
        return NULL;
 
    if (root->left == NULL && root->right == NULL) {
        if (root->key == key)
            return NULL;
        else
            return root;
    }
 
    queue<struct Node*> q;
    q.push(root);
 
    struct Node* temp;
    struct Node* key_node = NULL;
 
    // Do level order traversal to find deepest
    // node(temp) and node to be deleted (key_node)
    while (!q.empty()) {
        temp = q.front();
        q.pop();
 
        if (temp->key == key)
            key_node = temp;
 
        if (temp->left)
            q.push(temp->left);
 
        if (temp->right)
            q.push(temp->right);
    }
 
    if (key_node != NULL) {
        int x = temp->key;
        deletDeepest(root, temp);
        key_node->key = x;
    }
    return root;
}
```

Full Code : https://ideone.com/0roDbO

```
N.T : The above code will not work if the node to be deleted is the deepest node itself.
```
https://www.geeksforgeeks.org/binary-tree-data-structure/

