// Creating my own version of strcpy() function

#include <stdio.h>

void strcp(char *a, char *b){
    int i;
    for(i=0;a[i]!='\0';i++){
        b[i]= a[i];
    }
    b[i]='\0';
}

int main() {
    char str1[30];
    char str2[30];
    printf("ENTER THE STRING VALUE\n");
    gets(str1);
    strcp(str1,str2);
    
    
    printf("STRING 1 IS %s\n",str1);
    printf("STRING 2 IS %s\n",str2);
   

    return 0;
}