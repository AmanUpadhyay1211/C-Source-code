// Chapter 3 question 6: to findgreatest of four numbers enter by user

#include <stdio.h>

int main()
{
    int a, b, c, d; // User input numbers
    printf("ENTER YOUR FIRST NO.\n");
    scanf("%d", &a);
    printf("ENTER YOUR SECOND NO.\n");
    scanf("%d", &b);
    printf("ENTER YOUR THIRD NO.\n");
    scanf("%d", &c);
    printf("ENTER YOUR FOURTH NO.\n");
    scanf("%d", &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("%d is biggest Number\n", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("%d is biggest Number\n", b);
    }
    else if (c >= a && c >= b && c >= d)
    {
        printf("%d is biggest Number\n", c);
    }
    else if (d >= a && d > c && d >= b)
    {
        printf("%d is biggest Number\n", d);
    }

    return 0;
}