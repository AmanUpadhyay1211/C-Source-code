// Print value of i using pointer to pointer type variable.
#include <stdio.h>

int main() {
    int i = 4;
    int *j = &i;
    int **k = &j;
    int ***m=&k;
    printf("THE VALUE OF i is %d\n", *(*(*m)));

    return 0;
}