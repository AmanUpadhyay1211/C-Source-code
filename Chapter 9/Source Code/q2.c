// Creating two dimensional vector using structures and after that create a function to add these two vector 

#include <stdio.h>

typedef struct vector {
    int x;
    int y;
    char name [10];
} vec;

vec sumvector(vec v1,vec v2){
    vec result;
    result.x= v1.x + v2.x;
    result.y= v1.y + v2.y;
    return result;
}

int main() {
    
    vec forces[2];
    vec *ptr = forces;
    
    for (int i = 0; i < 2; i++) {
        printf("ENTER the name of force for vector %d: ",i+1);
        scanf("%s",&ptr->name);
        
        printf("Enter the x-coordinate for vector %d: ", i + 1);
        scanf("%d", &ptr->x);
        
        printf("Enter the y-coordinate for vector %d: ", i + 1);
        scanf("%d", &ptr->y);
        
        ptr++;
    }
    
    ptr = forces;  // Reset ptr to the beginning of the array
    
    for (int i = 0; i < 2; i++) {
        printf("Vector %d is %s - x: %d, y: %d\n", i + 1,ptr->name, ptr->x, ptr->y);
        ptr++;
    }
    
    vec sum = sumvector(forces[0],forces[1]);
    printf("sum of two vector is; Sum x: %d, y:%d",sum.x,sum.y);
    
    return 0;
}