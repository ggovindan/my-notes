#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
  int data;
  struct Node *left;
  struct Node *right;
}Node;

Node* create_node(int data) {
  Node* node = (Node*)malloc(sizeof(Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
} 

Node* insert(Node* node, int data) {
  if (node == NULL) {
    node = create_node(data);
    return node;
  }
  else if(data < node->data ) {
    if (node->left == NULL) {
      node->left = create_node(data);
      return node->left;
    }
    else {
      return insert(node->left, data);
    }
  } 
  else if (data > node->data) {
    if (node->right == NULL) {
      node->right = create_node(data);
      return node->right;
    } else {
      return insert(node->right, data);
    }
  }
  else { //element already inserted
      return node;
  }
}

/* inorder traversal */
void treeprint(Node* p) {
  if(p != NULL) {
    printf("%4d ", p->data);
    treeprint(p->left);
    treeprint(p->right);
  }
}

int main(void) {
  Node* root = create_node(10);
  insert(root, 3);
  insert(root, 12);
  insert(root, 4);
  insert(root, 1);

  treeprint(root);
}