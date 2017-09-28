//print tree vertically

/*
     1
  2      3
4   5  6   7
        8   9

output should be
4
2
1 5 6
3 8
7
9
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
  int data;
  struct Node* left;
  struct Node* right;
}Node;

Node* create_node(data) {
  Node* p = (Node*)malloc(sizeof(Node));
  p->data = data;
  p->left = NULL;
  p->right = NULL;
  return p;
}

Node* insert(Node* node, int data) {
  if (node == NULL) {
    node = create_node(data);
    return node;
  }
  else if (data < node->data) {
    if (node->left == NULL) {
      node->left = create_node(data);
      return node->left;
    }
    return insert(node->left, data);
  }
  else if (data > node->data) {
    if (node->right == NULL) {
      node->right = create_node(data);
      return node->right;
    }
    return insert(node->right, data);
  }
  else {
    return node;
  }
}

void find_min_max(Node* node, int *min, int* max, int hd) {
  if (node == NULL) {
    return;
  }

  if (hd < *min) {
    *min = hd;
  }
  if (hd > *max) {
    *max = hd;
  }

  find_min_max(node->left, min, max, hd-1);
  find_min_max(node->right, min, max, hd+1);
}

void printVertically(Node* node, int pos, int hd) {
  if (node == NULL) {
    return;
  }

  if (pos == hd) {
    printf("%d ", node->data);
  }

  printVertically(node->left, pos, hd-1);
  printVertically(node->right, pos, hd+1);
}

int main(void) {
  Node* root = create_node(10);
  int min = 0, max = 0, i;
  insert(root, 12);
  insert(root, 5);
  insert(root, 2);
  insert(root, 1);
  insert(root, 4);
  insert(root, 6);

  find_min_max(root, &min, &max, 0);

  for(i=min; i<=max; i++) {
    printVertically(root, i, 0);
    printf("\n");
  }
}