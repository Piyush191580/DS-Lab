/*Write a program to create a binary search tree of integers and perform the following operations using linked list.

Insert a node.
Delete a node.


Note:

Driver code is already provided to you, your task is to fill in the remaining code.
Refer to visible test cases for better understanding.

Sample Test Cases
Test case 1
Enter·how·many·nodes·you·want·to·insert·in·BST·:5	
Enter·the·value:·10	
Enter·the·value:·9	
Enter·the·value:·20	
Enter·the·value:·45	
Enter·the·value:·8	
Inorder·traversal(Always·gives·ascending·order):·8·9·10·20·45·⏎	
Preorder·traversal:·10·9·8·20·45·⏎	
Enter·the·data·to·delete:·8	
After·deleting·8⏎	
Inorder·traversal:·9·10·20·45·⏎	
Preorder·traversal:·10·9·20·45·	
Test case 2
Enter·how·many·nodes·you·want·to·insert·in·BST·:6	
Enter·the·value:·45	
Enter·the·value:·15	
Enter·the·value:·65	
Enter·the·value:·25	
Enter·the·value:·35	
Enter·the·value:·95	
Inorder·traversal(Always·gives·ascending·order):·15·25·35·45·65·95·⏎	
Preorder·traversal:·45·15·25·35·65·95·⏎	
Enter·the·data·to·delete:·15	
After·deleting·15⏎	
Inorder·traversal:·25·35·45·65·95·⏎	
Preorder·traversal:·45·25·35·65·95·*/

//code
#include <stdio.h>
#include <stdlib.h>
struct node {
  int key;
  struct node *left, *right;
};

// Creation
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal using recursion
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);
    // Traverse root
    printf("%d ", root->key);
    // Traverse right
    inorder(root->right);
  }
}

void preorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
     printf("%d ", root->key);
    preorder(root->left);
    // Traverse right
    preorder(root->right);
  }
}
// Find the inorder successor
struct node *minValueNode(struct node *node) {
  struct node *current = node;
  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;
  return current;
}

// Insert a node in BST
struct node *insert(struct node *node, int key) {
    if (node == NULL) {
    return newNode(key);
  }

  if (key < node->key) {
    node->left = insert(node->left, key);
  } else if (key > node->key) {
    node->right = insert(node->right, key);
  }

  return node;


}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {

  if (root == NULL) {
    return root;
  }

  if (key < root->key) {
    root->left = deleteNode(root->left, key);
  } else if (key > root->key) {
    root->right = deleteNode(root->right, key);
  } else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    struct node *temp = minValueNode(root->right);

    root->key = temp->key;

    root->right = deleteNode(root->right, temp->key);
  }
  return root;


}

// Driver code
int main() {
  struct node *root = NULL;
  int n,data;
  printf("Enter how many nodes you want to insert in BST :");
  scanf("%d",&n);
  for( int i =0 ; i < n ; i++){
      printf("Enter the value: ");
      scanf("%d", &data);
      root = insert(root, data);
  }

  printf("Inorder traversal(Always gives ascending order): ");
  inorder(root);
  printf("\nPreorder traversal: ");
  preorder(root);
  printf("\nEnter the data to delete: ");
  scanf("%d",&data);

  printf("After deleting %d\n",data);
  root = deleteNode(root, data);
  printf("Inorder traversal: ");
  inorder(root);
  printf("\nPreorder traversal: ");
  preorder(root);
}
