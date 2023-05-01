#include<math.h>
#include<stdio.h>

int main(){
    int i,mes0,mes1;
    float vet[12],maior=-273, menor=9999999999;
    for(i=0;i<12;i++){
       printf("Preencha o mes %d==>",i+1);
       scanf("%f",&vet[i]);
       if(maior<vet[i]){
         maior=vet[i];
         mes1 = i+1;
       }
       if(menor>vet[i]){
         menor= vet[i];
         mes0 = i+1;
       }
    }
    for(i=0;i<12;i++){
        printf("Mes:%d - Temperatura: %0.2f\n",i+1,vet[i]);
    }
     printf("Maior:%0.2f - Mes:%d\n",maior,mes1);
     printf("Menor:%0.2f - Mes:%d",menor,mes0);
}
