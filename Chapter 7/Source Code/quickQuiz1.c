// Array of marks of 5 student
#include <stdio.h>

int main() {
    int marks[5];
    printf("NOW YOU ARE GOING TO ENTER THE MARKS OF STUDENTS\n");
    
    for(int i=0;i<5;i++){
        printf("ENTER THE MARKS OF STUDENT %d: \n", i+1);
        scanf("%d",&marks[i]);
    }
    
    for(int i=0;i<5;i++){
        printf("MARKS OF STUDENT %d is %d \n", i+1, marks[i]);
    }

    return 0;
}