// Celsius to Fahrenheit conversion function
#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float CTF(float Celsius) {
    return Celsius * 9 / 5 + 32; // Conversion formula
}

int main() {
    float Celsius;

    // Prompt user to enter temperature in Celsius
    printf("Enter temperature in Celsius\n");
    scanf("%f", &Celsius);

    // Display the converted temperature in Fahrenheit
    printf("Temperature in Fahrenheit: %.2f\n", CTF(Celsius));

    return 0; // Successful execution
}
