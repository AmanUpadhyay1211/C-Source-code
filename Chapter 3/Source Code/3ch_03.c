// Switch Case for grades in college
#include <stdio.h>

int main() {
    int percentage;
    printf("Enter your percentage in multiple of 10\n");
    scanf("%d",&percentage);
    
    switch(percentage){
        case 90:
            printf("GRADE A\n");
        break;
    case 80:
        printf("GRADE B\n");
        break;
    case 70:
        printf("GRADE C\n");
        break;
    case 60:
        printf("GRADE D\n");
        break;
    case 50:
        printf("GRADE E\n");
        break;
    case 40:
        printf("GRADE F\n");
        break;
    case 30:
        printf("FAIL\n");
        break;
   default:
        printf("YOU FAILED Better luck next time");
    }

    return 0;
}