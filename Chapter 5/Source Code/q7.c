#include <stdio.h>

// Recursive function to generate the pattern of asterisks
void pattern(int n) {
    // Base case: print a single asterisk and newline for n = 1
    if (n == 1) {
        printf("*\n");
        return;
    }

    // Recursive call to generate the pattern for n - 1 lines
    pattern(n - 1);

    // Print a line of (2 * n - 1) asterisks
    for (int i = 0; i < (2 * n - 1); i++) {
        printf("*");
    }

    // Move to the next line after printing the pattern for n lines
    printf("\n");
}

int main() {
    int n;

    // Prompt the user to enter the number of lines for the pattern
    printf("Enter the lines of the pattern: ");
    scanf("%d", &n);

    // Display the generated pattern
    printf("YOUR PATTERN IS:\n");
    pattern(n);

    return 0;
}
