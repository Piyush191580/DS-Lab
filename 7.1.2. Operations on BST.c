/*Write a program to create a binary search tree of integers and perform the following operations using linked list.

Insert a node
In-order traversal
Pre-order traversal
Post-order traversal
Search an element
Exit

Sample Test Cases
Test case 1
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·2	
Binary·Search·Tree·is·empty.⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·4	
Binary·Search·Tree·is·empty.⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·5	
Enter·an·element·to·be·searched·:·6	
Element·not·found·in·the·binary·search·tree.⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·3	
Binary·Search·Tree·is·empty.⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·1	
Enter·an·element·to·be·inserted·:·5	
Successfully·inserted.⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·1	
Enter·an·element·to·be·inserted·:·2	
Successfully·inserted.⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·2	
Elements·of·the·BST·(in-order·traversal):·2·5·⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·3	
Elements·of·the·BST·(pre-order·traversal):·5·2·⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·4	
Elements·of·the·BST·(post-order·traversal):·2·5·⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·5	
Enter·an·element·to·be·searched·:·2	
Element·found·in·the·binary·search·tree.⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·5	
Enter·an·element·to·be·searched·:·6	
Element·not·found·in·the·binary·search·tree.⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·1	
Enter·an·element·to·be·inserted·:·1	
Successfully·inserted.⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·2	
Elements·of·the·BST·(in-order·traversal):·1·2·5·⏎	
1.Insert·2.Inorder·Traversal·3.Preorder·Traversal·4.Postorder·Traversal·5.Search·an·element·6.Exit⏎	
Enter·your·option:·6*/

//code

//BinarySearchTree.c
#include<stdio.h>
#include<stdlib.h>
#include "InsertAndTraversals.c" 

void main() {
	int x, op;
	BSTNODE root = NULL;
	while(1) {
		printf("1.Insert 2.Inorder Traversal 3.Preorder Traversal 4.Postorder Traversal 5.Search an element 6.Exit\n");
		printf("Enter your option: ");
		scanf("%d", &op);
		switch(op) {
			case 1:	printf("Enter an element to be inserted : ");
					scanf("%d", &x);
					root = insertNodeInBST(root,x);
					break;
			case 2:
					if(root == NULL) {
						printf("Binary Search Tree is empty.\n");
					}
					else {
						printf("Elements of the BST (in-order traversal): ");
						inorderInBST(root);
						printf("\n");
					}
					break;
			case 3:
					if(root == NULL) {
						printf("Binary Search Tree is empty.\n");
					}
					else {
						printf("Elements of the BST (pre-order traversal): ");
						preorderInBST(root);
						printf("\n");
						}
					break;
			case 4:
					if(root == NULL) {
						printf("Binary Search Tree is empty.\n");
					}
					else {
						printf("Elements of the BST (post-order traversal): ");
						postorderInBST(root);
						printf("\n");
						}
					break;
			case 5: 
					printf("Enter an element to be searched : ");
					scanf("%d", &x);
					if( searchNodeInBST(root,x) == NULL) 
						printf("Element not found in the binary search tree.\n");
					else
						printf("Element found in the binary search tree.\n");
					break;
			case 6:
					exit(0);
		}
	}
}






//InsertAndTraversals.c
struct node {
	int data;
	struct node *left, *right;
};
  
typedef struct node *BSTNODE;

BSTNODE newNodeInBST(int item) {
	BSTNODE temp =  (BSTNODE)malloc(sizeof(struct node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}
  
void inorderInBST(BSTNODE root) {
if(root == NULL)
		return;
	else{
		inorderInBST(root ->left);
		printf("%d ",root->data);
		inorderInBST(root->right);
	}
	
}
void preorderInBST(BSTNODE root) {
	if(root == NULL)
		return;
	else{
		printf("%d ",root->data);
		preorderInBST(root->left);
		preorderInBST(root->right);
	}
	
	
}
void postorderInBST(BSTNODE root) {
	if(root == NULL)
		return;
	else{
		postorderInBST(root->left);
		postorderInBST(root->right);
		printf("%d ",root->data);
	}
	
	
    
}
BSTNODE insertNodeInBST(BSTNODE node, int ele) {
	if(node == NULL){
		printf("Successfully inserted.\n");
		return newNodeInBST(ele);
	}
	if(ele<node->data){
		node->left = insertNodeInBST(node->left,ele);
	}
	else if(ele>node->data){
		node->right = insertNodeInBST(node->right,ele);
	}else{
		return NULL;
	}
	return node;
	
	
}

BSTNODE searchNodeInBST(BSTNODE root, int ele) {
	if(root == NULL || root->data == ele){
		return root;
	}
	if(ele < root->data){
		return searchNodeInBST (root->left,ele);
		
	}else{
		return searchNodeInBST(root->right, ele);
	}
	
	
	
}
