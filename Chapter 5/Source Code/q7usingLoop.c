#include <stdio.h>

int main() {
    int r;
    
    // Prompt the user to enter the number of rows
    printf("Enter the rows\n");
    scanf("%d", &r);

    // Outer loop for each row
    for (int i = 1; i <= r; i++) {
        // Inner loop to print '*' for each row
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after printing the row
        printf("\n");
    }

    return 0;
}
