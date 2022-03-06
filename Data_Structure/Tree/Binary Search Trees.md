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
        if(root)
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
		If node == NULL 
			return createNode(data)
		if (data < node->data)
				node->left  = insert(node->left, data);
		else if (data > node->data)
				node->right = insert(node->right, data);  
		return node
```
#### Lets Insert 4

<img align="left" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156919692-5a0acc27-7584-439e-bd11-ada185433307.png" title="4<8 so, transverse through the left child of 8">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156919707-2d651406-32eb-4753-b846-7098bf42958f.png" title="4>3 so, transverse through the right child of 8">
<img align="left" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156919727-6b2a4532-8c84-4922-866e-b3bb9ceb5d9b.png" title="4<6 so, transverse through the left child of 6">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156919735-572ca513-7bbe-4fa6-91a8-2c4969882953.png" title="Insert 4 as a left child of 6">
<img align="center" width="300" height="300" src="https://user-images.githubusercontent.com/59710234/156919743-00b9423d-5974-4d42-865c-79a4dad94567.png" title="Image showing the importance of returning the root element at the end so that the elements don't lose their position during the upward recursion step.">

### Deletion Operation

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
### Resources

https://www.geeksforgeeks.org/binary-search-tree-data-structure/
