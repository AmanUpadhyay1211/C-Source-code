// Program for first N natural number by do while loop!!
#include <stdio.h>

int main()
{
    int n;
    printf("Enter N for First N natural number\n");
    scanf("%d", &n);
    int i = 1;
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= n);

    return 0;
}