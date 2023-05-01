#include<stdio.h>
#include<math.h>

 int somatorio(int num){
     int soma=0,i;
     for(i=1;i<=num;i++){
         soma=soma+i;
     }
      return soma;
 }
int main(){
     int num,r;
     printf("Informe o numero==>");
     scanf("%d",&num);
     r = somatorio(num);
     printf("%d",r);
}
