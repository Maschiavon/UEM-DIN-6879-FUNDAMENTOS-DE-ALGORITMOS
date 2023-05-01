#include<stdio.h>
#include<math.h>

int raiz(int a , int b , int c){
      int delta;
      float result1,result2;
       delta = pow(b,2) - 4*a*c;
       if((delta>0 || delta==0) && a!=0) {
          result1 = (-b+sqrt(delta))/2.0*a;
          result2 = (-b-sqrt(delta))/2.0*a;
          printf("As Raizes são %0.2f e %0.2f",result1,result2);
       } else {
         printf("Raizes Complexas ou a = 0");
       }
}
int main(){
     int a,b,c;
      printf("Informe a,b,c\n");
       scanf("%d %d %d",&a,&b,&c);
       raiz(a,b,c);
}
