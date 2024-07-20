// Rock paper scissors best of 10 game!!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    char com, user;
    int compoint = 0, userpoint = 0;
    char R = 'R';
    char P = 'P';
    char S = 'S';

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {

        int index = rand() % 3;
        if (index == 0)
        {
            com = R;
        }
        else if (index == 1)
        {
            com = P;
        }
        else
        {
            com = S;
        }

        printf("Choose You Sign R-P-S\n");
        scanf(" %c", &user);

        if (com == user)
        {
            printf("Draw\n");
        }
        if (com == R && user == P || com == P && user == S || com == S && user == R)
        {
            printf("You won🙏\n");
            userpoint++;
        }
        if (com == P && user == R || com == S && user == P || com == R && user == S)
        {
            printf("You LOSE👎\n");
            compoint++;
        }
    }

    if (compoint == userpoint)
    {
        printf("An INTERESTING DRAW\n🤯");
    }
    if (compoint > userpoint)
    {
        printf("YOU LOSE!!; BETTER LUCK NEXT TIME\n");
    }

    if (compoint < userpoint)
    {
        printf("You did it, You BROKE THE MATRIX\n");
    }

    printf("Computer:%d || You:%d", compoint, userpoint);

    return 0;
}