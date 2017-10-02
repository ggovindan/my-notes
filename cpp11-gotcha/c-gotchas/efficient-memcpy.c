#include <stdio.h>
#include <limits.h>


// void* my_memcpy(void* dst, const void* src, size_t len) {
//   long* plDst = (long*)dst;
//   const long* plSrc = (const long*)src;
// }






int main(void){
    printf("sizeof(short) = %d\n", sizeof(short)); //2
    printf("sizeof(int) = %d\n", sizeof(int)); //4
    printf("sizeof(long) = %d\n", sizeof(long)); //8
    printf("sizeof(float) = %d\n", sizeof(float)); //4
    printf("sizeof(double) = %d\n", sizeof(double)); //8
    printf("sizeof(long double) = %d\n", sizeof(long double)); //16
    printf("INT_MIN=%d", INT_MIN);
    printf("INT_MAX=%d", INT_MAX);
    return 0;
}