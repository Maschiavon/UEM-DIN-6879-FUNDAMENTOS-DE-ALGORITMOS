#include<math.h>
#include<stdio.h>

int fib(int n){
    //printf("Fib(%d)\n", n);
     if(n==0){
       return 0;
     }
     if(n==1){
       return 1;
     }
     return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    printf("Digite um numero==>");
    scanf("%d",&n);
    printf("%d",fib(n-1));
}
