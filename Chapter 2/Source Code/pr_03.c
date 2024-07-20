// QUES-3 To cheak.if a number is.divisible.by 97 or.not without if else statement
#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    printf("enter your number\n");
    scanf("%d", &N);
    printf("DIVISIBLITY TEST RETURNS %d\n", N % 97);

    /* if output is anything except zero that means it is not divisible
    if (N % 97 == 0)
    {
        printf("NUMBER IS DIVISIBLE\n");
    }
    else
    {
        printf("NUMBER IS NOT DIVISIBLE\n");
    }*/

    return 0;
}