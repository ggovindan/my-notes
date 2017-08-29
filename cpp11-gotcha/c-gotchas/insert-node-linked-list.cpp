#include<iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

void print(Node* head) {
  while(head != NULL) {
    cout<<head->data<<"->";
    head = head->next;
  }
  cout<<"NULL";
}

void insert_node(Node** head, Node* new_node) {
  Node* current;


  if((*head) == NULL || (*head)->data > new_node->data) {
    new_node->next = *head;
    *head = new_node;
    return;
  }

  if((*head)->next == NULL) {
    (*head)->next = new_node;
    new_node->next = NULL;
    print(*head);
    return;
  }

  current = (*head);
  while(current->next != NULL &&
    current->next->data < new_node->data) {
    current = current->next;
  }

  new_node->next = current->next;
  current->next = new_node;
}


int main(void) {
  Node *myList = new Node();
  myList->data = 1;
  myList->next = NULL;

  Node *new_element = new Node();
  new_element->data = 0;
  new_element->next = NULL;

  insert_node(&myList, new_element);
  print(myList);
  return 0;
}