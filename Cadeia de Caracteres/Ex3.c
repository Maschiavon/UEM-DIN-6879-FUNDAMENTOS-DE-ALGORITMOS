#include<math.h>
#include<stdio.h>
#include <ctype.h>


int main()
{
    int i,num;
    char palavra[50];
    printf("Digite uma palavra(Underline)=>");
    scanf("%[^\n]s",palavra);

    for(i=0; i<strlen(palavra); i++)
    {
        if(palavra[i] == 32)
        {
            palavra[i] = 95;
        }
    }
    printf("%s",palavra);
}
