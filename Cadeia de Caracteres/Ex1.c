#include<math.h>
#include<stdio.h>


int main(){
    int i;
    char palavra[50];
    printf("Digite uma palavra(Length)=>");
    scanf("%s",&palavra);
    for(i=0;i<50;i++){
         if(palavra[i] == '\0'){
           break;
         }
    }
    printf("O tamanho ser: %d",i);
}
