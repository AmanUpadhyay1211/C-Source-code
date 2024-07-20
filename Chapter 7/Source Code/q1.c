// #1 Pointer arithmetic in array
#include <stdio.h>

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int *ptr =&arr;
    printf("%u\n",&arr[2]);
    ptr = ptr +2;
    printf("%u\n",ptr);
    printf("%d\n",*ptr);

    return 0;
}