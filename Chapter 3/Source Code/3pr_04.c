// chapter 3 question 4: to find ifgiven year is leap year or not
#include <stdio.h>

int main()
{
    int year;
    printf("ENTER THE YEAR\n");
    scanf("%d", &year);

    if (year % 4 == 0 && !(year % 100 == 0) || year % 400 == 0)
    {
        printf("%d is a LEAP YEAR", year);
    }
    else
    {
        printf("%d is not a LEAP YEAR", year);
    }

    return 0;
}