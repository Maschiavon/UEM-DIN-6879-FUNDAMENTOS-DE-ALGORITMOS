#include<stdio.h>
#include<math.h>

int sdiv(int num){
     int i,count=1;
     for(i=2;i<=num/2;i++){
      if(num%i==0){
        count = count + i;
      }
     }
       return count;
}

int main(){
     int num,r;
     printf("informe um numero e receba soma de divisores=>");
     scanf("%d",&num);
     r = sdiv(num);
     printf("%d",r);
}
