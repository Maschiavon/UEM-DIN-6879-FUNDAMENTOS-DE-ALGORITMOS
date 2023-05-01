#include<stdio.h>
#include<math.h>

int Pn(int num){
    int resultado;

    if(num>0){
      resultado = 1;
    } else {
      resultado = 0;
    }
    return resultado;
}

int main(){
    int num,resultado;
     printf("Informe 1 numero\n");
      scanf("%d",&num);
      resultado=Pn(num);
     printf("%d",resultado);
}
