// Find the sum of a subarray 

// [1, 2, 3, 4, 5]
// [1], [2], [3], [4], [5]

// [1, 2], [2,3], [3,4], [4,5]
// [1, 2, 3], [2, 3, 4], [3, 4, 5]
// [1, 2, 3, 4], [2, 3, 4,5]

// n = 5

// 1 appears n times = n
// 2 appears as first element (n-1 times) and second element (n-1 times) = n-1 + n-1
// 3 appears as first element (n-2 times) and second element (n-2 times) and third element (n-3) = n-2 + n-2 + n-3
// 4 appears as first element (n-3 times) and second element (n-3 times) and third element (n-3) and fourth element (n-4) = n-3 + n-3 + n-3 + n-4
// 5 appears n times

// i from 0 to n-1

// ith element appears (n-i)i + (n-i) 

// 20million
#include<stdio.h>

int arr[3] = {1, 3, 7};


int main(void) {
  printf("sizeof arr=%lu\n", sizeof(arr)/sizeof(arr[0]));
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  int result = 0;
  for(int i = 0; i < arrSize; i++ ) {
    int countTimes = (arrSize - i) * (i + 1);
    result += arr[i] * countTimes;
  }
  printf("result=%d\n", result);
}
