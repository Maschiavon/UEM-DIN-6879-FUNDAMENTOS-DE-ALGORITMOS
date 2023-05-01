#include<math.h>
#include<stdio.h>

int main(){
    int i,vet[10],maior=-999999999,menor=99999999,media=0,pares=0;
    float fpares,fmedia;
    for(i=0;i<10;i++){
       printf("Preencha o vetor==>");
       scanf("%d",&vet[i]);
       if(maior<vet[i]){
          maior=vet[i];
       }
       if(menor>vet[i]){
          menor=vet[i];
       }
       media+=vet[i];
       if(vet[i]%2==0){
         pares+=1;
       }

    }
    fpares=(pares/10.0)*100;
    fmedia=media/(i+1.0);
    printf("A media: %0.2f\n",fmedia);
    printf("O maior:%d\n",maior);
    printf("O menor:%d\n",menor);
    printf("O percentual de pares:%0.2f (PorCento)",fpares);
}
