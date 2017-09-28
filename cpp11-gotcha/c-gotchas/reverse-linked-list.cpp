#include<iostream>

using namespace std;

struct Node {
  int data;
  struct Node* next;
};


void print(Node* head) {
  while(head != NULL) {
    cout<<head->data<<"->";
    head = head->next;
  }
}

void reverseList(Node** head) {
  Node* prev = NULL;
  Node* current = *head;
  Node* temp;

  if((*head) == NULL || (*head)->next == NULL)
    return;

  while(current != NULL) {
    temp = current->next;
    current->next = prev;
    prev = current;
    current = temp;
  }
  *head = prev;
}

int main(void) {
  Node *head = new Node();
  head->data = 1;
  Node *element1 = new Node();
  element1->data = 2;
  head->next = element1;

  Node *element2 = new Node();
  element2->data = 3;
  element1->next = element2;
  element2->next = NULL;
  print(head);

  reverseList(&head);
  cout<<endl;
  print(head);

}