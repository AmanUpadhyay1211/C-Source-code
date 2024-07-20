// Taking same string input from two methods %c,%s and comparing if they are equal or not.

#include <stdio.h>
#include <string.h>

int main() {
    char st1[50],st2[50];
    printf("ENTER STRING 1:\n");
    scanf("%s",st1);
    
    printf("ENTER 2ND STRING CHARACTER BY CHARACTER\n");
       
      int i=0; char ch;
      
 while(ch!='\n'){
     fflush(stdin);
     scanf("%c",&ch);
     st2[i]=ch;
     i++;
 }
 st2[i-1]='\0';
    
    printf("STRING 1 IS %s\n",st1);
    printf("STRING 2 IS %s\n",st2);
    
    if(strcmp( st1,st2)==0){
        printf("BOTH STRING ARE SAME\n");
    } else{
  printf("BOTH STRING ARE DIFF\n");
    }
    
    return 0;
}