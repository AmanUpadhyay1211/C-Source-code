#include <stdio.h>

// Function to change the value to ten times
void cValue(int value) {
   
    value = 10 * (value);
}

int main() {
    int i = 10;

    printf("Value of i is %d\n", i);

    // Call the function to change the value to ten times
    cValue(i);

    printf("Updated value of i is %d\n", i);

    return 0;
}
