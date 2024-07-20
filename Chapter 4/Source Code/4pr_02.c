// PROGRAM FOR PRINTING TABLE IN REVERSE ORDER
#include <stdio.h>

int main()
{
    int num, i;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &num);
    for (i = 10 * num; i >= num; i -= num)
    {
        printf("%d\n", i);
    }

    return 0;
}


/* Multiplication of 10 in reverse order
#include <stdio.h>

int main() {
    int a=10,b=10;

    for(int i=10*b;i>=b;i-=b){
        printf("10 multiply %d is %d\n",a--,i);
    }

    return 0;
}*/