#include <stdio.h>

using namespace std;

void check_balance(char *expression)
{
    int x=0,i=0;

    while(expression[i] != '\0')
    {

        if(expression[i] == '(')
        {
            x++;
        }
        else if(expression[i] == ')')
        {
            x--;
            if(x<0)
                break;
        }
        i++;
    }

    if(x==0)
        printf("Balanced");
    else
        printf("Unbalanced");


}



int main()
{
    char expression[10000];

    scanf("%s", expression);

    check_balance(expression);

    return 0;
}
