### Tree
```
A tree is a nonlinear hierarchical data structure that consists of nodes connected by edges.

Other data structures such as arrays, linked list, stack, and queue are linear data structures that store data
sequentially.Tree data structures allow quicker and easier access to the data as it is a non-linear data structure.
Binary Search Trees(BSTs) are used to quickly check whether an element is present in a set or not.
Heap is a kind of tree that is used for heap sort.
```

### Tree Terminologies
```
Node : A node is an entity that contains a key or value and pointers to its child nodes.
Edge : It is the link between any two nodes.
Root : It is the topmost node of a tree.
Height of a Node : The height of a node is the number of edges from the node to the deepest leaf
Depth of a Node : The depth of a node is the number of edges from the root to the node.
Degree of a Node : The degree of a node is the total number of branches of that node.
Forest : A collection of disjoint trees is called a forest.
```

### Types of Tree
```
1. Binary Tree
2. Binary Search Tree
3. AVL Tree
4. B-Tree
```

### Tree Traversal
```
The tree traversal algorithm helps in visiting a required node in the tree. Traversing a tree means visiting every node in 
the tree. You might, for instance, want to add all the values in the tree or find the largest one. 

There can be three types of traversal : inorder, preorder and postorder
```

### Inorder Traversal
```
1. First, visit all the nodes in the left subtree
2. Then the root node
3. Visit all the nodes in the right subtree
```
```
inorder(root->left)
display(root->data)
inorder(root->right)

D → B → E → A → F → C → G
```

![image](https://user-images.githubusercontent.com/59710234/156237770-a078b0d9-19e3-4ba2-a6f1-7240f5603481.png)

```c++
void printInorder(struct Node* node)
{
	if (node == NULL)
		return;
 
	/* first recur on left child */
	printInorder(node->left);
 
	/* then print the data of node */
	cout << node->data << " ";
 
	/* now recur on right child */
	printInorder(node->right);
}
```

### Preorder Traversal
```
1. Visit root node
2. Visit all the nodes in the left subtree
3. Visit all the nodes in the right subtree
```
```
display(root->data)
preorder(root->left)
preorder(root->right)

A → B → D → E → C → F → G
```

![image](https://user-images.githubusercontent.com/59710234/156237860-19c89ac8-5024-4dd1-93e6-8625c11de746.png)

```c++
void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;
 
	/* first print data of node */
	cout << node->data << " ";
 
	/* then recur on left subtree */
	printPreorder(node->left);
 
	/* now recur on right subtree */
	printPreorder(node->right);
}
```

### Postorder Traversal
```
1. Visit all the nodes in the left subtree
2. Visit all the nodes in the right subtree
3. Visit the root node
```
```
postorder(root->left)
postorder(root->right)
display(root->data)

D → E → B → F → G → C → A
```
![image](https://user-images.githubusercontent.com/59710234/156237926-cff55f20-7a7e-43f9-a301-e8f2559f7af2.png)

```c++
void printPostorder(struct Node* node)
{
	if (node == NULL)
		return;
 
	// first recur on left subtree
	printPostorder(node->left);
 
	// then recur on right subtree
	printPostorder(node->right);
 
	// now deal with the node
	cout << node->data << " ";
}
```

Tree Traversals : https://ideone.com/o0kv8u 
