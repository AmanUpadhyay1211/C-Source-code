// if-else statement: Driving licence eligiblity test with royal pass option 
#include <stdio.h>

int main()
{
    int age;
    printf("ENTER YOUR AGE\n");
    scanf("%d", &age);
    if (age >= 18 && age <= 80)
    {
        printf("You AGE is %d  so you are eligible\n", age);
    }
    else
    {
        printf("AS your age is %d your are not eligible\n", age);
    }
    int rp;
    printf("FOR ROYAL Customer,Enter your ROYAL PASS, If you dont have enter zero\n");
    scanf("%d", &rp);
    if (rp > 0)
    {
        printf("Your royality allowed you");
    }
    else
    {
        printf("you dont have any ROYAL PASS\n");
    }
    return 0;
}