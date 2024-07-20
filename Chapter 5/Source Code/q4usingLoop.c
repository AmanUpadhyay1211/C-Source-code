#include <stdio.h>

int main() {
    int fn, fibonacci, first = 0, second = 1;

    // Prompt user to enter the term of the Fibonacci series
    printf("Enter the Term\n");
    scanf("%d", &fn);

    // Handle special cases for fn = 1 and fn = 2
    if (fn == 1) {
        printf("The value of the 1st term of the series is %d\n", first);
    } else if (fn == 2) {
        printf("The value of the 2nd term of the series is %d\n", second);
    } else {
        // Calculate Fibonacci series iteratively
        for (int i = 3; i <= fn; i++) {
            fibonacci = second + first;
            first = second;
            second = fibonacci;
        }
        // Print the nth term of the Fibonacci series
        printf("The %d term of the Fibonacci series is %d\n", fn, fibonacci);
    }

    return 0;
}
