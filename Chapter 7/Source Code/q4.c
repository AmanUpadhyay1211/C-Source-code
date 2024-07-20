// #4 table of 5 in array
#include <stdio.h>

int main() {
    int arr[10];
    int *ptr = &arr[0];
    
    for(int i=0;i<10;i++){
        printf("ENTER 5 MULTYPLY %d is:\n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    
    for(int i=0;i<10;i++){
        printf("ENTER 5 MULTYPLY %d is: %d \n",i+1, arr[i]);
    }
    
    return 0;
}