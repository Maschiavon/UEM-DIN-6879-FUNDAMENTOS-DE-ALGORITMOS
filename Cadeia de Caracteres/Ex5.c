#include<math.h>
#include<stdio.h>
#include <ctype.h>
int prefix(char a[50], char b[50]){
    int i,c=0;

    for(i=0;i<strlen(a);i++){
      if(a[i]==b[i]){
          c+=1;
      }
   }
    if(c==strlen(a)){
        printf("Verdadeiro");
    } else {
        printf("Falso");
    }

}
int main(){
   char palavra[50],palavra2[50];
   int num,i;
   printf("Digite uma palavra(Com Prefixo)=>");
   scanf("%[^\n]s",palavra);
    getchar();
   printf("Digite uma palavra(Palavra)=>");
   scanf("%[^\n]s",palavra2);
   prefix(palavra,palavra2);
}
