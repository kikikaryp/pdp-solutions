#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, i, j;
    double a;
    double avg = 0;
    double temp;
    
    
    scanf("%d", &n);
    
    double numbers[n];
    
    for(i=0; i < n; i++)
    {
        scanf("%lf", &a);
        avg += a;
        numbers[i] = a;
    }
    
    if((avg/n) < 10) //less than 10 -->ascending order
    {
        for(i=0; i < n - 1; i++)
        {
            
            for(j=0; j < n - 1 - i; j++)
            {
                if(numbers[j] > numbers[j+1])
                {
                    temp = numbers[j];
                    numbers[j] = numbers[j+1];
                    numbers[j+1] = temp;
                }
            }
            
        }
        
    }else
    { 
        for(i=0; i < n - 1; i++)
        {
            
            for(j=0; j < n - 1 - i; j++)
            {
                if(numbers[j] < numbers[j+1])
                {
                    temp = numbers[j];
                    numbers[j] = numbers[j+1];
                    numbers[j+1] = temp;
                }
            }     
        }
        
    }
    
    for(j=0; j < n ; j++)
    {
        printf("%.1lf \n", numbers[j]);     
    }
    
    
    return 0;
}
