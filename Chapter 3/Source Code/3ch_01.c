// if-else statement to find given no. is odd or even
#include <stdio.h>

int main()
{
    int a;
    printf("ENTER YOUR NUMBER\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("YOUR NUMBER %d IS EVEN\n", a);
    }
    else
    {
        printf("your number %d is odd\n", a);
    }

    return 0;
}