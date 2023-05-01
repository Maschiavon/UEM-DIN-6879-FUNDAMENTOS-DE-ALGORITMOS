#include<math.h>
#include<stdio.h>

int main(){
    int i,j,vet[4][8],pontos[8]={0,0,0,0,0,0,0,0},maior=-1,time=0;//4 partidas x 8 times
    for(i=0;i<4;i++){
       printf("Partida %d/////\n",i+1);
       for(j=0;j<8
       ;j++){
            printf("Time %d = ",j+1);
            scanf("%d",&vet[i][j]);
       }
    }
    for(i=0;i<4;i++){
       for(j=0;j<8;j++){
          pontos[j]+=vet[i][j];
       }
    }
    for(i=0;i<8;i++){
        if(maior<pontos[i]){
           maior=pontos[i];
           time=i+1;
        }
    }
    printf("///////RESULTADOS//////\n");
    for(i=0;i<4;i++){
        printf("\nPartida %d/////////",i+1);
        for(j=0;j<8;j++){
            printf(" -Time %d=",j+1);
            printf("%d",vet[i][j]);
       }
    }
    printf("\nO Vencedor com %d Pontos ser Time %d",maior,time);

}
