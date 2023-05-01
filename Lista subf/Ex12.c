#include<stdio.h>
#include<math.h>

long cpf_val(long cpf){
    long dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9,dig10,dig11 ,count10=0,count11=0;
     dig1 = cpf/pow(10,10);
     dig2 = cpf/pow(10,9) - (dig1*10);
     dig3 = cpf/pow(10,8) - (dig1*100 + dig2*10);
     dig4 = cpf/pow(10,7) - (dig1*1000 + dig2*100 + dig3*10);
     dig5 = cpf/pow(10,6) - (dig1*10000 + dig2*1000 +  dig3*100 +  dig4*10);
     dig6 = cpf/pow(10,5) - (dig1*100000 + dig2*10000 +  dig3*1000 + dig4*100 + dig5*10);
     dig7 = cpf/pow(10,4) - (dig1*1000000 + dig2*100000 +  dig3*10000 + dig4*1000 + dig5*100 + dig6*10);
     dig8 = cpf/pow(10,3) - (dig1*10000000 + dig2*1000000 +  dig3*100000 + dig4*10000 + dig5*1000 + dig6*100 + dig7*10);
     dig9 = cpf/pow(10,2) - (dig1*100000000 + dig2*10000000 +  dig3*1000000 + dig4*100000 + dig5*10000 + dig6*1000 + dig7*100 + dig8*10);
     dig10 = cpf/pow(10,1) -(dig1*1000000000 +dig2*100000000 + dig3*10000000 +dig4*1000000 +dig5*100000 +dig6*10000 +dig7*1000 +dig8*100 + dig9*10);
     dig11 = cpf - (dig1*10000000000+dig2*1000000000+ dig3*100000000+dig4*10000000+dig5*1000000+dig6*100000+dig7*10000+dig8*1000+ dig9*100 + dig10*10);

      printf("%d %d %d %d %d %d %d %d %d %d %d\n",dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9,dig10,dig11);
      count10 = 10*dig1 + 9*dig2 + 8*dig3 + 7*dig4 + 6*dig5 + 5*dig6 + 4*dig7 + 3*dig8 + 2*dig9  ;
        if(count10%11>=2){
        count10 = 11-(count10%11);
        } else {
        count10 = 0;
        }

      count11 = 11*dig1 + 10*dig2 + 9*dig3 + 8*dig4 + 7*dig5 + 6*dig6 + 5*dig7 + 4*dig8 + 3*dig9 + 2*dig10 ;

         if(count11%11>=2){
            dig11=11-(count11%11);
         } else {
            dig11=0;
         }

         if(count10 == dig10 && count11 == dig11 ){
              printf("O cpf � valido");
         } else {
              printf("Cpf invalido");
         }
           //,dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9
    //printf("%d %d %d %d %d %d %d %d %d",dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9);
   }
int main(){
     long cpf;
     printf("Passa o cpf que nois valida(onze digitos)==>");
     scanf("%li",&cpf);
     cpf_val(cpf);
}
