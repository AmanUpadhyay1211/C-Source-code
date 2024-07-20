// Ques-2 program to calculate area  of circle and then add height to volume of cylinder

#include <stdio.h>

int main()
{
    float pi = 3.14;
    int radius;
    printf("ENTER VALUE OF THE RADIUS\n");
    scanf("%d", &radius);
    printf("area of circle is %f\n", pi * radius * radius);
    int height;
    printf("enter height if you want to find volume of cylinder of same radius\n");
    scanf("%d", &height);
    printf("volume of cylinder will be %f", pi * radius * radius * height);
    return 0;
}