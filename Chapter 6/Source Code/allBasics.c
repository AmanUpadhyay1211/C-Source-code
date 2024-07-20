//POINTER & VALUE AT ADDRESS OPERATOR BASIC CONCEPTS

#include <stdio.h>

int main() {
    int i = 34;      
    int *p = &i;     // POINTER NAME IS j not *j star is just for declaring the pointer type variable.

    printf("%d\n", i);     // Print the value of i (should be 34).
    printf("%d\n", *p);    // Print the value pointed to by p (should be the same as i, 34).
    printf("%d\n", *&i);   // Dereference the address of i (should give us i's value, 34).
    printf("%u\n", p);     // Print the address stored in p (should be the address of i).
    printf("%u\n", &p);    // Print the address of p (where it is stored in memory).
    printf("%u\n", *&p);   // Dereference the address of p (should give us the address of i).
    printf("%u\n", *&i);   // Dereference the address of i (should give us the address of i).

    return 0;
}