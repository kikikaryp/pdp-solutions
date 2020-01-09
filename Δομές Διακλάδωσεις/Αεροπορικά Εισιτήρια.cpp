#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    
    int plithos, a, b, c;
    int c1, c2, c3;
    int timi_30 = 0 , timi_40 = 0, timi_20 = 0, timi_xwris_ekptwsi = 0, timi4 = 0, timi5=0, elaxisth_timh = 0;
    
    string etaireia;
    
    scanf("%d", &plithos);
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &c1, &c2, &c3);
    
if(c1 < c2)
{
    elaxisth_timh = c1;
    etaireia = "Aegean\n";
}else if(c1 >= c2)
{
    
    elaxisth_timh = c2;
    etaireia = "Lufthansa\n";
}

    
if(c3 < elaxisth_timh)
{
    
    elaxisth_timh = c3;
    etaireia = "Olympic\n";
}    
    
if((a<=plithos) && (a!=0))
{  
  if (plithos%a==0)
    timi_20 = (plithos * elaxisth_timh * (1 - 0.2)) * plithos/a;
  else
    timi_20 = plithos * elaxisth_timh * (1 - 0.2);   
}else
{
    if(a!=0)
        timi_20 = plithos * elaxisth_timh * (1 - 0.2);
    else 
        timi_20 = plithos * elaxisth_timh; 
}
    
if(b!=0 && plithos >= b)    
    timi_30 = (b * elaxisth_timh * (1 - 0.3)) * plithos/b;
else if(b==0) timi_30 = plithos * elaxisth_timh;
else  timi_30 = b * elaxisth_timh * (1 - 0.3);   
    
if(c!=0 && plithos >= c)    
    timi_40 = (c * elaxisth_timh * (1 - 0.4)) * plithos/c;
else if(c == 0) timi_40 = plithos * elaxisth_timh;
else  timi_40 = c * elaxisth_timh * (1 - 0.4);     
      
    
timi4 = min(timi_40,min(timi_20, timi_30)); 
  
printf("%s%d", etaireia.c_str(), timi4);    
    
return 0;
}
