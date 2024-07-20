#include <stdio.h>

// Function to change the value to ten times
void cValue(int *address) {
    // Update the value at the memory address pointed to by 'address'
    *address = 10 * (*address);
}

int main() {
    int i = 10;

    printf("Value of i is %d\n", i);

    // Call the function to change the value to ten times
    cValue(&i);

    printf("Updated value of i is %d\n", i);

    return 0;
}
