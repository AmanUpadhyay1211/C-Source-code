#include <stdio.h>
 int main(){
    int i = 10;
    int *ptr = &i;

    printf("Address of i is %u \n", ptr);
    printf("Address of i is %u \n", &i);
    printf("value of i is %u \n", *&i);
    printf("Value of i is %d", *ptr);

    return 0;
 }