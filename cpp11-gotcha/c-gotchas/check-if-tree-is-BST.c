#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

typedef struct Node {
  int data;
  struct Node* left;
  struct Node* right;
}Node;

Node* create_node(int data) {
  Node* p = (Node*)malloc(sizeof(Node));
  p->data = data;
  p->left = NULL;
  p->right = NULL;
  return p;
}

int parse_tree(Node* node, int min, int max) {

  if (node == NULL) {
    return 1; // empty tree is also a BST
  }

  if (node->data < min || node->data > max) {
    return 0;
  }

  return parse_tree(node->left, min, node->data-1) &&
  parse_tree(node->right, node->data+1, max);
}


/*
This creates a proper BST
*/
Node* insert_node(Node* node, int data) {
  if (node == NULL) {
    node = create_node(data);
    return node;
  }
  else if (data < node->data) {
    if (node->left == NULL) {
      node->left = create_node(data);
      return node->left;
    }
    return insert_node(node->left, data);
  }
  else if (data > node->data) {
    if (node->right == NULL) {
      node->right = create_node(data);
      return node->right;
    }
    return insert_node(node->right, data);
  }
  else {
    return node;
  }
}

/* in order traversal */
void print_tree(Node* node) {
  if (node != NULL) {
    print_tree(node->left);
    printf("%d\n", node->data);
    print_tree(node->right);
  }
}

int main(void) {
  Node* root = insert_node(NULL, 10);
  insert_node(root, 12);
  insert_node(root, 5);
  insert_node(root, 3);
  insert_node(root, 4);
  insert_node(root, 6);
  insert_node(root, 20);

  print_tree(root);
  printf("is this a BST=%d\n", parse_tree(root, INT_MIN, INT_MAX));
}