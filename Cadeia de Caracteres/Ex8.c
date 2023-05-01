#include<math.h>
#include<stdio.h>
int palin(char palavra[50]){
      int i,j,c=0;
      char inverso[50];
      for(i=0;i<strlen(palavra);i++){
         inverso[i]=palavra[strlen(palavra)-i-1];
      }
      for(j=0;j<strlen(palavra);j++){
          if(palavra[j]==inverso[j]){
            c+=1;
          }
      }
       if(c==strlen(palavra)){
           return 1;
       } else {
            return 0;
       }
}

int main(){
    int r;
    char palavra[50];
    printf("Digite uma palavra(=Inverso)=>");
    scanf("%s",palavra);
    r=palin(palavra);
    printf("Retorno:%d",r);
}
