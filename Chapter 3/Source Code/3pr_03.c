// chapter 3 question 3: calculating income tax and condition are given in practice set
#include <stdio.h>

int main()
{
    int income;
    printf("ENTER YOUR INCOME\n");
    scanf("%d", &income);
    int ti = income - 250000;
    // ti=taxable income
    float tax;
    if (income > 250000 && income <= 500000)
    {
        printf("YOUR TAX AMOUNT IS %f", tax = ti * 0.05);
    }
    else if (income > 500000 && income <= 1000000)
    {
        printf("YOUR TAX AMOUNT IS %f", tax = ti * 0.20);
    }
    else if (income > 1000000)
    {
        printf("YOUR TAX AMOUNT IS %f", tax = ti * 0.30);
    }
    else
    {
        printf("YOU DONT HAVE TO PAY TAX");
    }

    return 0;
}