### Binary Search Trees
```
A binary tree to be a binary search tree, which each node has at most two children, as the left child and the right child, 
  The data of all the nodes in the left sub-tree of the root node should be ≤ the data of the root. 
  The data of all the nodes in the right subtree of the root node should be ≥ the data of the root.
```

![image](https://user-images.githubusercontent.com/59710234/156881184-af86ec20-4497-4b21-a5d0-1bcf2828e796.png)

```
Binary search tree is a data structure that quickly allows us to maintain a sorted list of numbers.
 - It is called a binary tree because each tree node has a maximum of two children.
 - It is called a search tree because it can be used to search for the presence of a number in O(log(n)) time.
```

```
Data in the left subtree [5,1,6], All data elements are < 10
Data in the right subtree  [19,17], All data elements are > 10

Similarly,  considering the root node with root 5 and 19
```

### In-order Traversal

```
First process left subtree (before processing root node)
Then, process current root node
Process right subtree
```
```c++
    void inorder(struct node*root)
    {
        if(root != NULL)
        {
            inorder(root->left);    //Go to left subtree
            printf("%d ",root->data);    //Printf root->data
            inorder(root->right);     //Go to right subtree
        }
    }
```
```
Consider the in-order traversal of a sample BST.
```
![image](https://user-images.githubusercontent.com/59710234/156883046-39bbb89d-0ff2-4acf-ab93-05dc0faff880.png)

```
The function call stack;
   'inorder( )' procedure is called, data = 10
   Since the node has a left subtree 'inorder( )' is called, data = 5
   Again, the node has a left subtree, so 'inorder( )' is called, data = 1
```
![image](https://user-images.githubusercontent.com/59710234/156883385-5eaac8b5-ee9e-457a-a400-6b4e0251128b.png)

```
 data = 1 does not have a left subtree. 
 data = 1 does not have a right subtree. 
 inorder(1) gets completed and this function call is popped from the call stack.
```
![image](https://user-images.githubusercontent.com/59710234/156898489-c01bb64c-3d26-4782-a1bf-901c07a26043.png)

```
Left subtree of node with data = 5 is completely processed.
Right subtree of this node with data = 5 is non-empty. 'inorder(6)' is then called.
```

![image](https://user-images.githubusercontent.com/59710234/156898567-3550c65f-efce-446f-87fb-5198d6634af2.png)

```
the node with data = 6 has no left subtree, and it also has no right subtree. 'inorder(6)' is then completed.
```
![image](https://user-images.githubusercontent.com/59710234/156898641-c69277f4-792c-4f95-9dbe-42de8d305d95.png)

```
the left and right subtrees of node with data = 5 have been completely processed.

Now, the left node with data = 10 have been completely processed.

Right subtree of this node gets processed in a similar way. After right subtree of this node is completely processed, 
entire traversal of the BST is complete.

The order in which BST in Fig. 1 is visited is: 1, 5, 6, 10, 17, 19. 
```

### Insert Operation
```
Inserting a value in the correct position
   - If the value is below the root , we can say for sure that the value is not in the right subtree;
     we need to only search in the left subtree.
   - If the value is above the root, we can say for sure that the value is not in the left subtree;
     we need to only search in the right subtree.
   - When we reach a point left or right subtree is null, we put the new node there.
   
Consider the insertion of data = 20 in the BST.
```
##### Algorithm
    
```c++
      IF node == NULL 
	  return createNode(data)
      IF data < node->data
	  node->left  = insert(node->left, data);
      ELSE IF data > node->data
	  node->right = insert(node->right, data);  
      return node
```
#### Lets Insert 4

<img align="left" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156919692-5a0acc27-7584-439e-bd11-ada185433307.png" title="4<8 so, transverse through the left child of 8">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156919707-2d651406-32eb-4753-b846-7098bf42958f.png" title="4>3 so, transverse through the right child of 8">
<img align="left" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156919727-6b2a4532-8c84-4922-866e-b3bb9ceb5d9b.png" title="4<6 so, transverse through the left child of 6">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156919735-572ca513-7bbe-4fa6-91a8-2c4969882953.png" title="Insert 4 as a left child of 6">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156919743-00b9423d-5974-4d42-865c-79a4dad94567.png" title="Image showing the importance of returning the root element at the end so that the elements don't lose their position during the upward recursion step.">

```c++
// Insert a node
struct node *insert(struct node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}
```

### Deletion Operation
```
There are three cases for deleting a node from a binary search tree.
```
```
Case I :
 In the first case, the node to be deleted is the leaf node.
```
<img align="left" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156920722-99406269-9237-4b0b-98c4-4ce7cde7bbe0.png" title="4 is to be deleted">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156920730-e66e0e12-2828-4aef-9d7e-4a703c1e03ef.png" title="Delete the node">

```
Case II :
 In the second case, the node to be deleted lies has a single child node.
```
<img align="left" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156920744-a22d8061-4cfc-4f00-b685-a6db4e1fff5b.png" title="6 is to be deleted">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156920759-0f923960-d5e7-4fd1-b4bb-fc3bca7e660d.png" title="copy the value of its child to the node and delete the child">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156920774-2231fbc1-a09f-4f8a-ad56-375a0b5388c1.png" title="Final tree">

```
Case III :
 In the third case, the node to be deleted has two children.
```
<img align="left" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156920786-441ae215-0a06-40d1-bcdb-f05b6b287dc5.png" title="3 is to be deleted">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156920801-1f2deaad-385e-4ba0-86bc-df8e101fa654.png" title="Copy the value of the inorder successor (4) to the node">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156920822-e92ec12d-9448-4665-aed0-b33cbbe42ad2.png" title="Delete the inorder successor">

```c++

struct node *minValueNode(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}
```
### Search Operation

```
BST that each left subtree has values below root and each right subtree has values above the root.
 - If the value is below the root , we can say for sure that the value is not in the right subtree;
     we need to only search in the left subtree.
 - If the value is above the root, we can say for sure that the value is not in the left subtree;
     we need to only search in the right subtree.
```
##### Algorithm
    
```c++
    If root == NULL 
    return NULL;
    If number == root->data 
        return root->data;
    If number < root->data 
        return search(root->left)
    If number > root->data 
        return search(root->right)
```
#### Lets Search 4

<img align="left" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156910521-378e9a17-1885-4883-8e58-332a05f5b210.png" title="4 is not found so, traverse through the left subtree of 8">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156910584-22ed985a-2304-45ce-9028-7458e45263cd.png" title="4 is not found so, traverse through the right subtree of 3">
<img align="left" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156910589-d7fa995c-3d9c-48c0-ac5f-886fc7fd0a8d.png" title="4 is not found so, traverse through the left subtree of 6">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156910600-1eb9c654-a331-4c7d-a7c5-3e0760609098.png" title="4 is found">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156910614-17a6e081-dcae-4e62-9b60-c1d302db30df.png" title="If the value is found in any of the subtrees, it is propagated up so that in the end it is returned, otherwise null is returned">

```c++
struct node* search(struct node* root, int key){
     // Base Cases: root is null or key is present at root
     if (root == NULL || root->key == key)
         return root;
	
     // Key is greater than root's key
     if (root->key < key)
	return search(root->right, key);

     // Key is smaller than root's key
	return search(root->left, key);
}
```
Full Code : https://ideone.com/yLFR4J

### Time Complexity
| Operation     | Best Case Complexity | Average Case Complexity  | Worst Case Complexity |
| ------------- | -------------------- | ------------------------ | --------------------  |
|   Search      |      O(log n)        |       O(log n)           |         O(n)          |
|   Insertion   |      O(log n)        |       O(log n)           |         O(n)          |
|   Deletion    |      O(log n)        |       O(log n)           |         O(n)          |


### Resources

https://www.geeksforgeeks.org/binary-search-tree-data-structure/
