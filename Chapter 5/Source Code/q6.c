#include <stdio.h>

// Recursive function to find the sum of the first n natural numbers
int sum(int n) {
    // Base case: sum of first 0 natural numbers is 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: sum(n) = sum(n-1) + n
        return sum(n - 1) + n;
    }
}

int main() {
    int n;

    // Prompt user to enter the number of terms to calculate the sum
    printf("Enter the number of terms you want to calculate the sum of\n");
    scanf("%d", &n);

    // Display the sum of the first n natural numbers
    printf("THE SUM OF FIRST %d NATURAL NUMBERS IS %d\n", n, sum(n));

    return 0;
}
