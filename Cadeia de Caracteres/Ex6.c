#include<math.h>
#include<stdio.h>
#include <ctype.h>
int sufix(char a[50], char b[50]){
    int i,dif,c=0;
    dif=strlen(b)-strlen(a);

    for(i=0;i<strlen(a);i++){
      if(a[i]==b[i+dif]){
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
   printf("Digite uma palavra(Sufixo)=>");
   scanf("%[^\n]s",palavra);
    getchar();
   printf("Digite uma palavra(Palavra)=>");
   scanf("%[^\n]s",palavra2);
   sufix(palavra,palavra2);
}
