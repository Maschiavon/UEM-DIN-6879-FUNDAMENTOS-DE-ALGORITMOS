#include<stdio.h>
#include<math.h>

int perfeito(int num){
     int i,count=1;
     for(i=2;i<=num/2;i++){
      if(num%i==0){
        count = count + i;
      }
     }
     if(num==count){
       return 1;
     } else {
       return 0;
     }
}
int main(){
    int num,result;
    printf("Informe 1 numero\n");
    scanf("%d",&num);
    result = perfeito(num);
    printf("Retorno = %d",result);
}
