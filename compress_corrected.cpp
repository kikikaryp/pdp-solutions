#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char seira[100];
    int i;

    scanf("%s", seira);

    int len = strlen(seira);

    int count = 1;

    for(i=0; i < len; i++)
    {

        while(seira[i] == seira[i+1])
        {
            count++;
            i++;
        }
        
        if(count > 1)
        {
            printf("%d", count);
            count = 1;
        }

        printf("%c", seira[i]);
    }


    return 0;
}
