### Binary Search Trees
```
A binary tree to be a binary search tree, which each node has at most two children, as the left child and the right child, 
  The data of all the nodes in the left sub-tree of the root node should be ≤ the data of the root. 
  The data of all the nodes in the right subtree of the root node should be ≥ the data of the root.
```

![image](https://user-images.githubusercontent.com/59710234/156881184-af86ec20-4497-4b21-a5d0-1bcf2828e796.png)

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
Consider the insertion of data = 20 in the BST.
```

### Deletion Operation

### Search Operation