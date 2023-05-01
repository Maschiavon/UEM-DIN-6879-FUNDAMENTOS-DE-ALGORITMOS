#include<math.h>
#include<stdio.h>
#include <ctype.h>

int main(){
   char palavra[50];
   int num,i;
   printf("Digite uma palavra(Maiuscula)=>");
   scanf("%[^\n]s",palavra);
   for(i=0;i<strlen(palavra);i++){
       num = palavra[i];
      if(num>96){
        palavra[i] = toupper(num);
      }
   }

   printf("%s",palavra);
}
