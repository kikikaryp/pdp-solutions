#include <stdio.h>
#include <stdlib.h>

int main()
{
    char seira[100];
    char result[100];
    int freq_small[26] = {0};
    int freq_big[26] = {0};

    char who;
    int i = 0, c = 0;

    scanf("%s", seira);

    while(seira[i] != '\0')
    {

         if(seira[i]>='a' && seira[i]<='z')
        {
            freq_small[seira[i] - 'a']++;
        }
        else if(seira[i]>='A' && seira[i]<='Z')
        {
            freq_big[seira[i] - 'A']++;
        }

        i++;
    }

    for(i=0; i<26; i++)
    {
        /* If current character exists in given string */
        if(freq_small[i] != 0)
        {
            printf("%c%d", i+'a', freq_small[i]);
        }else if(freq_big[i] != 0)
        {
            printf("%c%d", i+'A', freq_big[i]);

        }
    }


    return 0;
}
