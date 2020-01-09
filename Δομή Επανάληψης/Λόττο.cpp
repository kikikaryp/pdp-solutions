#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int plithos, i = 0, j = 0;
    
    scanf("%d", &plithos);
    
     int combinations[plithos];
     int swapped_value; 
    
    for(i=0; i < plithos; i++)
    {
        scanf("%d", &combinations[i]);
        
    }
        
    swapped_value = combinations[plithos - 1]; //40
        
    //loop for every row
   for(i=0; i < plithos; i++)
    {

         //loop for every column of each row
            for(j=0; j < plithos - 1; j++)
            {
                 printf("%d ", combinations[j]);
                
            }
      
       printf("\n");
       
       
       //kratame prwta tin timi pou tha metakinhsoume sto telos
        swapped_value = combinations[plithos - i - 2]; 
       
       //ston deikth pou phrame thn timh vazoume tin timh pou
       //vrisketai sto telos
      combinations[plithos - i - 2] =  combinations[plithos - 1];; 
     
      //sto telos topotheteitai h timh pou vriskotan sto shmeio poy
       //allaksame
      combinations[plithos - 1] = swapped_value;
             
           
    }

    
    return 0;
}
