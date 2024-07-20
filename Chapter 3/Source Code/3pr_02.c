// Chapter 3 question 2 : Program to find wheather a student is pass or fail it requires total 40% and 33% in each subject
#include <stdio.h>

int main()
{
    int science;
    int sst;
    int maths;
    printf("ENTER YOUR SCIENCE MARKS\n");
    scanf("%d", &science);
    printf("ENTER YOUR SST MARKS\n");
    scanf("%d", &sst);
    printf("ENTER YOUR MATHS MARKS\n");
    scanf("%d", &maths);

    float total = (science + sst + maths) / 3;
    if ((science >= 33, sst >= 33, maths >= 33) && total >= 40)
    {
        printf("congratulation you have passed with %f percent\n", total);
    }
    else
    {
        printf("YOU FAILED,you son of a BITCH and only get %f percent\n", total);
    }

    return 0;
}