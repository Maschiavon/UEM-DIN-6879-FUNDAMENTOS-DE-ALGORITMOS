#include<math.h>
#include<stdio.h>
#include <string.h>

int substr(char a[50], char b[50])
{
    int i,j,c;
    for(i=0; i<strlen(b); i++)
    {
        if(a[0]==b[i])
        {
            c = 0;
            for(j=0; j<strlen(a); j++)
            {
                if(a[j]==b[j+i])
                {
                    c+=1;
                } else {
                    break;
                }
            }
            if(c==strlen(a))
            {
                return 1;
            }
        }
    }
    return 0;

}
int main()
{
    char palavra[50],palavra2[50];
    printf("Digite uma palavra(Substring)=>");
    scanf("%[^\n]s",palavra);
    getchar();
    printf("Digite uma palavra(Palavra)=>");
    scanf("%[^\n]s",palavra2);
    int res = substr(palavra,palavra2);
    printf("Resultado: %d\n", res);
}
