#include<math.h>
#include<stdio.h>

int main(){
int i,j,counter=0,vet[10];
   for (i=0;i<10;i++){
        printf("Informe o %d valor",i+1);
        scanf("%d",&j);
        vet[i] = j;
        if(j%2!=0){
            counter+=j;
        }
   }
   printf("%d",counter);
}
