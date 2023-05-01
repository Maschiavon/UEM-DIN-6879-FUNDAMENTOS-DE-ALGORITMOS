#include<stdio.h>
#include<math.h>

 int fibonacci(int num){
      int x=0,y=1,atual=0,i;
       for(i=1;i<num;i++){
          atual=x+y;
          x=y;
          y=atual;
       }
       printf("%d _ %d\n",i,atual);
 }

 int main(){
   int num;
   printf("Informa a qtd d vezes");
   scanf("%d",&num);
   fibonacci(num);
 }
