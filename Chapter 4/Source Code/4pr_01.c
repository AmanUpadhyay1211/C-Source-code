// PROGRAM TO PRINT MULTIPLICATION TABLE
#include <stdio.h>

int main()
{
    int num;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &num);
    int i;
    for (i = num; i <= 10 * num; i += num)
    {
        printf("%d\n", i);
    }

    return 0;
}

/* TO PRINT PROPER MUKTIPLICATION TABLE OF ANY NUMBER
#include <stdio.h>

int main() {
    int num,i,a=1;
    printf("ENTER THE NUMBER YOU WANT MILTIPLICATION TABLE OF\n ");
    scanf("%d",&num);
    for(i=num;i<=10*num;i+=num)
    {
        printf("%d Multiply %d is %d\n",num,a++,i);
    }

    return 0;
}*/