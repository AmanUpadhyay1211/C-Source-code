// qUES-4 SIMPLE INTEREST CALCULATOR
#include <stdio.h>

int main()
{
    long principal;
    float rate;
    int years;
    printf("ENTER PRINCIPAL VALUE\n");
    scanf("%ld", &principal);
    printf("ENTER RATE OF INTEREST \n");
    scanf("%f", &rate);
    printf("ENTER NO. OF YEARS\n");
    scanf("%d", &years);
    printf("YOUR SIMPLE INTEREST IS %.2f", principal * rate * years);

    return 0;
}