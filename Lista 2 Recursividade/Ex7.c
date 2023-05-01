#include<math.h>
#include<stdio.h>

int cres(int n){
    if(n==0){
       printf("%d",n);
    } else {
        cres(n-1);
       printf(" %d",n);
    }
 }

int main(){
   int n;
   printf("Digite um numero(Cres)==>");
   scanf("%d",&n);
   cres(n);
}
