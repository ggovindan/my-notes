/*
Given an array, a, of n distinct positive integers, we define the following:
  * subarray a[i..j] constains elements a[i], a[i+1]...a[j-1], a[j]
  * Two subarrays a[i1..j1] and a[i2..j2] are considered to be distinct if i1 != i2 or j1 != j2

  we consider the subarray a[i..j](where 0<=i < n and i <=j < n) to be beautiful if it contains exactly m odd elements

  complete the beautifulSubarrays function. It has 2 parameters a(the array) m (the number of odd elements to be present for an array to be beautiful)
*/

#include<stdio.h>

int beautiful_subarray(int a[], m) {
  int start = 0, end = 0, count = 0, total = 0;
  int arr_len = sizeof(a)/sizeof(a[0]);

  while(end < arr_len) {
    if (a[end++] %2 != 0) {
      count++;
    }

    //if the count of odd numbers is more than needed, then we will more the start enough until
    // we hit the next odd number
    while (count > m)  {
      if (a[start++] %2 != 0) {
        count --;
      }
    }

    if (count == m) {
      total += count_fn(a, start, end, m);
    }
  }
  return total;
}

int count_fn(int a[], int start, int end, int m) {
  int sub_total = m == 0?0:1; // initialize to one for we might exit the loop if the first element is odd
  while (start < end && a[start] % 2 == 0) {
    sub_total++;
    start++;
  }
  return sub_total;
}