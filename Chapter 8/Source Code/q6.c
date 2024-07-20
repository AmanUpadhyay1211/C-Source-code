// ENCRYT ThE STRING BY ADDING 1 TO ITS ASCII VALUES
#include <stdio.h>

void encrypt(char *st){
    char *ptr=st;
      
    while(*ptr!='\0'){
       *ptr=*ptr+1;
        ptr++;
    }
}

int main() {

    char str[100];
    printf("ENTER YOUR STRING\n");
    gets(str);
    printf("ORIGINAL STRING IS: %s\n",str);
    encrypt(str);
    printf("ENCRYPTED STRING IS: %s\n",str);

    return 0;
}


// void encrypt(char *st){     
//     while(*st!='\0'){
//        *st=*st+1;
//         st++;
//     }
// }
//this will also work