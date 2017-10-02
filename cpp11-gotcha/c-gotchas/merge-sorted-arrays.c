#include<stdio.h>

void merge_arrays(int a[], int b[], int c[]) {
  int a_len = sizeof(a)/sizeof(a[0]);
  int b_len = sizeof(b)/sizeof(b[0]);
  int i, j, k=0;

  while(i<a_len && j<b_len) {
    if (a[i] < b[j]) {
      c[k++] = a[i];
    }
    else {
      c[k++] = b[j];
    }
  }

  while(i < a_len) {
    c[k++] = a[i++];
  }

  while(j < b_len) {
    c[k++] = b[j++];
  }
}

void merge_arrays_in_place(int a[], int b[]) {
  
}