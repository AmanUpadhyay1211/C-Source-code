// Calculating nth element of Fibonacci series: f(n) = f(n-1) + f(n-2)
#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int nTerm) {
    // Base case: Invalid input
    if (nTerm <= 0) {
        printf("Invalid input: Please enter a non-negative integer.\n");
        return -1; // or some other value to indicate an error
    }
    // Base cases: f(1) = 0, f(2) = 1
    else if (nTerm == 1) {
        return 0;
    } else if (nTerm == 2) {
        return 1;
    }
    // Recursive case: f(n) = f(n-1) + f(n-2)
    else {
        return fibonacci(nTerm - 1) + fibonacci(nTerm - 2);
    }
}

int main() {
    int fn;

    // Prompt user to enter the term of the Fibonacci series
    printf("Enter the number of terms of the series you want to know\n");
    scanf("%d", &fn);

    // Display the nth term of the Fibonacci series
    printf("The %d term of the Fibonacci series is %d\n", fn, fibonacci(fn));

    return 0; // Successful execution
}
