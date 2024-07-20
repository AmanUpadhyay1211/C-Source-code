// Creating my own version of strln() function
#include <stdio.h>

int strlen(char *a){
    int count=0;
    while(*a!='\0'){
        count++;
        a++;
    }
    return count;
}

int main() {
    char str[30];
    printf("ENTER THE STRING VALUE\n");
    gets(str);
   int length= strlen(str);
   printf("THE STRING IS %s\n",str);
   printf("THE STRING LENGTH IS %d\n",length);

    return 0;
