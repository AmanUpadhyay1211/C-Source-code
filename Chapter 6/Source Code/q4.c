// function of sum and average usimg pointers
#include <stdio.h>

int sum (int*a, int*b){
  return *a + *b;
}
int mul (int*a, int*b){
  return *a * *b;
}

int main(){
    int A = 5, B = 7;
  int add = sum (&A,&B);
  int mult = mul (&A,&B);
  printf("%d",add);
  printf("\n");
  printf("%d",mult);
}