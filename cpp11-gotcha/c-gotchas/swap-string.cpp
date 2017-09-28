#include<iostream>
using namespace std;

void reverse(char *name) {
  int i, j;
  char temp;
  if (name == NULL || strlen(name) == 1) {
    return;
  }
  i = 0; 
  j = strlen(name)-1;
  cout<<"j="<<j<<endl;

  while(i<j) {
    cout<<"name[i]="<<name[i]<<endl;
    cout<<"name[j]="<<name[j]<<endl;
    temp = name[i];
    name[i] = name[j];
    name[j] = temp;
    i++; 
    j--;
  }
}

int main(void) {
  char name[] = "dipoza";
  reverse(name);
  cout<<name<<endl;
}