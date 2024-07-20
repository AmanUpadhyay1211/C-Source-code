#include <stdio.h>

int main(){
    int num,factorial = 1;
    printf("enter the  number you want factorial of :\n");
    scanf("%d",&num);

    for (int i = 1; i<=num; i++)
    {
        factorial = factorial*i;
    }
    
    printf( " factorial is : %d",factorial);
    return 0;
}