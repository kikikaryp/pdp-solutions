#include <iostream>
#include <string.h>
#include <stdbool.h>

using namespace std;

int main()
{
    char correct[9] =  "facebook";

    char correct2[9] = "********";

    char user_input;

    bool guessed_correctly = false;

    int chances, i, j;


    chances = 3;

    for(i=0; i < 8; i++)
    {
        printf("Guess the word, Letter? \n");
        scanf(" %c", &user_input);

        for(j=0; j < 8; j++)
        {
            if(user_input == correct[j])
            {
                printf("%c", correct[j]);
                guessed_correctly = true;
                correct2[j] = user_input;
            }
            else
            {
                printf("%c", correct2[j]);
            }
        }

        if(guessed_correctly == false)
        {
            chances--;
        }

        if(chances == 0)
        {
            i = 7;
        }

        guessed_correctly = false;

        printf("\n");
    }

    if(chances > 0)
    {
        printf("You win");
    }
    else
    {
        printf("You lose");
    }

    return 0;
}
