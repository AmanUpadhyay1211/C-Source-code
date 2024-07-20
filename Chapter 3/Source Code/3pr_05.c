// CHAPTER 3 QUES 5: TO FIND IF A GIVEN NUMBER IS LOWER CASE OR NOT USING ASCII VALUE
//  97-122 = a-z ASCII Values
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Your Alphabet\n");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122) // ch >= 97 && ch <= 122
    {
        printf("YOUR CHARACTER IS A LOWER-CASE CHARACTER");
    }
    else
    {
        printf("Its not a lower-case charcater");
    }
    return 0;
}