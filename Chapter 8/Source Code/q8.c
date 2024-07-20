// prog. to count occurence of given character in string
#include <stdio.h>

int main() {

    char str[100]; char c;
    int count=0;
    
    printf("ENTER YOUR STRING\n");
    gets(str);
    printf("ENTER THE CHAR YOU WANT CHEAK of:\n");
    scanf(" %c",&c);
    
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==c){
             count++;
        }
        i++;
    };
    
    if(count==0){
        printf("The Character %c is not present in string",c );}
   else{printf("THE CHAR %c present  & occur %d TIMES IN STRG\n",c,count);}

    return 0;
}