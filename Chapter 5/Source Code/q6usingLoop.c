#include <stdio.h>

// Function to find the sum of the first n natural numbers using a loop
int sum(int n) {
    int N = n, SUM = 0;

    // Loop through the natural numbers from 0 to n and accumulate the sum
    for (int i = 1; i <= N; i++) {
        SUM += i;
    }

    return SUM; // Return the calculated sum
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
