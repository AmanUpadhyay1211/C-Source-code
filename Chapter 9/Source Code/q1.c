// Creating two dimensional vector using structures

#include <stdio.h>

typedef struct vector {
    int x;
    int y;
    char name [10];
} vec;

int main() {
    
    vec forces[3];
    vec *ptr = forces;
    
    for (int i = 0; i < 3; i++) {
        printf("ENTER the name of force for vector %d: ",i+1);
        scanf("%s",&ptr->name);
        
        printf("Enter the x-coordinate for vector %d: ", i + 1);
        scanf("%d", &ptr->x);
        
        printf("Enter the y-coordinate for vector %d: ", i + 1);
        scanf("%d", &ptr->y);
        
        ptr++;
    }
    
    ptr = forces;  // Reset ptr to the beginning of the array
    
    for (int i = 0; i < 3; i++) {
        printf("Vector %d is %s - x: %d, y: %d\n", i + 1,ptr->name, ptr->x, ptr->y);
        ptr++;
    }
    
    return 0;
}