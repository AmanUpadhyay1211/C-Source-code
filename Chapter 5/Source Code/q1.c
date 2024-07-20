// Function to find the average of 3 numbers
float Average(int a, int b, int c) {
    // Calculate the average of three numbers
    float result = (float)(a + b + c) / 3;
    return result; // Return the calculated average
}

#include <stdio.h>

int main() {
    int A, B, C;

    // Prompt the user to enter the first number
    printf("Enter the first number\n");
    scanf("%d", &A);

    // Prompt the user to enter the second number
    printf("Enter the second number\n");
    scanf("%d", &B);

    // Prompt the user to enter the third number
    printf("Enter the third number\n");
    scanf("%d", &C);

    // Print the average of the three numbers using the Average function
    printf("THE AVERAGE OF %d, %d, %d is %.2f\n", A, B, C, Average(A, B, C));

    return 0; // Indicates successful execution
}
