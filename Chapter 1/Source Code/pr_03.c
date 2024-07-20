// QUES-3 CELCIUS TO FAHRENHEIT

#include <stdio.h>

int main() {
    float celcius;
    printf("ENTER TEMPRATURE IN CELCIUS\n");
    scanf("%f",&celcius);
    printf("TEMPRATURE IN FAHRENHEIT IS %.2f", (celcius*9/5)+32);

    return 0;
}