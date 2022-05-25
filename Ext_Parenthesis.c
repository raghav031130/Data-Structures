#include<stdio.h>
int main()
{
    char expression[50];
    int x=0, i=0;
    printf("\nPlease! Enter an expression:");
    scanf("%s", expression);
    while(expression[i]!= '\0')
    {
        if((expression[i]=='(')||(expression[i]=='{')||(expression[i]=='[')||(expression[i]=='<'))
        {
            x++;
        }

        else if((expression[i]==')')||(expression[i]=='}')||(expression[i]==']')||(expression[i]=='>'))
        {
            x--;
            if(x<0)
            break;
        }
    i++;
    }
    if(x==0)
    {
        printf("Brackets are equal.");
    }

    else
    {
        printf("Brackets are not equal.");
    }
    return 0;
}



