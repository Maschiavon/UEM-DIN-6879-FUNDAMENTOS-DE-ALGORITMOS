#include<math.h>
#include<stdio.h>


int main(){
   int i,c=0;
    char palavra[50];
    printf("Digite uma palavra(Length)=>");
    scanf("%s",&palavra);

    for(i=0;i<strlen(palavra);i++){
          if(palavra[i]=='a'|| palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' || palavra[i]=='u'||
          palavra[i]=='A'|| palavra[i]=='E' || palavra[i]=='I' || palavra[i]=='O' || palavra[i]=='U'){
            c+=1;
          }
    }

    printf("%d",c);
}
