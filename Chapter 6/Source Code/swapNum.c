#include <stdio.h>
  void swap (int * a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
  }

  int main(){
    int num1 = 23, num2= 32;
    printf("num1 before swap: %d\n", num1);
    printf("num2 before swap: %d\n", num2);

     swap(&num1,&num2); printf("\n");

    printf("num1 after swap: %d\n", num1);
    printf("num2 after swap: %d\n", num2);
  }