#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int i;
    char protasi[1000] = {0};
    int freq_small[24];
    int freq_big[24];
    int einai_pantogramma;
    
    for(i=0; i < 1000; i++)
    {
        scanf("%c ", &protasi[i]);
    }
    
    for(i=0; protasi[i] != '\0'; i++)
    {
        if(protasi[i] >= 'a' && protasi[i] <= 'z')
        {
            ++freq_small[protasi[i] - 'a'];
            
        }else if(protasi[i] >= 'A' && protasi[i] <= 'Z')
        {
            ++freq_big[protasi[i] - 'A'];
        }      
    }
    
    einai_pantogramma = 1;
    
     for(i=0; i < 24; i++)
     {
         if(freq_small[i] < 1 && freq_big[i] < 1)
         {
             einai_pantogramma = -1; 
         }
     }
    
    printf("%d", einai_pantogramma);
    
    
    return 0;
}
